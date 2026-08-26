class Solution {
    public int minimumOperations(int[] nums) {
        int ans = 0;

        while (sum(nums) != 0) {
            step(nums);
            ans++;
        }
        
        return ans;
    }

    public int sum(int[] nums) {
        int ans = 0;
        for (int i=0;i<nums.length;i++) {
            ans += nums[i];
        }
        return ans;
    }

    public void step(int[] nums) {
        int minNumber = 999999;

        for (int i=0;i<nums.length;i++) {
            if (nums[i] > 0 &&nums[i] < minNumber) {
                minNumber = nums[i];
            }
        }
        for (int i=0;i<nums.length;i++) {
            if (nums[i] > 0) {
                nums[i] -= minNumber;
            }
        }
    }
}
