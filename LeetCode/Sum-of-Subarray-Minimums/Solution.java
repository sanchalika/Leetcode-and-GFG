1import java.util.*;
2
3class Solution {
4    public int sumSubarrayMins(int[] arr) {
5        int[] nse = nextSmallerEle(arr);
6        int[] pse = prevSmallerEle(arr);
7        int n = arr.length;
8        long total = 0;
9        int mod = 1_000_000_007;
10
11        for (int i = 0; i < n; i++) {
12            long left = i - pse[i];
13            long right = nse[i] - i;
14            total = (total + (left * right % mod) * arr[i] % mod) % mod;
15        }
16        return (int) total;
17    }
18
19    static int[] nextSmallerEle(int[] arr) {
20        int n = arr.length;
21        Stack<Integer> st = new Stack<>();
22        int[] nse = new int[n];
23
24        for (int i = n - 1; i >= 0; i--) {
25            while (!st.isEmpty() && arr[st.peek()] >= arr[i]) {
26                st.pop();
27            }
28            nse[i] = st.isEmpty() ? n : st.peek();
29            st.push(i);
30        }
31        return nse;
32    }
33
34    static int[] prevSmallerEle(int[] arr) {
35        int n = arr.length;
36        Stack<Integer> st = new Stack<>();
37        int[] pse = new int[n];
38
39        for (int i = 0; i < n; i++) {
40            while (!st.isEmpty() && arr[st.peek()] > arr[i]) {
41                st.pop();
42            }
43            pse[i] = st.isEmpty() ? -1 : st.peek();
44            st.push(i);
45        }
46        return pse;
47    }
48}