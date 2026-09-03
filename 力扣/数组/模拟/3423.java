class Solution {
    public int maxAdjacentDistance(int[] nums) {
        int[] lst = new int[nums.length*2];
        for (int a=1;a<=2;a++) {
            for (int i=0;i<nums.length;i++) {
                if (a == 1) {
                    lst[i] = nums[i];
                }
                else {
                    lst[nums.length+i] = nums[i];
                }
            }
        }

        int ans=-999999;
        for (int i=0;i<lst.length-1;i++) {
            int n = Math.abs(lst[i] - lst[i+1]);
            if (n > ans) {
                ans = n;
            }
        }

        return ans;
    }
}
