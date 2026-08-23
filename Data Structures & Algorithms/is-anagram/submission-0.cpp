class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false ;
        bool ana = true;
        unordered_map<char,int>mpp;
        for(auto x: s)
        {
            mpp[x]++;
        }
             unordered_map<char,int>mp;
        for(auto y: t)
        {
            mp[y]++;
        }
        for(int i =0;i<t.size();i++)
        {
          if(mpp[t[i]]!=mp[t[i]])
          {
ana=false;
            break;
          }
        }
        
        return ana;
    }
};

