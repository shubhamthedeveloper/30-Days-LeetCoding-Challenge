class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1 && nums[0] == 0 ) 
            return true;
        int end = nums.size()-1;
        const int n = nums.size();
        for(int i=n-1;i>=0;--i){
            if(i+nums[i] >= end){
                end = i;
            }
        }
        return (end == 0);
    }
};