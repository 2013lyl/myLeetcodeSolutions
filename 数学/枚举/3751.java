class Solution {
    public int totalWaviness(int num1, int num2) {
        int ans=0;
        for (int i=num1;i<=num2;i++) {
            String is = String.valueOf(i);
            int isize = is.length();
            if (isize < 3) continue;
            for (int j=1;j<isize-1;j++) {
                if (is.charAt(j) > is.charAt(j-1) && is.charAt(j) > is.charAt(j+1)) ans++;
                if (is.charAt(j) < is.charAt(j-1) && is.charAt(j) < is.charAt(j+1)) ans++;
            }
        }
        return ans;
    }
}
