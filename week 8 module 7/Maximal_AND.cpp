// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define yes() cout << "YES\n"
// #define no() cout << "NO\n"
// #define endl "\n"

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> v(n);
//         int maxsetbit = 30;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             maxsetbit = max(maxsetbit, __lg(v[i]));
//         }

//         // int ans = 0, AND = (1LL<<31) -1;
//         // cout << __lg(AND) << endl;

//         // for (int i = __lg(AND); i >=0; i--)
//         // {
//         //     if((AND >> k) & 1){
//         //         cout << 1 <<" ";
//         //     }
//         //     else{
//         //         cout << 0 <<" ";
//         //     }
//         // }

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define endl "\n"

const int b = 30;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, K;
        cin >> n >> K;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> bits(b + 1);
        for (int i = 0; i < n; i++)
        {
            for (int k = b; k >= 0; k--)
            {
                if ((v[i] >> k) & 1)
                {
                    bits[k]++;
                }
            }
        }

        int ans = 0;
        for (int k = b; k >= 0; k--)
        {
            if (bits[k] == n)
            {
                ans += (1LL << k);
            }
            else
            {
                int need = n - bits[k];
                if (K >= need)
                {
                    ans += (1LL << k);
                    K -= need;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
