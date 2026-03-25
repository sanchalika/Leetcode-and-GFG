import java.util.*;

class Solution {
    static ArrayList<Integer> nextSmallerEle(int[] arr) {
        int n = arr.length;
        Stack<Integer> st = new Stack<>();
        ArrayList<Integer> nse = new ArrayList<>(Collections.nCopies(n, 0));

        for (int i = n - 1; i >= 0; i--) {
            while (!st.isEmpty() && st.peek() >= arr[i]) {
                st.pop();
            }
            nse.set(i, st.isEmpty() ? -1 : st.peek());
            st.push(arr[i]);
        }
        return nse;
    }
}