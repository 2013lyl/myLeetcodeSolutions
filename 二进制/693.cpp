class Solution {
public:
    string tenToTwo(int num) {
        string ans = "";

        while (num > 0) {
            ans = to_string(num % 2) + ans;
            num /= 2;
        }

        return ans;
    }

    bool hasAlternatingBits(int n) {
        string t = tenToTwo(n);

        bool flag = true;
        for (int i=1;i<t.size();i++) {
            if (t[i-1]-'0' == t[i]-'0') {
                flag = false;
                break;
            }
        }

        return flag;
    }
};
