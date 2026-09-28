class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
              int s =flowerbed.size(); 
                            if(n==0)
              {
                return true;
              }
              for(int i =0;i<s;i++)
              {
          
                if(flowerbed[i]==1)
                continue;
                if(i==0)
                {
             
            if(  s==1||flowerbed[1]==0 )
            {
               flowerbed[i]=1;
                n--;
            }
                }
                else if (i==s-1)
                {
                    if(flowerbed[s-1]==0 && flowerbed[s-2]==0)
                    {
                        flowerbed[s-1]=1;
                        n--;
                    }
                }
                else 
                {
if (flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
    flowerbed[i] = 1;
    n--;
}

                }
                            if(n==0)
              {
                return true;
              }
              }
          
              return false;
    }
};