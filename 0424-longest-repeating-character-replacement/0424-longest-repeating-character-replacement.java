class Solution {
    public int characterReplacement(String s, int k) {
        int n = s.length();
        int l = 0, r = 0, maxLen = 0, maxfreq = 0;
        int[] hash = new int[26];
        for (int i = 0; i < 26; i++) {
            hash[i] = 0;
        }
        while (r < n) {
            char ch = s.charAt(r);
            hash[ch - 'A']++;
            maxfreq = Math.max(maxfreq, hash[ch-'A']);
            while ((r - l + 1) - maxfreq > k) {
                char ch1 = s.charAt(l);
                hash[ch1 - 'A']--;
                maxfreq = 0;
                for (int i = 0; i < 26; i++) {
                    maxfreq = Math.max(maxfreq, hash[i]);
                }
                l = l + 1;
            }
            if ((r - l + 1) - maxfreq <= k) {
                maxLen = Math.max(maxLen, (r - l + 1));
            }
            r++;
        }
        return maxLen;
    }
}