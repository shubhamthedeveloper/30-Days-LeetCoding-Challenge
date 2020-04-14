class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
    int totalShift = 0;
        for(int i=0;i<shift.size();i++){
            int dir = shift[i][0];
            int amount = shift[i][1];
            if(dir == 0)
                totalShift -= amount;
            else
                totalShift += amount;
        }
        cout << totalShift << endl;
        string newFront;
        string newBack;
        
        if(totalShift < 0){
            totalShift = abs(totalShift) % s.size();
            newFront = s.substr(totalShift);
            newBack = s.substr(0,totalShift);
        }else if (totalShift > 0){
            totalShift = totalShift % s.size();
            newFront = s.substr(s.size() - totalShift, totalShift) ;
            newBack = s.substr(0,s.size() - totalShift);
        }else{
            return s;
        }
         return newFront+newBack;
    }
};