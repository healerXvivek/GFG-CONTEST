class Solution {
  public:
    long long findGoodPairs(vector<int>a, int n, int k) {
        // code here
     long long ans = 0; map<int, int>mp;
     
       for(int i = k; i< n ;i++){
           mp[a[i-k]]++;
           ans += mp[a[i]];
       }
        return ans;
    }
};
