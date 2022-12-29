class Solution {
  public:
    long long solve(int n, int k, vector<long long> G) {
        vector<long long > v;
        long long sum=0;
        for(int i=0;i<G.size();i++){
            sum+=G[i];
            v.push_back(G[i]);
        }
        int beg=0;
        while(v.size()<n){
            v.push_back(sum);
            sum-=v[beg];
            sum+=v.back();
            beg++;
        }
        return v[n-1];
    }
};
