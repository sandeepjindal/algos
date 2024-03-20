// declaring a map

val mapM = mapOf<String,Int>("1" to 1, "2" to 2)

// put the value
mapM.put("3",3)

// Get the value
mapM["3"]
mapM.getOrElse("3", {print("this is 3"); 0)
mapM.getOrDefault("3", 0)

// functional api's
val iceCreamInventory = shipments
  .groupBy({ it.flavor }, { it.quantity })
  .mapValues { it.value.sum() }


// Reference : https://www.baeldung.com/kotlin/maps
