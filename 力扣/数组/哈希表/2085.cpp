class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> dct1={};
        unordered_map<string, int> dct2={};

        for (string w:words1) dct1[w]++;
        for (string w:words2) dct2[w]++;

        int ans=0;
        for (auto [k, v] : dct1) {
            if (v == 1 && dct2[k] == 1) {
                ans++;
            }
        }
        return ans;
    }
};
