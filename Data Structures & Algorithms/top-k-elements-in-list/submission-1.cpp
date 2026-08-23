class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int >freq;
        for(auto & x:nums)
        {
            freq[x]++;
        }
        vector<pair<int,int>>v;
        for(auto & i :freq)
        {
            v.push_back({i.first,i.second});
        }
      sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        vector<int>result;
        for(int i=0;i<k;i++)
        {
            result.push_back(v[i].first);
        }
return result ;
 
    }
};
