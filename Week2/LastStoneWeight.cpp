class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(),stones.end());
        
        
        while(stones.size()>1){
            int y = stones.front();
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            int x = stones.front();
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            if(x!=y){
                y = abs(y-x);
                stones.push_back(y);
                push_heap(stones.begin(),stones.end());
            }
            
        }

        return (stones.size()>0 ? stones.front(): 0);
    }
};