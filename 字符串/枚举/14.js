/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    if (strs.length == 1 && strs[0].length == 0) return "";
    if (strs.length == 1) return strs[0];

    let nowCheckLeng = 1;
    let lastString = "";
    let ans="";
    while (true) {
        for (let i=0;i<strs.length;i++) {
            if (strs[i].length < nowCheckLeng) return ans;
            if (strs[i].length == 0) return ans;
            if (i == 0) {
                lastString = strs[i].slice(0, nowCheckLeng);
            } else {
                let nowString = strs[i].slice(0, nowCheckLeng);
                if (nowString != lastString) {
                    return ans;
                }
            }
        }
        ans += strs[0][nowCheckLeng-1];
        nowCheckLeng++;
    }
    return ans;
};
