class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        int n = nums.length;

        Arrays.sort(nums);

        for (int i=0;i<n;i++) {
            if (i > 0 && nums[i-1] == nums[i]) continue;
            for (int j=i+1;j<n;j++) {
                if (j > i+1 && nums[j-1] == nums[j]) continue;
                
                long t = (long) target - nums[i] - nums[j];
                int l=j+1, r=n-1;
                while (l < r) {
                    long sum = (long) nums[l] + nums[r];

                    if (sum == t) {
                        List<Integer> newLst = Arrays.asList(nums[i], nums[j], nums[l], nums[r]);
                        ans.add(newLst);
                        while (l < r && nums[l+1] == nums[l]) l++;
                        while (l < r && nums[r-1] == nums[r]) r--;
                        r--;
                        l++;
                    }
                    else if (sum < t) {
                        l++;
                    }
                    else {
                        r--;
                    }
                }
            }
        }

        return ans;
    }
}
