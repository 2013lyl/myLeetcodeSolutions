class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;

        while (sum(nums) != 0) {
            step(nums);
            ans++;
        }

        return ans;
    }

    int sum(vector<int>& nums) {
        int sum = 0;
        for (int i=0;i<nums.size();i++) {
            sum += nums[i];
        }
        return sum;
    }

    void step(vector<int>& nums) {
        int minNum = 99999;

        for (int i=0;i<nums.size();i++) {
            if (nums[i] > 0 && nums[i] < minNum) {
                minNum = nums[i];
            }
        }

        for (int i=0;i<nums.size();i++) {
            if (nums[i] > 0) {
                nums[i] -= minNum;
            }
        }
    }
};
