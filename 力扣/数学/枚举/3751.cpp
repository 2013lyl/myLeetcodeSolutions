class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for (int i=num1;i<=num2;i++) {
            string is = to_string(i);
            int isize = is.size();
            if (isize < 3) continue;
            for (int j=1;j<isize-1;j++) {
                if (is[j] > is[j-1] && is[j] > is[j+1]) ans++;
                if (is[j] < is[j-1] && is[j] < is[j+1]) ans++;
            }
        }
        return ans;
    }
};
