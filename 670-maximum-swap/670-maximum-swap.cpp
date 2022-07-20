class Solution {
public:
    int maximumSwap(int num) {
   string n=to_string(num);
    int arr[n.length()];
    int max=INT_MIN;
    int maxIndex;
    for(int i=n.length()-1;i>=0;i--){
        if(n[i]>max){
            max=n[i];
            maxIndex=i;
            arr[i]=maxIndex;
        }
        else{
            arr[i]=maxIndex;
        }
    }
    
    for(int i=0;i<n.length();i++){
        cout<<arr[i];
    }
    
    for(int i=0;i<n.length();i++){
        if(n[i]<n[arr[i]]){
            swap(n[i],n[arr[i]]);
            break;
        }
    }
    
    int ans=stoi(n);
    
    
    return ans;
}
};