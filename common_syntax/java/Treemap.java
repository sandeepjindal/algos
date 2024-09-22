  public static void main(String[] args) {
        TreeMap<Integer, String> treeMap = new TreeMap<>(new Comparator<Integer>() {
            @Override   

            public int compare(Integer   
 i1, Integer i2) {
                return i2.compareTo(i1);
            }
        });

        treeMap.put(10, "Ten");
        treeMap.put(5, "Five");
        treeMap.put(15, "Fifteen");

        for (Map.Entry<Integer, String> entry : treeMap.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    }
