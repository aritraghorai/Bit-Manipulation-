/*
 !Name: Aritra Ghorai
 !Date:29/07/2021
 ?Program Details: Toggle the k’th bit
 *Toggle meaning if kth bit 0 then change to 1 or viseversa
   */
#include <bits/stdc++.h>

using namespace std;
int toogleKthBit(int a, int k)
{
    return a ^ (1 << (k - 1));
}
int main()

{
    int a, k;
    cin >> a >> k;
    cout << a << "=" << bitset<8>(a) << endl;
    int x = toogleKthBit(a, k);
    cout << "After Toggle We get\n";
    cout << x << "=" << bitset<8>(x) << endl;
    return 0;
}
