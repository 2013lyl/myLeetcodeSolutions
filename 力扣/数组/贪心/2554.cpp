class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum=0;
        int ans=0;
        for (int i=1;i<=n;i++) {
            int newNum = i;
            if (find(banned.begin(), banned.end(), newNum) == banned.end()) {
                if (sum + newNum <= maxSum) {
                    sum += newNum;
                    ans++;
                }
                else {
                    break;
                }
            }
        }

        return ans;
    }
};
