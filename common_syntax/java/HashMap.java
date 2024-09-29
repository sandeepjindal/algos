Map<String, Integer> frequency = new HashMap<>();

frequency.putIfAbsent("sandeep", 1);
frequency.putIfAbsent("smily", 2);

frequency.containskey("smily");
frequency.containsValue(2);

frequency.getOrDefault("smily", 0); // 2

frequency.merge("smily", 3, (v1, v2) -> (v1+v2)); // smily: 5

frequence.computeIfAbsent("sandy", s-> s.length()) // sandy: 6

