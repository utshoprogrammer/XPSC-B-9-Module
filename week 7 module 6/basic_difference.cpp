// Tc :- O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    //cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<int> d(n+2),pre(n+2);
        for (int i = 1; i <= q; i++)
        { 
            int l, r, x;
            cin >> l >> r >> x;

            d[l] += x;
            d[r+1] -= x; 
        }
        for (int i = 1;i <= n;i++)
        {
            pre[i]  = d[i] + pre[i-1];
        }
        for(int i = 1;i <= n;i++)
        {
            cout << v[i] + pre[i] <<" ";
        }
        cout << '\n';
    }

    return 0;
}

// Tc :- O(n^2) this not parfect

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t = 1;
//     //cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         vector<int> v(n + 1);
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> v[i];
//         }
//         for (int i = 1; i <= q; i++)
//         {
//             int l, r, x;
//             cin >> l >> r >> x;

//             for (int j = l; j <= r; j++)
//             {
//                 v[j] += x;
//             }
//         }
//         for (int i = 1;i <= n;i++)
//         {
//             cout << v[i] << " ";
//         }
//         cout << '\n';
//     }

//     return 0;
// }