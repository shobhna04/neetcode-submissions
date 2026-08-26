class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto& i:nums)
        {
            mpp[i]++;
        }
        bool ans;
        for(auto& j:mpp)
        {
            if(j.second>1)
            {
                ans= true;
                break;
            }
        else
        ans=false;}
        return ans ;
    }
};