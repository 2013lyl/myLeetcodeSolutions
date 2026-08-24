class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int r=0;r<n;r++) {
            vector<bool> rowSeen(n+1, 0);
            vector<bool> colSeen(n+1, 0);

            for(int c=0;c<n;c++) {
                int rowVal = matrix[r][c];
                if (rowVal < 1 || rowVal > n || rowSeen[rowVal]) return false;
                rowSeen[rowVal] = 1;

                int colVal = matrix[c][r];
                if (colVal < 1 || colVal > n || colSeen[colVal]) return false;
                colSeen[colVal] = 1;
            }
        }

        return true;
    }
};
