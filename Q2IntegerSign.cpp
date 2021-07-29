#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " binary from is " << bitset<16>(a) << endl;
    cout << b << " binary from is " << bitset<16>(b) << endl;
    bool isOpposite = ((a ^ b) < 0);
    if (isOpposite)
    {
        cout << a << " " << b << " has opposide sign" << endl;
    }
    else
    {
        cout << a << " " << b << " has same  sign" << endl;
    }
    return 0;
}
