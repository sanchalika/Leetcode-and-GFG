class Solution {
    static String decToBinary(int n) {
        // code here
        if(n==0) return "0";
        StringBuilder res=new StringBuilder();
        while(n>0){
            int num=n%2;
            res.append(num);
            n=n/2;
        }
        return res.reverse().toString();
    }
}