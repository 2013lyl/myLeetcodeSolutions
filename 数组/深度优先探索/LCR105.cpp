class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;

        for (int r=0;r<grid.size();r++) {
            for (int c=0;c<grid[0].size();c++) {
                if (grid[r][c] == 1) {
                    ans = max(ans, dfs(grid, r, c));
                }
            }
        }

        return ans;
    }

    int dfs(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) return 0;

        grid[i][j] = 0;

        return 1 + dfs(grid, i+1, j) 
                + dfs(grid, i-1, j) 
                + dfs(grid, i, j+1) 
                + dfs(grid, i, j-1);
    }
};
