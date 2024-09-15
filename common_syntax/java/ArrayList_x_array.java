// arraylist to int[]
arrayList.stream().mapToInt(Integer::intValue).toArray();

// int[] -> arrayList       
List<Integer> arrayList = Arrays.stream(intArray).boxed().collect(ArrayList::new, ArrayList::add, ArrayList::addAll);
