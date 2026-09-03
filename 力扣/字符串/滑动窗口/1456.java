class Solution {
    public int maxVowels(String s, int k) {
        Set<Character> vowels = Set.of('a', 'e', 'i', 'o', 'u');
        int cnt=0, ans = 0;

        for (int i=0;i<s.length();i++) {
            if (vowels.contains(s.charAt(i))) cnt++;
            if (i >= k && vowels.contains(s.charAt(i-k))) cnt--;
            if (i >= k - 1) ans = Math.max(ans, cnt);
        }

        return ans;
    }
}
