class Solution {
    public int[] productExceptSelf(int[] arr){
        int[] right=new int[arr.length];
        int prod=1;
        
        for(int i=arr.length-1;i>=0;i--){
            prod *= arr[i];
            right[i]=prod;
        }
        
        prod=1;
        int[] res=new int[arr.length];
        for(int i=0;i<arr.length-1;i++){
            int lp=prod;
            int rp=right[i+1];
            
            res[i]=lp*rp;
            prod*=arr[i];
            
        }
        
        res[arr.length-1]=prod;
        return res;
    }
}