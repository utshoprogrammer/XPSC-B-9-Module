#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // vector<vector<int>> v;
    // vector<pair<int,int>> v;
    // vector<set<int>> v;

    // map<vector<int>,int> mp;

    // vector<int> a;
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);
    // a.push_back(5);

    // mp[a] = 5;

    // for(auto [x,y] : mp)
    // {
    //     vector<int> v = x;
    //     for(auto val : v)
    //     {
    //         cout << val <<" ";
    //     }
    //     cout << endl;
    //     cout << y << endl;
    // }

    map<int, set<int>> mp;

    set<int> s1;
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);

    set<int> s2;
    s2.insert(5);
    s2.insert(6);
    s2.insert(7);

    set<int> s3;
    s3.insert(8);
    s3.insert(9);
    s3.insert(10);
    s3.insert(12);

    mp[5] = s1;
    mp[7] = s2;
    mp[9] = s3;

    for (auto [x, y] : mp)
    {
        cout << x << " -> ";
        for (auto val : y)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    int x = 6, y = 4;

    auto lb1 = mp.lower_bound(x);

    if (lb1 != mp.end())
    {
        int ans = lb1->first;
        // cout << ans;
        auto lb2 = mp[ans].lower_bound(y);

        if (lb2 != mp[ans].end())
        {
            cout << *lb2 << endl;
        }
    }
    else
    {
        cout <<"Not Found" << endl;
    }

    return 0;
}