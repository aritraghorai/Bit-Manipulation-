/*
 !Name: Aritra Ghorai
 !Date:29/07/2021
 ?Program Details: Turn off k’th bit in a number
   */
#include <bits/stdc++.h>

using namespace std;
int turnOfKthBit(int n, int k)
{
    return n & (~(1 << (k - 1)));
}
int main()
{
    int a, k;
    cin >> a >> k;
    cout << a << " 8 bit represetation is:" << bitset<8>(a) << endl;
    cout << turnOfKthBit(a, k) << " 8 bit represetation is:" << bitset<8>(turnOfKthBit(a, k)) << endl;
    return 0;
}
