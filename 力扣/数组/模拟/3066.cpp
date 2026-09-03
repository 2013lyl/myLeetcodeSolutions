class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for (int n : nums) pq.push(n);

        int ans=0;

        while (pq.size() >= 2 && pq.top() < k) {
            long long x = pq.top(); pq.pop();
            long long y = pq.top(); pq.pop();
            long long v = min(x, y)*2 + max(x, y);
            pq.push(v);
            ans++;
        }

        return ans;
    }
};
