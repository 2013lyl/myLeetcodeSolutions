class Solution {
public:
    vector<string> res={};

    vector<string> generateParenthesis(int n) {
        dfs("", 0, 0, n);

        return res;
    }
    
    void dfs(string s, int l, int r, int n) {
        if (l == n && r == n) {
            res.push_back(s);
            return;
        }

        if (l < n) {
            dfs(s+'(', l+1, r, n);
        }

        if (r < l) {
            dfs(s+')', l, r+1, n);
        }
    }
};
