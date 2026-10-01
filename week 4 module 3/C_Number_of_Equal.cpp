#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long int> v(n);
    vector<long long int> v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    long long int ans = 0;

    int l = 0, r = 0;

    while (l < n && r < m)
    {
        int cur = v[l], count1 = 0,count2 = 0;

        while (l < n && v[l] == cur)
        {
            count1++;
            l++;
        }
        while(r < m && v2[r] < cur)
        {
            r++;
        }
        while(r < m && v2[r] == cur)
        {
            count2++;
            r++;
        }
        ans += (1LL * count1 * count2);
    }
    cout << ans << endl;

    return 0;
}