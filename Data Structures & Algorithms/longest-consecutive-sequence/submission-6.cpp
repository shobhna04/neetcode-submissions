class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        if(nums.size()==0)
        return 0;
        if(nums.size()==1)
        {
            return 1;
        }
        int maxlen=1;
        int path=1;
        for(auto& i:nums)
        {
            st.insert(i);
            
        }
        for(auto j:st)
        {
            int a=j;
           if(st.find(a+1)!=st.end())
           {
            path++;
            maxlen=max(maxlen,path);
           }
           else{
               path=1;
              // a=j+1;
           }
        }
        return maxlen;
    }
};
