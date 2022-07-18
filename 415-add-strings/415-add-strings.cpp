class Solution {
public:
string addStrings(string num1, string num2) {
int i=num1.size()-1;
int j=num2.size()-1;

    string sum;
    
    int carry=0;
    while((i>=0 || j>=0) || carry){
        int a=0,b=0;
        
        if(i >= 0)
            a = num1[i--] - '0';
        if(j >= 0)
            b = num2[j--] - '0';
        
        int r=a+b+carry;
        carry=r/10;
        r=r%10;
        sum+=to_string(r);
    }
    if(carry>0)
        sum+=to_string(carry);
    reverse(sum.begin(),sum.end());
    return sum;
}
};