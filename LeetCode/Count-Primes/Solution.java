1class Solution {
2    public int countPrimes(int n) {
3        int count = 0;
4        if(n<=2) return 0;
5        int[] prime = new int[n];
6        for(int i=2; i<n; i++){
7            prime[i]=1;
8        }
9        for (int i = 2; i * i < n; i++) {
10            if (prime[i] == 1) {
11                for (int j = i * i; j < n; j += i) {
12                    prime[j] = 0;
13                }
14            }
15        }
16        for(int i=0; i<n; i++){
17            if(prime[i]==1){
18                count++;
19            }
20        }
21        return count;
22    }
23}