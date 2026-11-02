#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    return __gcd(a,b);       // log(min(a,b))
}
int lcm(int a,int b)
{
    //return (a*b)/__gcd(a,b);     // log(min(a,b))
    return ((a/__gcd(a,b)) * b);
}

int main()
{
    int a, b;
    cin >> a >> b;
   
    cout << gcd(a,b) << endl;
    cout << lcm(a,b) << endl;

    return 0;
}