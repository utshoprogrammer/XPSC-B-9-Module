#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //pair<string,int> student = make_pair("utsho",10);
    //or
    //pair<string,int> student = {"utsho",10};

    //cout << student.first <<" " << student.second << endl;
    // student.first = "Arif";

    // auto[name,roll] = student;

    // cout << name <<" " << roll << endl;

    // pair of array

    // int n; cin >> n;
    // pair<string,int> students[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    //}

    // for (auto [x,y] : students)
    // {
    //     cout << x <<" " << y << endl;
    // }

    // or
    // for (int i = 0; i < n; i++)
    // {
    //     cout << students[i].first <<" " << students[i].second << endl;
    // }

    // pair with multiple vlaue
    
    pair<string,pair<int,string>> p = {"utsho",{2,"01795"}};

    string name = p.first;
    int roll = p.second.first;
    string phoneNumber = p.second.second;

    cout << name << " "<< roll <<" "<< phoneNumber << endl;

    return 0;
}