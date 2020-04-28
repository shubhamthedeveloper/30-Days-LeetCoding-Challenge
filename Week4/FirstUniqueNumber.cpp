class FirstUnique {
    unordered_map<int,int>mp;
    queue<int> qu;
public:
    FirstUnique(vector<int>& nums) {
        for(int n : nums){
            mp[n]++;
            qu.push(n);
        }
    }
    
    int showFirstUnique() {
           while(!qu.empty() && mp[qu.front()] > 1){
            qu.pop();
        }
        if(qu.empty()){
            return -1;
        }
        else{
            return qu.front();
        }
    }
    
    void add(int value) {
      if(++mp[value] == 1){
            qu.push(value);
        }
        
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */