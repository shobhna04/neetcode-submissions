class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
      unordered_map<string ,vector<string>>groups;
      for(auto s :strs)
      {
        string key =s;
        sort(key.begin(),key.end());
        groups[key].push_back(s);
      }
      for(auto& x:groups)
      {
        v.push_back(x.second);
      }
      return v ;
    }
};
