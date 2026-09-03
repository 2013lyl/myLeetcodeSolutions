/**
 * @param {number} n
 * @return {number}
 */
var numSquares = function(n) {
    const INT_MAX = 2147483647;

    let dp = [];
    for (let i=0;i<=n;i++) {
        dp.push(INT_MAX);
    }
    dp[0] = 0;

    for (let i=1;i<=n;i++) {
        for (let j=1;j*j<=i;j++) {
            dp[i] = Math.min(dp[i], dp[i-j*j]+1);
        }
    }

    return dp[n];
};
