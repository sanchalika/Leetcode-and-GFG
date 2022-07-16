class Solution {
    public List<Integer> partitionLabels(String s) {
         HashMap<Character, Integer>map=new HashMap<>();
        
        // filling of impact of characters in hashmap
        
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            map.put(ch,i);
            
        }
        
        //making of result
        
        List<Integer> res=new ArrayList<>();
        int prev=-1;
        int max=0;
        
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            max=Math.max(max,map.get(ch));
            
            if(max==i){
                res.add(max-prev);
                prev=max;
            }
        }
        return res;
    }
}