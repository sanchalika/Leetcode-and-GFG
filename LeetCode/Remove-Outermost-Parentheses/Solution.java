1class Solution {
2    public String removeOuterParentheses(String s) {
3        Stack<Character> st = new Stack<>();
4        StringBuilder sb = new StringBuilder();
5        for (int i = 0; i < s.length(); i++) {
6            char ch = s.charAt(i);
7            if (ch == '(') {
8                if (st.size() > 0) {
9                    sb.append(ch);
10                }
11                st.push(ch);
12            } else {
13                st.pop();
14                if (st.size() > 0) {
15                    sb.append(ch);
16                }
17            }
18        }
19        return sb.toString();
20    }
21}