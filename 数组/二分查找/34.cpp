class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=-1, end=-1;

        int l=0, r=nums.size()-1;
        int ans=-1;
        while (l <= r){
            int mid = (l + r) / 2;
            if (nums[mid] == target){
                ans = mid;
                r = mid - 1;
            }
            else if (nums[mid] < target){
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        start = ans;

        l = 0;
        r = nums.size()-1;
        ans = -1;
        while (l <= r){
            int mid = (l + r) / 2;
            if (nums[mid] == target){
                ans = mid;
                l = mid + 1;
            }
            else if (nums[mid] < target){
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        end = ans;

        vector<int> ans_ = {start, end};
        return ans_;
    }
};
