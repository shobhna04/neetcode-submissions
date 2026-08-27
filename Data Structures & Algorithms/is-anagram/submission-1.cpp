class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int>mpp;
    unordered_map<char,int>mp;
           if(s.size() != t.size())
            return false;
    bool ans=true;
    for(auto& i:s)
    {
        mpp[i]++;
    }
        for(auto&j :t)
    {
        mp[j]++;
    }
    for(auto & it:mpp)
    {
       if(it.second != mp[it.first])
       {
        ans=false;
//return false;
break;
       } 
        
    }
    return ans;
    }
};
