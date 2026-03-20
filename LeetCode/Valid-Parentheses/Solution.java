1class Solution {
2    public boolean isValid(String s) {
3        int n = s.length();
4        Stack<Character> st = new Stack<>();
5        for (int i = 0; i < n; i++) {
6            char letter = s.charAt(i);
7            if (letter == '(' || letter == '{' || letter == '[') {
8                st.push(letter);
9            } else {
10                if (st.empty())
11                    return false;
12                char ch = st.peek();
13                st.pop();
14                if ((letter == ')' && ch == '(')
15                        || (letter == '}' && ch == '{')
16                        || (letter == ']' && ch == '[')) {
17                    continue;
18                } else {
19                    return false;
20                }
21            }
22        }
23        return st.isEmpty();
24    }
25}