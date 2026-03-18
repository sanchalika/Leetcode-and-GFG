import java.util.*;

class Solution {
    public static void print_divisors(int n) {
        ArrayList<Integer> small = new ArrayList<>();
        ArrayList<Integer> large = new ArrayList<>();

        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                small.add(i);
                if(i != n / i){
                    large.add(n / i);
                }
            }
        }
        for(int x : small) System.out.print(x + " ");
        Collections.reverse(large);
        for(int x : large) System.out.print(x + " ");
    }
}