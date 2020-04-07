class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
       
        for(int i=0;i<strs.size();i++){
            string n = strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(n);
        }
        
        vector<vector<string>> res;
        for(const auto& arr : m){
            res.push_back(arr.second);
        }
        return res;
    }
};