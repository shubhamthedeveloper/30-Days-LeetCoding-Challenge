class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        left[0]=1;
        vector<int> right(n);
  
        right[0] =1;
        for(int i=1;i<n;i++){
            left[i] = nums[i-1] * left[i-1]; 
            right[i] = nums[n-i] * right[i-1];
        }

        vector<int> num(n);
        for(int i=0;i<n;i++){
            num[i] = left[i]*right[n-1-i];
        }
        return num;
    }
};
