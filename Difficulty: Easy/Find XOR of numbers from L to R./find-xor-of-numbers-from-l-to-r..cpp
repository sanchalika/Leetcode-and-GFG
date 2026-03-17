// User function Template for C++

class Solution {
  public:
    int findXortillN(int n){
        if((n%4)==0) return n;
        else if(n%4==2) return (n+1);
        else if(n%4==3) return 0;
        else return 1;
    }
    int findXOR(int l, int r) {
        return findXortillN(l-1) ^ findXortillN(r);
    }
};