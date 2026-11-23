#include<bits/stdc++.h>
using namespace std;

# define ll long long
#define endl "\n"

const int maxn = (1LL<<15);
vector<int> allpalindrome;

bool ispalindrome(int x){
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len/2; i++)
    {
        if(s[i] != s[len - i -1]){
            return false;
        }
    }
    return true;
}
void markpalindrome(){
    for (int i = 0; i < maxn; i++)
    {
        if(ispalindrome(i)){
            allpalindrome.push_back(i);
        }
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    markpalindrome();

    long long int tc = 1;
    cin >> tc;
    while (tc--)
    {
             int n; cin >> n;
             vector<int> v(n),cnt(maxn+1);
             for (int i = 0; i < n; i++)
             {
                cin >> v[i];
                cnt[v[i]]++;
             }
             ll int ans = n;
             for (int i = 0; i < n; i++)
             {
                for(int j = 0; j < allpalindrome.size();j++){
                    int cur = (v[i] ^ allpalindrome[j]);
                    ans += cnt[cur];
                }
             }
             cout << ans/2 << endl;

            //  int ans = 0;
            //  for (int i = 0; i < n; i++)
            //  {
            //     for (int j = 0; j < n; j++)
            //     {
            //         bool ok = ispalindrom(v[i] ^ v[j]);
            //         if(ok){
            //             cout << (v[i] ^ v[j] )<< endl;
            //         }
            //     }
            //  }
            //  cout << __lg(1LL<<15) -1 << endl;

    }

    return 0;
}