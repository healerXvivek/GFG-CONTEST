class Solution
{
    public:
    int solve(string str, int n)
    {
        // add your code here
        vector<int> count;
        int cnt =0;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
            cnt++;
            }
            else {
                if(cnt>0){
                    count.push_back(cnt);
                    cnt=0;
                }
            }
        }
        if(cnt>0){
            count.push_back(cnt);
        }
        sort(count.begin(),count.end());
        if(count.size()==0)
        return 0;
        int mid=count[count.size()/2];
        int ans=0;
        for(int i=0;i<count.size();i++){
            ans+=abs(count[i]-mid);
        }
        return ans;
    }
};
