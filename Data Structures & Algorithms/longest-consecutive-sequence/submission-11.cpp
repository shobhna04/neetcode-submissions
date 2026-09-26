class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int>st;
     int lead;
     int count =1;
     int maxcount=0;
     int curcount=0;
     if(nums.size()==0)
     return 0;
     for(auto & it:nums)
     {
        st.insert(it);
     }
        for(int i =0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end() )
            {
                 lead=nums[i];
                 curcount=1;
            }
            while(st.find(lead+1)!=st.end())
            {
                lead+=1;
                curcount++;

            }
maxcount=max(maxcount,curcount);
        }
  
    return maxcount;
    }
};
