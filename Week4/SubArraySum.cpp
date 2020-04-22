class Solution {
public:

    int subarraySum(vector<int>& nums, int k){
        int count =0;
        int sum =0;
        map<int,int> mp;
       
        for(auto n : nums){
            sum += n;
            if(sum == k)
                count++;
            
            if(mp.find(sum-k) != mp.end())
                count += mp[sum-k];
            
            if(mp.find(sum) != mp.end())
                mp[sum]++;
            else
                mp[sum] =1;
        }       
       
        return count;
    }
    
};