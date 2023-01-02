class Solution {
  public:
    string solve(int n, string s) {
        vector<int> v(26,0);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        char c='a';
        int freq=0;
        for(int i=0;i<26;i++){
            if(v[i]>freq){
                freq=v[i];
                c='a'+i;
            }
        }
        string ans="";
        ans+=c;
        return ans;
  }
};
