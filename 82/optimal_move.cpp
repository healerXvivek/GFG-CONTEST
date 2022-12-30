class Solution {
  public:
    int optimalMoves(int n,int m, vector<vector<int>>a) {
        // code here
        int ans=0;
        for(int i=0; i<(1<<m); i++){
            vector<vector<int>> cur=a;
            for(int j=0;j<m;j++){
                if((1<<j)&i){
                    for(int k=0;k<n;k++){
                        cur[k][j]=1-cur[k][j];
                    }
                }
            int tans=0;
            for(int j=0;j<n;j++){
                int cn=0;
                for(int k=0;k<m;k++){
                    cn+=cur[j][k];
                }
                tans+=max(cn,m-cn);
            }
            ans=max(ans,tans);
        }
    }
    return ans;
    }
};
