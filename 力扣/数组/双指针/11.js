/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let l=0, r=height.length-1;
    let ans=-999999;
    while (l < r) {
        let now = Math.min(height[l], height[r]) * (r - l);
        if (now > ans) {
            ans = now;
        }
        if (height[l] > height[r]) {
            r--;
        } else {
            l++;
        }
    }
    return ans;
};
