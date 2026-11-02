#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i = 2;i*i <= n;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
     int n; cin >> n;
     cout << prime(n) << endl;
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // O(n) :-
//     // int n; cin >> n;
//     // int flag = 1;
//     // for (int i = 2; i < n-1; i++)
//     // {
//     //     if(n % i == 0)
//     //     {
//     //         cout << "Not Prime" << endl;
//     //         flag = 0;
//     //         break;
//     //     }
//     // }
//     // if(flag == 1) cout <<"Prime" << endl;

//     // O(sqrt(n))

//     int n; cin >> n;

//     if(n == 1)
//     {
//         cout << "Not prime" << endl;
//         return 0;
//     }
//     bool flag = true;
//     for (int i = 2; i*i < n; i++)
//     {
//         if(n % i == 0)
//         {
//             cout << "Not prime\n";
//             flag = false;
//         } 
//     }
//     if(flag) cout << "Prime\n";
    
    
//     return 0;
// }