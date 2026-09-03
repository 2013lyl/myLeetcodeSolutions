class Solution {
    public boolean contains(int[] lst, int target) {
        for (int i=0;i<lst.length;i++) {
            if (lst[i] == target) {
                return true;
            }
        }
        return false;
    }

    public int maxCount(int[] banned, int n, int maxSum) {
        int sum=0;
        int ans=0;
        for (int i=1;i<=n;i++) {
            int newNum = i;
            if (!contains(banned, newNum)) {
                if (sum + newNum <= maxSum) {
                    sum += newNum;
                    ans++;
                }
                else {
                    break;
                }
            }
        }

        return ans;
    }
}
