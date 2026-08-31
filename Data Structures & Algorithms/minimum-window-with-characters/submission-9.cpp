class Solution {
public:
    string minWindow(string s, string t) {
        int left =0;
        int right=0;
        int start =0;
        int minlen=INT_MAX;
      //  string st;
        string ans=""  ;
        int formed=0;
            unordered_map<char,int>mpp;
            unordered_map<char,int>mp;
            for(auto& c:t)
            {
                mpp[c]++;
            }
            for(right=0;right<s.size();right++)
            {
               // st=s.substr(left,right-left+1);
             // minlen =min(minlen,right-left+1);
                
            mp[s[right]]++;
                
            if(mpp.find(s[right])!=mpp.end() && mpp[s[right]]==mp[s[right]])
            {
                formed++;
            }
            while(formed==mpp.size())
            {
                           //   minlen =min(minlen,right-left+1);
int len =right-left+1;
                if(len<minlen)
            {
                  minlen =min(minlen,len);
             //   ans=s.substr(left,len);
                  start =left;

            }
                //mp.erase(s[left]);
               // left++;
if(mpp.find(s[left])!=mpp.end())  {
mp[s[left]]--;
if( mp[s[left]]<mpp[s[left]])
              {
                formed--;}
}

                            

                left++;
            }
                           // minlen =min(minlen,right-left+1);
//ans=s.substr(left,minlen);
            }
        if(minlen == INT_MAX)
            return "";

        return s.substr(start, minlen);




//return ans;



    }
};
