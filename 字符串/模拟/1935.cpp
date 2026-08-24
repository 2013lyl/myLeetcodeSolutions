class Solution {
public:
    vector<string> split(const string& s, char delimiter) {
        vector<string> tokens;
        istringstream stream(s);
        string token;
        while (getline(stream, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
    }

    int canBeTypedWords(string text, string brokenLetters) {
        int ans=0;

        vector<char> brokenLettersLst(brokenLetters.size(), '0');
        for (int c=0;c<brokenLetters.size();c++) {
            brokenLettersLst[c] = brokenLetters[c];
        }

        vector<string> words = split(text, ' ');
        for (int i=0;i<words.size();i++) {
            string word = words[i];
            bool flag = true;

            for (int c=0;c<word.size();c++) {
                char nc = word[c];

                if (find(brokenLettersLst.begin(), brokenLettersLst.end(), nc) != brokenLettersLst.end()) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                ans ++;
            }
        }

        return ans;
    }
};
