class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int longest=1;
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]==0){
                continue;
            }
            if(nums[i+1]-nums[i]==1){
                count++;
            }
            else{
                count=1;
            }
            longest=max(longest,count);
        }
        return longest;
    }
};