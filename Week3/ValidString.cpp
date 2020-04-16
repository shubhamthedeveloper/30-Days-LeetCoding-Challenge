class Solution {
public:
    bool checkValidString(string s) {
        int l = 0 ;
        int h =0;
        for(auto c : s){
            l += c == '('?1:-1;     
            h += c != ')'?1:-1;
            if(h<0) 
                break;
            l = max(l,0);
        }
        return l==0;
    }
};
