class Solution {

public:

bool areAlmostEqual(string s1, string s2) {

    if( s1 == s2 )
        return true;
    
    int i = 0;
    int k = 0;
    int j = s2.size()-1;
    
    while(i<s2.size())
    {
        if(s1[i] != s2[i])
            break;
        i++;
    }
    
    while(j>=0)
    {
        if(s1[j] != s2[j])
            break;
        j--;
    }
    
    if(i<j)
    {
        swap(s2[i],s2[j]);
        if(s1 == s2)
            return true;
    }
        
    return false;
} 
};