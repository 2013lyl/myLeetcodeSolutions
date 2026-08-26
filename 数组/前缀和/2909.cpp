class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();

        vector<int> left(n, INT_MAX);
        vector<int> right(n, INT_MAX);
        int minSoFar = INT_MAX;
        for (int i=0;i<n;i++) {
            if (minSoFar < nums[i]) {
                left[i] = minSoFar;
            }
            minSoFar = min(nums[i], minSoFar);
        }
        minSoFar = INT_MAX;
        for (int i=n-1;i>=0;i--) {
            if (minSoFar < nums[i]) {
                right[i] = minSoFar;
            }
            minSoFar = min(nums[i], minSoFar);
        }

        int ans=INT_MAX;
        for (int j=1;j<n-1;j++) {
            if (left[j]!=INT_MAX && right[j]!=INT_MAX) {
                ans = min(ans, left[j] + nums[j] + right[j]);
            }
        }

        return (ans!=INT_MAX) ? ans : -1;
    }
};
