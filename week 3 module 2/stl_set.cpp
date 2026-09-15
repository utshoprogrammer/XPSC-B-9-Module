#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        s.insert(x);            // set insert TC = O(log n)
    }
    // set a menauly value acess korta pari  TC = O(1)

    // auto it = s.begin();
    // it++;
    // it++;
    // it++;
    // it--;
    // cout << *it << endl;

    // set traversal

    // for (auto value : s)
    // {
    //     cout << value <<" ";
    // }

    // find() = TC O(log n) 
    //jode value pay taba value ar address return kora otherwise end() return kora

    // auto it = s.find(7);

    // if(it != s.end())
    // {
    //     cout << "Found" << endl;
    // }
    // else{
    //     cout << "Not Found" << endl;
    // }

    // erase() = O(log n)

    // s.erase(6);

    // for (int val : s)
    // {
    //     cout << val <<" ";
    // }

    // count() = O(log n)  
    //ata muloto find function ar moto kaj kora jode value powa jay taba 1 return kora otherwise 0

    //cout << s.count(6) << endl;

    // lower_bound and upper_bound 
    //jode N value set a thaka return N <= value . otherwise return end()

    // int N; cin >> N;

    // auto it = s.lower_bound(N);  

    // if(it == s.end())
    // {
    //     cout <<"End" << endl;
    // }
    // else{
    //     cout << *it << endl;
    // }

    ////jode N value set a thaka return N < value . otherwise return end()

    // int N; cin >> N;

    // auto it = s.upper_bound(N);   

    // if(it == s.end())
    // {
    //     cout <<"End" << endl;
    // }
    // else{
    //     cout << *it << endl;
    // }
    
    return 0;
}