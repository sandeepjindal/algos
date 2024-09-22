// arraylist to int[]
arrayList.stream().mapToInt(Integer::intValue).toArray();

// max of array
arrayList.stream().max().orElse(Integer::MIN_VALUE);

// int[] -> arrayList       
List<Integer> arrayList = Arrays.stream(intArray).boxed().collect(ArrayList::new, ArrayList::add, ArrayList::addAll);
