class Solution {
public:


//APPROACH 1 USING STACK
    bool backspaceCompare(string S, string T) {
        stack<char> s1;
        stack<char> s2;
        for(int i=0;i<S.length();i++){
            if(S[i] != '#'){
                s1.push(S[i]);
            }else if(S[i] == '#' && !s1.empty()) s1.pop();        
        }
        for(int i=0;i<T.length();i++){
            if(T[i] != '#'){
                s2.push(T[i]);
            }else if(T[i] == '#' && !s2.empty()) s2.pop();        
        }
        cout << s1.size() << s2.size();
        if(s1.empty() && s2.empty()) return true;
        
        return s1==s2;
    }


//APPROACH 2 USING TWO POINTERS
      bool backspaceCompare(string S, string T) {
        int i= S.length()-1;
        int j=T.length()-1;
          int skips=0,skipt=0;
          while(i>=0 || j>=0){
              while(i>=0){
                  if(S[i] == '#') {skips++;--i;}
                  else if(skips>0){skips--;--i;}
                  else break;
              }
                while(j>=0){
                  if(T[j] == '#') {skipt++;--j;}
                  else if(skipt>0){skipt--;--j;}
                  else break;
              }
              
              if(i>=0 && j>=0 && S[i] != T[j]) return false;
              if(i>=0 != j>=0) return false;
              --i;--j;
          }
          return true;
    }
    
};