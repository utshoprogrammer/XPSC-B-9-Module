#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n,m; cin >> n >> m;

    // vector<vector<int>> v(n,vector<int>(m,0));

    // for (int i = 0; i < n; i++)
    // {
    //     for(int j = 0; j < m ; j++)
    //     {
    //         cout << v[i][j]<<" ";
    //     }
    //     cout << endl;
    // }

    // int n; cin >> n;

    // vector<vector<int>> v;

    // for (int i = 0; i < n; i++)
    // {
    //     int m; cin >> m;
    //     vector<int> a;
    //     for (int i = 0; i < m; i++)
    //     {
    //         int x; cin >> x;
    //         a.push_back(x);
    //     }
    //     // vector ar vetorar vector print

    //     // for (auto val : a)
    //     // {
    //     //     cout << val <<" ";
    //     // }
    //     // cout << endl;

    //     // vector v ar one index a one vector a rakcei
    //     v.push_back(a);     
    // }
    // for(int i = 0; i < n;i++)
    // {
    //     for(int j=0; j < v[i].size();j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    

    int n; cin >> n;

    vector<string> v;
    //vector<pair<string,string>> v;

    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        v.push_back(s);
    }
    // only string print

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << endl;
    // }

    // print char wise 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] <<" ";
        }
        cout << endl;
    }
    
    

    return 0;
}