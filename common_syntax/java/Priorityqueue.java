    public static void main(String[] args) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>(new   
 Comparator<Integer>() {
            @Override
            public int compare(Integer i1, Integer i2) {
                return i2.compareTo(i1);
            }
        });
        // alternative 1
        //         Queue<Integer> pq = new PriorityQueue<>( (i1, i2) -> {
        //     return i2-i1;
        // });

        // alternative 2
        //        Queue<Pair<Integer, Integer>> pq = new PriorityQueue<Pair<Integer,Integer>>
        //    (Comparator.comparing(Pair::getKey));

        priorityQueue.offer(10);   

        priorityQueue.offer(5);
        priorityQueue.offer(15);

        while (!priorityQueue.isEmpty()) {
            System.out.println(priorityQueue.poll());
        }
    }
