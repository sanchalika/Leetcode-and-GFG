class Solution {
public:
    string interpret(string command) {
        string res="";
        for(int i=0;i<command.length();i++){
            if(command[i]=='(' && command[i+1]==')')
                res+='o';
            else if(command[i]!='(' && command[i]!=')')
                res+=command[i];
        }
        return res;
    }
};