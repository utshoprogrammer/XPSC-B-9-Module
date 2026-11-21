#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    //cin >> t;
    while (t--)
    {
            int n; cin >> n;
            string s; cin >> s;
            string r = s;
            reverse(r.rbegin(),r.rend());

            map < char,vector<int>> pos_s,pos_r;
            for (int i = 0; i < n; i++)
            {
                pos_s[s[i]].push_back(i);
                pos_r[r[i]].push_back(i);
            }
            // traversal main string and reverse string posintion

            // for(auto it : pos_s)
            // {
            //     vector<int> v = it.second;
            //     cout << it.first << " -> ";
            //     for(auto val : v)
            //     {
            //         cout << val <<" ";
            //     }
            // }
            // cout << endl;
            // for(auto it : pos_r)
            // {
            //     vector<int> v = it.second;
            //     cout << it.first << " -> ";
            //     for(auto val : v)
            //     {
            //         cout << val <<" ";
            //     }
            // }
            // cout << endl;
            
            vector<int> parmutation(n);
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                for(int i = 0;i < pos_s[ch].size();i++)
                {
                    parmutation[pos_r[ch][i]] = pos_s[ch][i];
                }
            }
            
            long long  int  ans = 0;
            pbds<int> p;
            for (int i = n-1; i >= 0; i--)
            {
                ans += p.order_of_key(parmutation[i]);
                p.insert(parmutation[i]);
            }
            cout << ans << endl;
  
    }

    return 0;
}