class Solution {
    public int maxScore(int n, int k, int[][] stayScore, int[][] travelScore) {
        int[][] dp = new int[k+1][n];
        for (int day=0;day<k;day++) {
            for (int curr=0;curr<n;curr++) {
                dp[day+1][curr] = Math.max(dp[day+1][curr], dp[day][curr] + stayScore[day][curr]);

                for (int dest=0;dest<n;dest++) {
                    if (dest == curr) continue;
                    dp[day+1][dest] = Math.max(dp[day+1][dest], dp[day][curr] + travelScore[curr][dest]);
                }
            }
        }
        int ans=0;
        for (int i=0;i<n;i++) ans = Math.max(ans, dp[k][i]);
        return ans;
    }
}
