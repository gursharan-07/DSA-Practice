class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        int result;
        for(int y:nums){
            if(m[y]>=2){
                return true;
            }
        }
        return false;
    }
};