class Solution {
public:
    int largestInteger(int num) {
        string n = to_string(num);
        
        vector<int> ji={};
        vector<int> ou={};

        for (int i=0;i<n.size();i++) {
            int now = n[i]-'0';
            if (now % 2 == 0) {
                ou.push_back(now);
            }
            else {
                ji.push_back(now);
            }
        }

        sort(ji.begin(), ji.end(), greater<int>());
        sort(ou.begin(), ou.end(), greater<int>());

        int oui=0, jii=0;
        for (char& c:n) {
            if ((c-'0') % 2 == 0) {
                c = ou[oui++]+'0';
            }
            else {
                c = ji[jii++]+'0';
            }
        }

        return stoi(n);
    }
};
