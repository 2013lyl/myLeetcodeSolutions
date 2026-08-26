class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int n=nums.length;
        int ans=0;

        int l=0;
        int sum=1;

        for (int r=0;r<n;r++) {
            sum *= nums[r];
            while (sum >= k) {
                if (l >= n) {
                    return ans;
                }
                sum /= nums[l];
                l++;
            }
            ans += (r - l) + 1; 
        }

        return ans;
    }
}
