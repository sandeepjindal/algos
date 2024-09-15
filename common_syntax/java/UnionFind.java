    class DisjointSet {
        List<Integer> rank = new ArrayList<Integer>();
        List<Integer> parent = new ArrayList<Integer>();        

        public DisjointSet(int n){
            for(int i =0; i < n; ++i){
                rank.add(0);
                parent.add(i);
            }
        }

        public boolean unionByRank(int u1, int u2) {
            int p1 = findParent(u1);
            int p2 = findParent(u2);
            System.out.println("for " + u1 + " -> " +u2);
            System.out.println(" parent are " + p1 + " -> " +p2);

            if(p1 == p2) return false;
            else if(rank.get(p1) > rank.get(p2)){
                parent.set(p2, u1);
            } else if(rank.get(p1) < rank.get(p2)){
                parent.set(p1, p2);
            } else{
                parent.set(p2, p1);
                rank.set(p1, rank.get(p1)+1);
            }  
            return true; 
        }

        public int findParent(int u) {
            if(u != parent.get(u)) {
                parent.set(u,findParent(parent.get(u)));
            }
            return parent.get(u);
        }

    }

    public int[] findRedundantConnection(int[][] edges) {
        DisjointSet ds = new DisjointSet(MAX_EDGE_VAL+1);

        for(int[] edge: edges){
            System.out.println(edge[0] + " -> " +edge[1] );
            if(!ds.unionByRank(edge[0], edge[1])) return edge;
        }

        return new int[]{-1,-1};

    }
