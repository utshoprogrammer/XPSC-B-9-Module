#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
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
    vector<long long int> ans;
    long long int count = 0;
    int l = 0,r = 0;
    while (r < m)
    {
        if(l < n && v[l] < v2[r])
        {
            count++;
            l++;
        }
        else{
            r++;
            ans.push_back(count);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] <<" ";
    }
        

    return 0;
}