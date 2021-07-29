#include <bits/stdc++.h>

using namespace std;
bool chackKthBit(int a, int k)
{
    return a & (1 << (k - 1));
}
int main()
{
    int a, k;
    cin >> a >> k;
    cout << a << "=" << bitset<8>(a) << endl;
    if (chackKthBit(a, k))
    {
        printf("%d %dth bit is set bit", a, k);
    }
    else
    {
        printf("%d %dth bit is not set bit", a, k);
    }
    return 0;
}
