#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Non_Increasing (max)
    priority_queue<int> pq;

    // O(log n)
    pq.push(5);
    pq.push(5);
    pq.push(3);
    pq.push(2);
    pq.push(2);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop(); // O(log n)
    cout << pq.top() << endl;
    pq.pop(); // O(log n)
    cout << pq.top() << endl;
    pq.pop(); // O(log n)

    cout << "Size -> " << pq.size() << endl;
    cout << pq.empty() << endl; // queue a value thakala return 0 otherwise return 1

    // prioity queue traversal

    while (!pq.empty())
    {
        int val = pq.top();
        pq.pop();
        cout << val << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     // Non_decresing (min)
//     priority_queue<int, vector<int>, greater<int>> pq;

//     // O(log n)
//     pq.push(5);
//     pq.push(5);
//     pq.push(3);
//     pq.push(2);
//     pq.push(2);
//     pq.push(1);

//     // cout << pq.top() << endl;
//     // pq.pop();      // O(log n)
//     // cout << pq.top() << endl;
//     // pq.pop();      // O(log n)
//     // cout << pq.top() << endl;
//     // pq.pop();      // O(log n)

//     // cout << "Size -> " << pq.size() << endl;
//     // cout << pq.empty() << endl;   // queue a value thakala return 0 otherwise return 1

//     // prioity queue traversal

//     while (!pq.empty())
//     {
//         int val = pq.top();
//         pq.pop();
//         cout << val << endl;
//     }

//     return 0;
// }