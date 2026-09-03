class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=-999;
        int left, right;
        left = 0;
        right = height.size()-1;

        while (left < right){
            int size = (right-left) * (min(height[left], height[right]));
            ans = max(ans, size);

            if (height[left] > height[right]){
                right--;
            }
            else {
                left++;
            }
        }

        return ans;
    }
};
