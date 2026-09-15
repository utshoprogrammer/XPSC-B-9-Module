#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // type 1

    // int n; cin >> n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x; cin >> x;
    //     // 1
    //     v.push_back(x);   // O(1)
    // }
    // // 2
    // cout << v.size() <<endl;
    // v.pop_back();
    // cout << v.size()<< endl;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] <<" ";
    // }
    // cout << endl;
    // // 3
    // cout << v.front() << endl; // O(1)
    // cout << v.back() << endl;
    // // 4
    // v.clear(); // O(n)
    // cout << v.empty() << endl;    // jode value na thaka return 1 otherwise 0

    // type 2

    // int n; cin >> n;
    // vector<int> v(n,5);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] <<" ";
    // }

    // int n; cin >> n;
    // vector<int> v;
    // v.assign(n,4);   // O(n)
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] <<" ";
    // }

    // vector<int> v;
    // v.resize(4);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // type 3

    // int n; cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] <<" ";
    // }

    // auto it = v.begin() +1;
    // //auto it = v.end()-1;
    // cout << *it << endl;

    // traversal vector with iterator

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    
    // int n; cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    
    // //auto lastelement = --v.end();
    // // or
    // auto lastelement = v.end();
    // lastelement--;
    // cout << *lastelement << endl;
    
    // int n; cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // // reverse(v.begin(),v.end());  // O(n)
    // // sort(v.begin(),v.end());     // O(n long n)  accending print
    
    // sort(v.begin(),v.end(),greater<int>());   // decending print

    // for(auto x : v)
    // {
    //     cout << x <<" ";
    // }
    
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // min value it 

    // auto min_it = min_element(v.begin(),v.end());  
    // // duplicate thakala first value address return kora
    // cout << *min_it << endl;

    // // max value it

    // auto max_it = max_element(v.begin(),v.end());
    // cout << *max_it << endl;


    // max element position - ( max_it - v.begin())

    auto max_it = max_element(v.begin(),v.end());
    int max_element_position = max_it - v.begin();

    cout << max_element_position << endl;

    return 0;
}