#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n; cin >> n;
    // string s;
    // //cin >> s;

    // // or char by input

    // for (int i = 0; i < n; i++)
    // {
    //     char c;
    //     cin >> c;
    //     s.push_back(c);
    // }
    // s.pop_back();
    // cout << s << endl;
    // cout << s.front() << " " << s.back() << endl;

    // s.clear();   // O(n)
    // cout << s.empty() << endl;   // string kalithakala return 0 otherwise return 1


    string s; cin >> s;

    cout << s.substr(0,3) << endl;   // subster tc - O(n)

    return 0;
}