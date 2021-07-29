#include <bits/stdc++.h>

using namespace std;
bool isOdd(int a)
{
    return (a & 1) == 0;
}
int main()
{
    int a;
    cin >> a;
    cout << a << " Is a even number " << isOdd(a) << endl;
    return 0;
}
