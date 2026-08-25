class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto & i:nums)
        {
            st.insert(i);
        }
        //int len =0;
        //int curr=0;
        int maxlen=0;
        for(auto& j:st)
        {
            if(st.find(j-1)==st.end()){
            
                int curr=j;
                int len=1;
            
            while(st.find(curr+1)!=st.end())
            {
                curr++;
                len++;
            }
            maxlen=max(maxlen,len);
        }}
        return maxlen;
    }
};
