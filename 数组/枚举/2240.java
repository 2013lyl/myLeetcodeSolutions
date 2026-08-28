class Solution {
    public long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int pen=0;
        int pencil=0;
        long ans=0;
        while (true) {
            int remainingMoney = total - cost1 * pen;
            if (remainingMoney < 0) {
                break;
            }
            else if (remainingMoney == 0) {
                ans ++;
                break;
            }
            else {
                pencil = remainingMoney / cost2;
                pen++;
                ans += pencil+1;
            }
        }
        return ans;
    }
}
