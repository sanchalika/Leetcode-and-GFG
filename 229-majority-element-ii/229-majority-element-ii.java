class Solution {
    
    public static boolean isGreater(int[] arr, int val){
        int count=0;
        
        for(int ele:arr){
            if(ele == val)
                count++;
        }
        return count>arr.length/3;
    }
    public List<Integer> majorityElement(int[] arr) {
        int val1=arr[0];
        int cnt1=1;
        
        int val2=arr[0];
        int cnt2=0;
        
        int i=1;
        while(i<arr.length){
            if(arr[i]==val1){
                cnt1++;
            }else if(arr[i]==val2){
                cnt2++;
            }
            else{
                if(cnt1==0){
                    val1=arr[i];
                    cnt1=1;
                }else if(cnt2==0){
                    val2=arr[i];
                    cnt2=1;
                }else{
                    cnt1--;
                    cnt2--;
                }
            }
            i++;
        }
        //val1 and val2 are potential candidates
        
      ArrayList<Integer>res=new ArrayList<>();
        if(isGreater(arr,val1)==true)
            res.add(val1);
        if(val1!=val2 && isGreater(arr,val2)==true)
            res.add(val2);
        return res;
    }
}