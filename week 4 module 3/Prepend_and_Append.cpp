#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n; cin >> n;
        string s; cin >> s;

        int l = 0,r = s.size()-1;
        int count = 0;
        while (l <= r)
        {
            if(s[l] != s[r])
            {
                count+=2;
            }    
            else{
                break;
            }
            l++;
            r--;
        }
        cout << s.size() - count << endl;       
    }   

    return 0;
}