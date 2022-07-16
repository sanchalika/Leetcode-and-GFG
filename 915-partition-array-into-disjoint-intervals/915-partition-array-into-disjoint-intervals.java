// 1) Make an array to fill right min
// 2) Traverse on array and maintain leftmax
// 3) Figure out the situation when leftmax < rightmin of one step ahead of leftmax


//-----------------------------------  O(n) time complexity  --------------------------------------------------//


// class Solution {
//     public int partitionDisjoint(int[] arr) {
//         //1. make a right min arr
//         int n=arr.length;
//         int[] rightMin=new int[n+1];
        
//         rightMin[n]=Integer.MAX_VALUE;
//         for(int i=n-1;i>=0;i--){
//             rightMin[i]=Math.min(rightMin[i+1], arr[i]);
//         }
        
//         //2) Traverse on array and maintain leftmax and figure out the partition index
//         int leftMax=Integer.MIN_VALUE;
//         //int ans=0;
        
//         for(int i=0;i<n;i++){
            
//             leftMax=Math.max(leftMax, arr[i]);
//             if(leftMax <= rightMin[i+1]){
//                 return i+1;
//             }
                
//         }
//         return -1;
        
//     }
// }

//----------------------------   O(1) ---------------------------------------//

class Solution {
    public int partitionDisjoint(int[] arr) {
    
        int leftMax=arr[0];
        int greater=arr[0];
        
        int ans=0;
        for(int i=1;i<arr.length;i++){
            if(arr[i]>greater){
                greater=arr[i];
            }else if(arr[i]<leftMax){
                leftMax=greater;
                ans=i;
            }
        }        
        return ans+1;
    }
}
