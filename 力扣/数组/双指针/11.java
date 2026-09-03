class Solution {
    public int maxArea(int[] height) {
        int ans=-999999;
        int l=0, r=height.length-1;
        while (l < r) {
            int now = Math.min(height[l], height[r]) * (r - l);
            if (now > ans) {
                ans = now;
            }
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }
}
