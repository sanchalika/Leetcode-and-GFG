class Solution {
public:
    int mySqrt(int x) {
        int low=1,high=x;
        int answer=0;
        while(low<=high){
            int mid=((long long)low+high)/2; 
            if((long long)mid*mid <= x){
                answer=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return answer;
    }
};