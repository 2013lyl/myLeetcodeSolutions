class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> ans = {};
        vector<int> bad(nums.size()-1, 0);
        for (int i=0;i<nums.size()-1;i++) {
            if ((nums[i] & 1 && nums[i+1] & 1) || (!(nums[i] & 1) && !(nums[i+1] & 1))) {
                bad[i] = 1;
            }
        }

        vector<int> pre(nums.size(), 0);
        for (int i=1;i<nums.size();i++) {
            pre[i] = pre[i-1] + bad[i-1];
        }

        for (int a=0;a<queries.size();a++) {
            int from=queries[a][0], to=queries[a][1];
            int cnt = pre[to] - pre[from];
            ans.push_back(cnt == 0);
        }

        return ans;
    }
};
