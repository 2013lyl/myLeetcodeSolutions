class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int ans=0;

        vector<long long> pre(n+1, 0);
        for (int i=1;i<=n;i++) {
            pre[i] = pre[i-1] + nums[i-1];
        }

        for (int i=0;i<n;i++) {
            for (int j=i;j<n;j++) {
                long long now = pre[j+1] - pre[i];
                long long first = now;
                while (first >= 10) first /= 10;
                if (first == x && now%10 == x) ans++;
            }
        }

        return ans;
    }
};
