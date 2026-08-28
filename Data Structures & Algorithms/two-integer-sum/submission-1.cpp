class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mp;
                //unordered_set<int>st;
        int complement;
        vector<int>ans;
      
        for(int i =0;i<nums.size();i++)
        {
            complement=target-nums[i];
            if(mp.find(complement)!=mp.end())
            {
return {mp[complement],i};
            }
            //mp.insert({nums[i],complement});
            mp[nums[i]]=i;
        }
        return {};
    }
};
