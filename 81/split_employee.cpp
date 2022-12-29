class Solution {
  public:
    int splitEmployees(int n, string s[]) {
        int f[26]={0};
        for(int i=0;i<n;i++){
            f[s[i][0]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(f[i]>2)
            ans+=f[i]-1;
        }
        return ans;
    }
};
