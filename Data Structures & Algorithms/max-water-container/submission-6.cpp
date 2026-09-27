class Solution {
public:
    int maxArea(vector<int>& heights) {
       
      int n =heights.size();
      int left=0;
      int right=n-1;
      long long area;
      long long maxarea=0;
      while(left<right)
      {
long long width=right-left;
long long height=min(heights[left],heights[right]);
area=width*height;
maxarea=max(maxarea,area);

/*if(left<n && heights[left]<heights[left+1])
{
    left++;
}
if(right>0 && heights[right]<heights[right-1])
{
    right--;
}*/
int mini=min(heights[left],heights[right]);
if(mini==heights[left])
{
    left++;
}
else{
    right--;
}

      }
      return maxarea;
    }
};
