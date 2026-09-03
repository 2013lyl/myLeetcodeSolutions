class Solution {
    public List<String> res = new ArrayList<>();

    public List<String> generateParenthesis(int n) {
        dfs("", 0, 0, n);

        return res;
    }

    public void dfs(String s, int l, int r, int n) {
        if (l == n && r == n) {
            res.add(s);
            return;
        }

        if (l < n) {
            dfs(s+'(', l+1, r, n);
        }
        if (r < l) {
            dfs(s+')', l, r+1, n);
        }
    }
}
