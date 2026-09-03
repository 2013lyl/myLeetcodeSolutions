class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = new int[2];
        int start=-1, end=-1;

        int l=0, r=nums.length-1;
        int ans1 = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (nums[m] == target) {
                ans1 = m;
                r = m - 1;
            }
            else if (nums[m] < target) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        start = ans1;

        l = 0;
        r = nums.length-1;
        int ans2 = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (nums[m] == target) {
                ans2 = m;
                l = m + 1;
            }
            else if (nums[m] < target) {
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        end = ans2;

        ans[0] = start;
        ans[1] = end;
        return ans;
    }
}
