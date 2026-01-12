1class Solution {
2public:
3    int fib(int n) {
4        if(n==0) return 0;
5        if(n==1) return 1;
6        return fib(n-1)+fib(n-2);
7    }
8};