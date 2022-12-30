//User function Template for Java

/*
Instructions - 

    1. 'shop' is object of class Shop.
    2. User 'shop.get(int i)' to enquire about the price
            of the i^th chocolate.
    3. Every chocolate in shop is arranged in non-decreasing order
            i.e. shop.get(i) <= shop.get(i + 1) for all 0 <= i < n - 1
*/
class Solution{
    #define ll long long
    map<int, ll> cache;
    Shop shop;
    public:
    Solution(Shop shop){
        // Constructor
        cache.clear();
        this->shop = shop;
        
    }
    
    ll ask(int idx){
        idx--;
        if(cache.find(idx) != cache.end())
        return cache[idx];
        cache[idx]=this->shop.get(idx);
        return cache[idx];
    }
    long long find(int n, long k){
        // Return the number of chocolates Geek had
        // enjoyed out of 'n' chocolates availabe in the
        // 'shop'.
        long long ans = 0L;
        int lo=0,hi=n;
        ans+=k/ask(hi);
        k%=ask(hi);
        
        while(1){
            lo=0;
            while(lo < hi-1){
                int mid=lo+(hi-lo)/2;
                if(ask(mid) <= k)
                lo=mid;
                else
                hi=mid;
            }
            if(lo==0)
            break;
            ans+=k/ask(lo);
            k%=ask(lo);
        }
        return ans;
    }

};
