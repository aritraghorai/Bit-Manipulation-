#include <bits/stdc++.h>
using namespace std;

int findRightMostUsingNegetive(int n)
{
    if (n & 1)
    {
        return 1;
    }
    return log2(n & -n) + 1;
}
int main()
{
    int a;
    cin >> a;
    cout << "The position of the rightmost set bit is " << findRightMostUsingNegetive(a);
    return 0;
}
