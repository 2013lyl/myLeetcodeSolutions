class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> comb = new ArrayList<>();
        dfs(candidates, target, 0, comb, result);
        return result;
    }

    public void dfs(int[] candidates, int target, int start, List<Integer> comb, List<List<Integer>> result) {
        if (target == 0){
            result.add(new ArrayList<>(comb));
            return;
        }

        for (int i=start;i<candidates.length;i++){
            if (candidates[i] > target) break;
            comb.add(candidates[i]);
            dfs(candidates, target - candidates[i], i, comb, result);
            comb.remove(comb.size() - 1);
        }
    }
}
