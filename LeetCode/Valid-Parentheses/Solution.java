1class Solution {
2    public boolean isValid(String s) {
3        int n=s.length();
4        Stack<Character>st=new Stack<>();
5        for(int i=0; i<n; i++){
6            char letter=s.charAt(i);
7            if(letter=='(' || letter=='{' || letter=='['){
8                st.push(letter);
9            }else{
10                if(st.empty()) return false;
11                char ch=st.peek();
12                st.pop();
13                if((letter==')' && ch=='(') 
14                || (letter=='}' && ch=='{') 
15                || (letter==']' && ch=='[')){
16                    continue;
17                }else{
18                    return false;
19                }
20            }
21        }
22        return st.isEmpty();
23    }
24}