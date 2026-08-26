class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans = {};

        sort(nums.begin(), nums.end());

        for (int i=0;i<nums.size();i++) {
            if (i > 0 && nums[i-1] == nums[i]) {
                continue;
            }

            for (int j=i+1;j<nums.size();j++) {
                if (j > i+1 && nums[j-1] == nums[j]) {
                    continue;
                }

                long long v = (long long) target - nums[i] - nums[j];
                int l=j+1, r=nums.size()-1;
                while (l < r) {
                    int sum = nums[l] + nums[r];
                    if (sum == v) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while (l < r && nums[l] == nums[l+1]) l++;
                        while (l < r && nums[r] == nums[r-1]) r--;
                        r--;
                        l++;
                    }
                    else if (sum < v) {
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
};
