#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //tuple<string,int,string> t = make_tuple("utsho",3,"01795");
    // or
    tuple<string,int,string> t = {"utsho",3,"01795"};

    cout << get<0>(t) <<" " << get<1>(t) <<" "<< get<2>(t) << endl;

    // or
    auto[name,roll,phoneNumber] = t;
    cout << name <<" " << roll <<" "<< phoneNumber << endl;

    return 0;
}