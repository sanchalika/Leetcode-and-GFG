1class Solution {
2    public int numberOfSubstrings(String s) {
3        int n = s.length();
4        int count = 0;
5        int[] lastSeen = { -1, -1, -1 };
6        for (int i = 0; i < n; i++) {
7            lastSeen[s.charAt(i) - 'a'] = i;
8            if (lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1) {
9                count += 1 + Math.min(lastSeen[0], Math.min(lastSeen[1], lastSeen[2]));
10            }
11        }
12        return count;
13    }
14}