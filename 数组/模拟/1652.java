class Solution {
    public int[] decrypt(int[] code, int k) {
        if (k == 0) {
            for (int i=0;i<code.length;i++) {
                code[i] = 0;
            }

            return code;
        }

        else if (k > 0) {
            int[] lst = code.clone();

            for (int i=0;i<lst.length;i++) {
                int sum = 0;
                for (int j=1;j<=Math.abs(k);j++) {
                    int id = (i + j) % code.length;
                    sum += code[id];
                }
                lst[i] = sum;
            }

            return lst;
        }

        else {
            int[] lst = code.clone();

            for (int i=0;i<lst.length;i++) {
                int sum = 0;
                for (int j=1;j<=Math.abs(k);j++) {
                    int id = (i - j + code.length) % code.length;
                    sum += code[id];
                }
                lst[i] = sum;
            }

            return lst;
        }
    }
}
