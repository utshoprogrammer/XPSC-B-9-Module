#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    // insert O(log n)

    // mp.insert({10,30});
    // mp.insert({1,30});

    // or O(long n)
    mp[10] = 20;
    mp[2] = 12;
    mp[1] = 40;

    // map ar value access korta hoy key dea

    // cout << mp[10] << endl;

    // traversal map

    // for (auto [key,value] : mp)
    // {
    //     cout << key << " -> " << value << endl;
    // }

    // or

    // for (auto it : mp)
    // {
    //     int key = it.first,value = it.second;
    //     cout << key <<" " << value << endl;
    // }

    // find value for map = amon kono key find kora jaba na ja map nai if chai tahala seta retrun koraba 0

    // auto it = mp.find(22);

    // if(it == mp.end())
    // {
    //     cout <<"Key Not Found" << endl;
    // }
    // else{
    //     cout << it->first <<" " << it->second << endl;
    // }

    // or

    // cout << mp[25] << endl;
    // cout << mp[9] << endl;

    // for (auto it : mp)
    // {
    //     int key = it.first,value = it.second;
    //     cout << key <<" -> " << value << endl;
    // }

    // erease() = amon kono key erease kora jaba na jata map a nai

    // jode jana thaka j kon key erase korta haba and seta jodi map a thaka

    // mp.erase(2);

    // for (auto it : mp)
    // {
    //     int key = it.first,value = it.second;
    //     cout << key <<" -> " << value << endl;
    // }

    // or jode jana na thaka

    // auto it = mp.find(1);  // O(log n)

    // if (it != mp.end())
    // {
    //     mp.erase(it);   // O(log n)
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }
    
    // for (auto it : mp)
    // {
    //     int key = it.first,value = it.second;
    //     cout << key <<" -> " << value << endl;
    // }

    // size(),clear() and empty()

    //cout << mp.size() << endl;

    // mp.clear();
    // cout << mp.empty() << endl;  // map a kono value na thakala 1 return kora otherwise 0


    // iterator 

    // auto it = mp.begin();
    // cout << it->first <<" " << it->second << endl;

    // auto it = mp.rbegin();
    // cout << it->first <<" " << it->second << endl;

    // lower_bound and upper_bound = O(n)

    // auto it = mp.lower_bound(1);     // return  kora key ar (<= ) key ar iterator 
    // cout << it->first <<" -> " << it->second << endl;

    // auto it = mp.upper_bound(1);       // return kora key ar (< ) key ar iterator
    // cout << it->first <<" -> " << it->second << endl;

    return 0;
}