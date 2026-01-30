class Solution {
public: 
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=numbers.size()-1;
        int j=0;
        while(j<numbers.size()){
            if(numbers[i]+numbers[j]==target){
                return {j+1,i+1};
            }
            else if(numbers[i]+numbers[j]>target){
                i--;
            }
            else{
                j++;
            }
        }
        return {};
    }
};