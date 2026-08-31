/**
 * @param {number} n
 * @return {string[]}
 */

var generateParenthesis = function(n) {
    let res = [];

    var dfs = function(s, l, r, n) {
        if (l == n && r == n) {
            res.push(s);
            return;
        }

        if (l < n) {
            dfs(s+'(', l+1, r, n);
        }

        if (r < l) {
            dfs(s+')', l, r+1, n);
        }
    }

    dfs("", 0, 0, n);
    return res;
};
