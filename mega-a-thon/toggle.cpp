class Solution {
  public:
    int toggle(int n, vector<int> &a) {
        // code here
        int ma = 0;
        int i = 0;  int lone = 0; 
        while(i < n ){
             if(a[i] == 1){
             lone++;
             i++;
             }
             else{
                 int j = i;
                 int zero = 0;
                 while(j < n && a[j]==0){
                    zero++;
                    j++;
                 }
                 i = j;
                int  rone = 0;
                 while(j < n && a[j]==1){
                     rone++;
                     j++;
                     }
             
             ma=max(ma , lone+zero+rone);
             lone = 0;
             }             
        }
        ma = max(ma , lone);
        return ma;
    }
};
