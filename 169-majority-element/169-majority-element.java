class Solution {
    public static int valid(int[] arr){
        int val=arr[0];
        int count=1;
        for(int i=1;i<arr.length;i++){
            if(val==arr[i]){
                // same element, increment in freq
                count++;
                
            }else{
                // distinct element map with val
                count--;
            }
            if(count == 0){
                val=arr[i];
                count=1;
            }
        }
        return val;
    }
    public int majorityElement(int[] arr) {
        // value has potential candidate for majority
        int value=valid(arr);
        
        //find freq for potential candidate
        int count=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==value)
                count++;
        }
        if(count > arr.length/2){
            //majority element is value
            return value;            
        }else{
            //no majority element
            return 0;           
        }                
    }
}



//space- O(1)
//Time-O(n)

// Pairing distinct elements
//moore's voting algorithm