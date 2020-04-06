class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastindex =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] !=0){
                nums[lastindex++] = nums[i];
            }
        }
        for(int i=lastindex;i<nums.size();i++){
            nums[i] =0;
        }
    }
};