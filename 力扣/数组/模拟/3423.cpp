class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        vector<int> lst(nums.size()*2, 0);
        for (int a=1;a<=2;a++) {
            for (int i=0;i<nums.size();i++) {
                if (a == 1) {
                    lst[i] = nums[i];
                }
                else {
                    lst[nums.size()+i] = nums[i];
                }
            }
        }

        int ans=-999999;
        for (int i=0;i<lst.size()-1;i++) {
            int n = abs(lst[i] - lst[i+1]);
            if (n > ans) {
                ans = n;
            }
        }

        return ans;
    }
};
