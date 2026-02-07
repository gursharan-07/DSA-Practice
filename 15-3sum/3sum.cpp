class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>arr;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            else{
                int n1=nums[i];
                int target=-n1;
                int l=i+1;
                int r=n-1;
                while(l<r){
                    if(nums[l]+nums[r]>target){
                        r--;
                    }
                    else if(nums[l]+nums[r]<target){
                        l++;
                    }
                    else{
                        while(l<r&&nums[l]==nums[l+1]){
                        l++;
                    }
                    while(l<r&&nums[r]==nums[r-1]){
                        r--;
                    }
                        arr.push_back({nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                    }
                    
                }
            }
        }
        return arr;
    }
};