#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define input(x)      \
    for (auto &i : x) \
    cin >> i
#define output(x)     \
    for (auto &i : x) \
    cout << i << " "
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        if (s == t )
        {
            yes();
            continue;
        }

        int first_one = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                first_one = i;
                break;
            }
        }
        if (first_one != -1)
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    if (first_one > i)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag == true)
            {
                yes();
            }
            else
                no();
        }
        else
        {
            no();
        }
    }

    return 0;
}