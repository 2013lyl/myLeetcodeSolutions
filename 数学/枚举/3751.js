/**
 * @param {number} num1
 * @param {number} num2
 * @return {number}
 */
var totalWaviness = function(num1, num2) {
    let ans=0;
    for (let i=num1;i<=num2;i++) {
        let is = String(i);
        let isize = is.length;
        if (isize < 3) continue;
        for (let j=1;j<isize-1;j++) {
            if (is[j] > is[j-1] && is[j] > is[j+1]) ans++;
            if (is[j] < is[j-1] && is[j] < is[j+1]) ans++;
        }
    }
    return ans;
};
