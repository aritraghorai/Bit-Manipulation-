/*
 !Name: Aritra Ghorai
 !Date:29/07/2021
 ?Program Details: Turn on k’th bit in a number
*20
*4
*20 8 bit represetation is:00010100
*28 8 bit represetation is:00011100
   */
#include <bits/stdc++.h>
int turnOnBit(int n, int k)
{
    return n | (1 << (k - 1));
}
using namespace std;
int main()
{
    int a, k;
    cin >> a >> k;
    cout << a << " 8 bit represetation is:" << bitset<8>(a) << endl;
    cout << turnOnBit(a, k) << " 8 bit represetation is:" << bitset<8>(turnOnBit(a, k)) << endl;
    return 0;
}
