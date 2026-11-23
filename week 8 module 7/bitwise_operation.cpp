#include<bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n,int k){
    return (n >> k) & 1;
}

void print_bit_on_or_off(int n)
{
    for (int k = 7; k >= 0; k--)
    {
        if(check_kth_bit_on_or_off(n,k)){
            cout << 1 <<" ";
        }
        else{
            cout << 0 <<" ";
        }
    } 
}
int turn_on_kth_bit(int n,int k){
    return (n|(1 << k));
}
int turn_off_kth_bit(int n,int k){
    return (n&(~(1<<k)));
}
int toggle_bit(int n,int k){
    return (n ^ (1 << k));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //cout << check_kth_bit_on_or_off(45,2) << endl;  // 1 hala on otherwise off
    // print_bit_on_or_off(45);   // on and off bit print 
    //cout << turn_on_kth_bit(45,4) << endl; // kono bit (0 to 1 ) convert (OR operation,left shift ) operation 
    //cout << turn_off_kth_bit(45,3) << endl;   // kono bit (1 to 0) convert (and ,not and left shift) operation
    //cout << toggle_bit(45,4) << endl;
    //cout << toggle_bit(45,2) << endl;  // kono bit (1 to 0) and (0 to 1) covert (left shift ,xor) operation

    // buit in function

    cout << __builtin_popcount(39) << endl;   // count bit 1  =  4
    cout << __lg(39) << endl;   // hight set bit return  = 5

    return 0;
}