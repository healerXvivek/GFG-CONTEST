class Solution {
  public:
    long long atmostx(int n,int x,vector<int> &a){
        map<int,int>mp;
        int cn=0,left=0,right=0;
        long long res=0;
        while(right<n){
            if(++mp[a[right++]]==3)
            cn++;
            while(cn>x){
                if(mp[a[left++]]--==3)
                cn--;
            }
            res+=right-left;
        }
        return res;
    }
    long long goodSubarrays(int n,int x, vector<int>arr) {
        
        return atmostx(n,x,arr)-atmostx(n,x-1,arr);
    }
};
