#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    //cin >> t;
    while (t--)
    {
            //  int n; cin >> n;
            //  pbds<int> p;
            //  for (int i = 0; i < n; i++)
            //  {
            //     int x; cin >> x;
            //     p.insert(x);
            //  }
            // pbds traversal 

            //  for(auto val : p)
            //  {
            //     cout << val <<" ";
            //  }
            //  cout << endl;

            // pbds a multiset a erase kora jay na tai different vaba korta haba
            // set k multiset used kortace

            // int n; cin >> n;
            // pbds<pair<int,int>> p;
            // for (int i = 1; i <= n; i++)
            // {
            //     int x; cin >> x;
            //     // first value , second index 

            //     p.insert({x,i});
            // }
            // // erase function a first a val , second a indx

            // p.erase({4,2});

            // for(auto [val,indx] : p)
            // {
            //     cout << val <<" " << indx << endl;
            // }

            // pbds ar extra functon explor  1. order of key(count lass val for x ) 
            // 2.find_by_order (spacific indx val)

            int n; cin >> n;
            pbds<int> p;
            for (int i = 0; i < n; i++)
            {
                int x; cin >> x; 
                p.insert(x);
            }

            ///1. order_of_key set a equal value count kora one bar multiset a two bar

            // int a = p.order_of_key(3);
            // cout << a << endl;

            ///2 . find_by_order  0 index niya kaj kora

            auto it = p.find_by_order(3);
            cout << *it << endl;

            for (auto val : p)
            {
                cout << val <<" ";
            }
            cout << endl;
    }

    return 0;
}