// 1) Make an array to fill right min
// 2) Traverse on array and maintain leftmax
// 3) Figure out the situation when leftmax < rightmin of one step ahead of leftmax


//-------------------------------------------------------------------------------------//


class Solution {
    public int partitionDisjoint(int[] arr) {
        //1. make a right min arr
        int n=arr.length;
        int[] rightMin=new int[n+1];
        
        rightMin[n]=Integer.MAX_VALUE;
        for(int i=n-1;i>=0;i--){
            rightMin[i]=Math.min(rightMin[i+1], arr[i]);
        }
        
        //2) Traverse on array and maintain leftmax and figure out the partition index
        int leftMax=Integer.MIN_VALUE;
        //int ans=0;
        
        for(int i=0;i<n;i++){
            
            leftMax=Math.max(leftMax, arr[i]);
            if(leftMax <= rightMin[i+1]){
                return i+1;
            }
                
        }
        return -1;
        
    }
}
// class Solution {
//     public int partitionDisjoint(int[] arr) {
//         int rmin[]=new int[arr.length+1];
//     rmin[arr.length]=Integer.MAX_VALUE;
//     for(int i=arr.length-1;i>=0;i--){
//       rmin[i]=Math.min(rmin[i+1],arr[i]);
//     }
//     int lmax=Integer.MIN_VALUE;
//     for(int i=0;i<arr.length;i++){
//       lmax=Math.max(lmax,arr[i]);
//       if(lmax<=rmin[i+1]){
//         return i+1;
//       }
//     }
//     return -1;
//     }
// }