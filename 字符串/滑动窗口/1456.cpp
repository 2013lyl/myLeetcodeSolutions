class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int cnt=0, ans = 0;

        for (int i=0;i<s.size();i++) {
            if (vowels.count(s[i])) cnt++;
            if (i >= k && vowels.count(s[i-k])) cnt--;
            if (i >= k - 1) ans = max(ans, cnt);
        }

        return ans;
    }
};
