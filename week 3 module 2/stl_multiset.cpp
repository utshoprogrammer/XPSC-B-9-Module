#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    multiset<int> mset;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mset.insert(x);
    }
    // set a menauly value acess korta pari  TC = O(1)

    // auto it = mset.begin();
    // it++;
    // it++;
    // it++;

    // cout << *it << endl;
    
    // multiset traversal

    // for (auto value : mset)
    // {
    //     cout << value <<" ";
    // }


    // find() = TC O(log n) 
    //jode value pay taba value ar address return kora otherwise end() return kora

    // auto it = mset.find(7);

    // if(it != mset.end())
    // {
    //     cout << "Found" << endl;
    // }
    // else{
    //     cout << "Not Found" << endl;
    // }

    // erase()  = O(log n + k)   (k) holo total erase value 
    // single value erase korla time complexity haba O(log n) ex = 6 value

    // mset.erase(4);
    // for(auto val : mset)
    // {
    //     cout << val <<" ";
    // }

    // jode  duplicate value one value erase korta chai tahala aga find the value and erase it location
    // O(log n + log n)

    // auto it = mset.find(4);
    // mset.erase(it);

    // for(auto val : mset)
    // {
    //     cout << val <<" ";
    // }

    // count()
    // sigle or not found value O(long n)
    // multiple value ar janno O(long n + k)

    // cout << mset.count(4) << endl;

    // lower_bound and upper_bound 

     // lower_bound and upper_bound 
    //jode N value set a thaka return N <= value . otherwise return end()

    // int N; cin >> N;

    // auto it = mset.lower_bound(N);  

    // if(it == mset.end())
    // {
    //     cout <<"End" << endl;
    // }
    // else{
    //     cout << *it << endl;
    // }

    ////jode N value set a thaka return N < value . otherwise return end()

    // int N; cin >> N;

    // auto it = mset.upper_bound(N);   

    // if(it == mset.end())
    // {
    //     cout <<"End" << endl;
    // }
    // else{
    //     cout << *it << endl;
    // }

    return 0;
}