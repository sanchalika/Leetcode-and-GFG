class Solution {
    public void wiggleSort(int[] nums) {
       // 1. sort array
        Arrays.sort(nums);
        
        //2. make an extra array and manage equality in it
        int n=nums.length;
        int[] res=new int[n];
        int i=1;
        int j=n-1;
        while(i<n){
            res[i]=nums[j];
            i+=2;
            j--;
        }
        i=0;
        while(i < n){
            res[i]=nums[j];
            i+=2;
            j--;
        }
        
        //3. fill input array from res
        for(i=0;i<n;i++){
            nums[i]=res[i];
        }
    }
}