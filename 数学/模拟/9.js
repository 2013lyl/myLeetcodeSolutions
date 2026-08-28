/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let s = String(x);
    let ns = "";
    for (let i=s.length-1;i>=0;i--) {
        ns += s[i];
    }
    let nx = Number(ns);
    return (nx == x) ? true : false;
};
