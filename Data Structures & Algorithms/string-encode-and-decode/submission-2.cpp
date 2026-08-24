class Solution {
public:

    string encode(vector<string>& strs) {
string st="";
for(int i =0;i<strs.size();i++)
{
    st+=to_string(strs[i].size())+'#'+strs[i];
}
return st;
    }

    vector<string> decode(string s) {
vector<string>strr;
int i=0;
while(i<s.size())
{
    int j=i;
    while(s[j]!='#')
    {
        j++;
    }
    int len =stoi(s.substr(i,j-i));
    j++;
    string stur =s.substr(j,len);
    strr.push_back(stur);
    i=j+len;
}
return strr;
    }
};
