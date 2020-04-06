class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x =0;
        for(int i=0;i<nums.size();i++){
            x = x^nums[i];
        }
        return x;
    }
};


//Method 2
// int singleNumber(vector<int>& nums){
//   multiset<int> s;
//   int x;
//   for(int i=0;i<nums.size();i++){
//      s.insert(nums[i]);
//   }
//   for(auto i=s.begin();i != s.end();i++){
//      if(s.count(*i) == 1)
//         x=*i;
//       }
//   return x; 

//}