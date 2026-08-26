class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int ret = 0;
        for (int i=0;i<=1;i++) {
            int nowColor = i;
            int ans=0;
            int r_ = red;
            int b_ = blue;
            int needNum = 1;
            while (true) {
                if (nowColor) {
                    if (r_ < needNum) {
                        break;
                    }
                    r_ -= needNum;
                }
                else {
                    if (b_ < needNum) {
                        break;
                    }
                    b_ -= needNum;
                }
                ans++;
                needNum++;
                nowColor = 1 - nowColor;
            }
            if (ans > ret) {
                ret = ans;
            }
        }
        return ret;
    }
};
