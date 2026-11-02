#include<bits/stdc++.h>
using namespace std;
# define ll long long

const int mod = 1e9 + 7;
// O(log n)
ll int  power(ll int x,ll int n)
{
    ll int ans = 1 % mod;
    while(n)
    {
        if(n & 1)
        {
            ans = (ans%mod * x % mod) % mod;     
        }
        n >>= 1;
        // n /= 2;
        x = 1LL* x * x % mod;
    }
    return ans;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        ll int x,n; cin >> x >> n;
        cout << power(x,n) <<'\n';
    }

    return 0;
}