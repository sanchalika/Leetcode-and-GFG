class Solution {
public:
    bool isHappy(int n) {
       int counter=6;
        int val,index;
        while(counter){
            val=0;
            while(n){
                index=n%10;
                val+=index*index;
                n/=10;
            }
            if(val==1)
                return true;
            n=val;
            counter-=1;
            
        }
        return false;
    }
};