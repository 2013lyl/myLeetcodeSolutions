class Solution {
public:
    int maxScore(int n, int k, vector<vector<int>>& stayScore, vector<vector<int>>& travelScore) {
        vector<vector<int>> dp(k+1, vector<int>(n, 0));
        for (int day=0;day<k;day++) {
            for (int curr=0;curr<n;curr++) {
                dp[day+1][curr] = max(dp[day+1][curr], dp[day][curr] + stayScore[day][curr]);
                for (int dest=0;dest<n;dest++) {
                    if (dest == curr) continue;
                    dp[day+1][dest] = max(dp[day+1][dest], dp[day][curr] + travelScore[curr][dest]);
                }
            }
        }
        int ans=0;
        for (int i=0;i<n;i++) ans = max(ans, dp[k][i]);
        return ans;
    }
};
