 public List<Integer> rightSideView(TreeNode root) {
        List<Integer> result = new ArrayList<>(); // []
        Queue<TreeNode> queue = new LinkedList<>();  // []
        if(root == null){
            return result;
        }
        queue.add(root); // [1]
        while(!queue.isEmpty()){
            int levelSize = queue.size(); // ls: 2
            for(int i =0; i< levelSize; ++i){
                TreeNode temp = queue.poll(); // temp ->1 [1,2,3,null,5,null,4]
                if(i == levelSize - 1){
                    result.add(temp.val);
                }
                if(temp.left != null){
                    queue.add(temp.left); // q: [3,5]
                }
                if(temp.right != null){
                    queue.add(temp.right); // last - 2 q: [2,3] r: [1]
                }
            }
        }

        return result;
