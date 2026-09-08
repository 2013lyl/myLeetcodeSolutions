class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans(2*nums.size(), 0);
        for (int i=0;i<nums.size();i++) {
            ans[i] = nums[i];
        }

        int j=nums.size();
        for (int i=nums.size()-1;i>=0;i--) {
            ans[j] = nums[i];
            j++;
        }

        return ans;
    }
};
