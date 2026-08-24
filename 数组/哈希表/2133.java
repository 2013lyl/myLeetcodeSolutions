class Solution {
    public boolean checkValid(int[][] matrix) {
        int n = matrix.length;
        for (int r=0;r<n;r++) {
            boolean[] rowSeen = new boolean[n+1];
            boolean[] colSeen = new boolean[n+1];

            for (int c=0;c<n;c++) {
                int rowVal = matrix[r][c];
                if (rowVal < 1 || rowVal > n || rowSeen[rowVal]) return false;
                rowSeen[rowVal] = true;

                int colVal = matrix[c][r];
                if (colVal < 1 || colVal > n || colSeen[colVal]) return false;
                colSeen[colVal] = true;
            }
        }

        return true;
    }
}
