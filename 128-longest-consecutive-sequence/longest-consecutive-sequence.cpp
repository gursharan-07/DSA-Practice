class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=0;
        unordered_map<int,bool>mp;
        for(int num:nums){
            mp[num]=true;
        }
        for(auto &p:mp){
            int num=p.first;
             if(mp.find(num-1)!=mp.end()){
            continue;
        }
        int curr=num;
        int count=1;
        while(mp.find(curr+1)!=mp.end()){
            curr++;
            count++;
        }
        longest=max(longest,count);
        }   
        return longest;
    }
};