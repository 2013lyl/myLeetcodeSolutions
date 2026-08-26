class Solution {
public:
    int waysToChange(int n) {
        int money[4] = {1, 5, 10, 25};
        vector<long long> dp(n+1, 0);
        dp[0] = 1;

        for (int a=0;a<4;a++) {
            int coin = money[a];

            for (int j=coin;j<=n;j++) {
                dp[j] = (dp[j] + dp[j-coin]) % 1000000007;
            }
        }
 
        return (int) dp[n];
    }
};
