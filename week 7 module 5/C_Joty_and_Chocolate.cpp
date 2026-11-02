// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int n,a,b,p,q; cin >> n >> a >> b >> p >> q;

//     ll int gcd = __gcd(a,b);

//     ll int lcm_ab = (a/gcd)*b;

//     if(p >= q)
//     {
//         ll int count_a = (n/a);
//         ll int count_b = (n/b) - (n/lcm_ab);

//         cout <<( count_a *p) + (count_b * q) << '\n';
//     }
//     else
//     {
//         ll int count_a = (n/a) - (n/lcm_ab);
//         ll int count_b = (n/b);

//         cout << (count_a *p) +( count_b * q) << '\n';
//     }

//     return 0;
// }

// or

#include<bits/stdc++.h>
using namespace std;
# define ll long long

ll int gcd(int a,int b)
{
    return __gcd(a,b);       // log(min(a,b))
}
ll int lcm(int a,int b)
{
    //return (a*b)/__gcd(a,b);     // log(min(a,b))
    return ((a/__gcd(a,b)) * b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,a,b,p,q; cin >> n >> a >> b >> p >> q;

    ll int x = (n/a) * p,y = (n/b) * q, overlap = (n/lcm(a,b));

    ll int ans =(( x + y)-(overlap * (p+q))) + (overlap *(max(p,q)));

    cout << ans << endl;

    return 0;
}