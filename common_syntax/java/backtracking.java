 private void combinationSumHelper(int[] candidates, int remaining ,List<Integer> currentList, int start, List<List<Integer>> result){
        if(remaining == 0){
            result.add(new ArrayList(currentList));
            return;
        } else if(remaining < 0){
            return;
        }
        for(int i =start; i< candidates.length; i++){
            currentList.add(candidates[i]);
            combinationSumHelper(candidates, remaining - candidates[i], currentList, i, result);
            currentList.removeLast(); 
        }
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<>();
        int currentSum = 0;
        List<Integer> currList = new ArrayList<>();
        combinationSumHelper(candidates, target, currList, 0, result);

        return result;
    }
