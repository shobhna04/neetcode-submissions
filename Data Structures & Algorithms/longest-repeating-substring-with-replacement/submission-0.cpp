class Solution {
public:
    int characterReplacement(string s, int k) {
       // int len =0;
        int maxfreq=0;
        int r;
        int left=0;
        int ans =0;
  unordered_map<char,int>mpp;
  int window;
  for(int  right=0;right<s.size();right++)
  {
    mpp[s[right]]++;
    maxfreq=max(maxfreq,mpp[s[right]]);
    window=right-left+1;
    r=window-maxfreq;
    if(r>k)
    {
        mpp[s[left]]--;
        left++;
    }
    ans=max(ans,right-left+1);
  }
  return ans;
    }
};
