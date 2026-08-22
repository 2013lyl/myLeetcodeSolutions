class Solution {
    public int waysToChange(int n) {
        int[] money = {1, 5, 10, 25};
        long[] dp = new long[n+1];
        dp[0] = 1;

        for (int coin : money) {
            for (int j=coin;j<=n;j++) {
                dp[j] = (dp[j] + dp[j-coin]) % 1000000007;
            }
        }

        return (int) dp[n];
    }
}
