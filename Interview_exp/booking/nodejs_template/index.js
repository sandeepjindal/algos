(function(redis){

    var red = require('redis');
    var messages = require("../messages.js");
    var logger = require('winston');
    var settings = require("../settings.js");
    var client = red.createClient(6379, settings.REDIS_HOST);

    client.on('connect', function (err) {
        if(!err){
            console.log('connected to redis');
            client.select(settings.REDIS_DB, function(err){
                if(err) {
                    console.log("common::init : Unable to initialize AppSettings. %s", err);
                } else {
                    console.log("common::init : Initialized AppSettings");
                }
            });
        }
        if(err){
            console.log("Error");
        }
    });
    client.on('error', function(err) {
        console.log('Error occurred');
        console.log(err);
    });

    redis.fetch = function(key, onFetch){
        client.exists(key, function(error, reply){
            if(error){
                onFetch(error, null);
                return;
            }
            if(reply == 1){
                client.get(key, onFetch);
            } else{
                logger.info("Key: " + key + " not found", {timestamp : new Date()});
                onFetch(messages.REDIS_KEY_NOT_FOUND, null);
            }
        });
    };

    redis.update = function(key, value, onUpdate, expiry){
        client.set(key, value, function(err, reply){
            if(err){
                onUpdate(err, null);
                return;
            }
            if(expiry != null){
                client.expire(key, expiry);
            }
            onUpdate(null, reply);
        });
    };

    redis.delete = function(redisKey, onDelete){
        client.del(redisKey, function(err, reply){
            if(err){
                onDelete(err, null);
                return;
            }
            onDelete(null, reply);
        });
    };

    redis.fetchHash = function(key, onFetch){
        client.exists(key, function(error, reply){
            if(error){
                onFetch(error, null);
                return;
            }
            if(reply == 1){
                client.hgetall(key, onFetch);
            } else{
                logger.info("Key: " + key + " not found", {timestamp : new Date()});
                onFetch(messages.REDIS_KEY_NOT_FOUND, null);
            }
        });
    };

    redis.updateHash = function(redisKey, key, value, onUpdate){
        client.hset(redisKey, key, value, function(err, reply){
            if(err){
                onUpdate(err, null);
                return;
            }
            onUpdate(null, reply);
        });
    };

    redis.deleteHashFields = function(redisKey, keys, onDelete){
        client.hdel(redisKey, keys, function(err, reply){
            if(err){
                onDelete(err, null);
                return;
            }
            onDelete(null, reply);
        });
    };

    redis.delete = function(redisKey, onDelete){
        client.del(redisKey, function(err, reply){
            if(err){
                onDelete(err, null);
                return;
            }
            onDelete(null, reply);
        });
    };

    redis.keys = function(pattern, onKeys){
        client.keys(pattern, function(err, reply){
            if(err)
                onKeys(err, null);
            else
                onKeys(null, reply);
        });
    };
    redis.updateHashTTL = function(redisKey, key, value, expire, onUpdate){
        client.hset(redisKey, key, value, function(err, reply){
            if(err){
                onUpdate(err, null);
                return;
            }
            client.expire(redisKey, parseInt(expire), function(err, reply){
                if(err){
                    onUpdate(err, null);
                    return;
                }
                onUpdate(null, reply);
            });
        });
    };

    redis.updateMultiHash = function(key, object, onUpdate){
        client.hmset(key, object, function(err, reply){
            if(err)
                onUpdate(err, null);
            else
                onUpdate(null, reply);
        });
    };

    redis.checkIfIsMember = function(key, value, onCheck){
        client.sismember(key, value, function(err, reply){
            if(err){
                onCheck(err, null);
                return;
            }
            onCheck(null, reply);
        });
    };

})(module.exports);
