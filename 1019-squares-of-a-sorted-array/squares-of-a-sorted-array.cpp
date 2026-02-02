class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>p;
        for(int i=0;i<n;i++){
            p.push_back(nums[i]*nums[i]);
        }
        sort(p.begin(),p.end());
        return p;
    }
};