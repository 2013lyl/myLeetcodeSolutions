class Solution {
    public String tenToTwo(int num) {
        StringBuilder sb = new StringBuilder();

        while (num > 0) {
            sb.append(num % 2);
            num /= 2;
        }
 
        return sb.toString();
    }

    public boolean hasAlternatingBits(int n) {
        String t = tenToTwo(n);

        boolean flag = true;
        for (int i=1;i<t.length();i++) {
            if (t.charAt(i-1)-'0' == t.charAt(i)-'0') {
                flag = false;
                break;
            }
        }

        return flag;
    }
}
