class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    const int n = nums.size();
     int count =0;
        int maxLen =0;
        unordered_map<int,int> mp;
        mp[0] =-1;
        for(int i=0;i<n;i++){
            count += (nums[i]==1?1:-1);
            if(mp.find(count) != mp.end())
                maxLen = max(maxLen,i-mp[count]);
            else
                mp[count] =i;
        }
        return maxLen;
            
    }
};