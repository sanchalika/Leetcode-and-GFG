class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {
        int dist =9e5;    // Setting dist to be large to run the first comparision (line 13)
        int loc = -1;     // For not found case init to -1
        int a = p.size();  
        if(a==0){         // just in case empty arr is given
            return -1;
        }
        for(int i=0;i<a;i++){      // Iterating over all coordinates
            if(x==p[i][0]||y==p[i][1]){       // Checking the condition of question
                int temp = abs(x-p[i][0])+abs(y-p[i][1]);  // Distance calc
                if(temp<dist){     // Finding mininum (do not put equal sign as we want to return the lowest coordinate)
                    dist = temp;   // Storing minimum
                    loc = i;       // Storing minimum
                }
            }
        }
        return loc;
    }
};