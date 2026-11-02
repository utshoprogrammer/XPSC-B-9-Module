#include<bits/stdc++.h>
using namespace std;
# define ll long long

bool prime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i = 2;i *i<= n;i++)
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    ll int n; cin >> n;
    if(prime(n))
    {
        cout << 1 << endl;
    }
    else if(n % 2 == 0)
    {
        cout << 2 << endl;
    }
    else{
        if(prime(n-2))
        {
            cout << 2 <<  endl;
        }
        else{
            cout << 3 << endl;
        }
    }


    return 0;
}