class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans=nums[n-1]-nums[0];

        for (int m=0;m<n-1;m++) {
            int mx = max(nums[n-1] - k, nums[m] + k);
            int mn = min(nums[m+1] - k, nums[0] + k);
            if (mx - mn < ans) {
                ans = mx - mn;
            }
        }
        
        return ans;
    }
};
