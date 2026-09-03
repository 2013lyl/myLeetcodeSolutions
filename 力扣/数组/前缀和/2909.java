class Solution {
    public int minimumSum(int[] nums) {
        int n = nums.length;

        int[] leftMin = new int[n];
        int minSoFar = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            if (minSoFar < nums[i]) {
                leftMin[i] = minSoFar;
            } else {
                leftMin[i] = Integer.MAX_VALUE;
            }
            minSoFar = Math.min(minSoFar, nums[i]);
        }

        int[] rightMin = new int[n];
        minSoFar = Integer.MAX_VALUE;
        for (int i=n-1;i>=0;i--) {
            if (minSoFar < nums[i]) {
                rightMin[i] = minSoFar;
            }
            else {
                rightMin[i] = Integer.MAX_VALUE;
            }
            minSoFar = Math.min(minSoFar, nums[i]);
        }

        int ans=Integer.MAX_VALUE;
        for (int j=1;j<n-1;j++) {
            if (leftMin[j] != Integer.MAX_VALUE && rightMin[j] != Integer.MAX_VALUE) {
                ans = Math.min(ans, leftMin[j] + nums[j] + rightMin[j]);
            }
        }

        return (ans!=Integer.MAX_VALUE) ? ans : -1;
    }
}
