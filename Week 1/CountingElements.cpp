class Solution {
public:
    int countElements(vector<int>& arr) {
        int count =0;
        int num;
        for(int i=0;i<arr.size();i++){
            num = arr[i];
            if(std::find(arr.begin(), arr.end(), num+1) != arr.end())
                count++;
        }
        return count;
    }
};