class Solution{
    public:
    int solve(string s, int K){
        // code here
        int n=s.size();
        vector<bool> visited(n);
        queue<pair<int,int>>q;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
            q.push({i,0});
            visited[i]=true;
            ans++;
            }
        }
        while(!q.empty())
        {
            pair<int,int>p=q.front();
            q.pop();
            if(p.first-1>=0 && p.second<K)
            {
                if(visited[p.first-1]==false)
                {
                    q.push({p.first-1,p.second+1});
                    visited[p.first-1]=true;
                    ans++;
                }
            }
            if(p.first+1<n && p.second<K)
            {
                if(visited[p.first+1]==false)
                {
                    q.push({p.first+1,p.second+1});
                    visited[p.first+1]=true;
                    ans++;
                }
            }
        }
        return ans;
    }
};
