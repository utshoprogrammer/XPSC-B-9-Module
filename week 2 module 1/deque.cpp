#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    sort(dq.begin(),dq.end());
    
    dq.push_front(1);
    dq.push_front(7);
    dq.pop_back();
    dq.pop_front();

    // for (int x : dq)
    // {
    //     cout << x <<" ";
    // }
    // cout << endl;

    dq.pop_front();

    for (int x : dq)
    {
        cout << x <<" ";
    }
    cout << endl;
    cout << dq.front() <<" " << dq.back() << endl; 
    // dq.push_back, dq.pop_back, dq.back
    // dq.push_front(), dq.pop_front, dq.front



    return 0;
}