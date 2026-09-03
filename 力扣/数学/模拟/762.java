class Solution {
    boolean checkZ(int num) {
        if (num == 0 || num == 1) return false;

        for (int i=2;i*i<=num;i++) {
            if (num % i == 0) return false;
        }
        return true;
    }

    boolean check(int num) {
        int cnt=0;
        while (num > 0) {
            int now = num % 2;
            if (now == 1) cnt++;
            num /= 2;
        }
        return checkZ(cnt);
    }

    public int countPrimeSetBits(int left, int right) {
        int ans=0;
        for (int i=left;i<=right;i++) {
            if (check(i)) ans++;
        }
        return ans;
    }
}
