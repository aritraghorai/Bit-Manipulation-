/*
 !Name: Aritra Ghorai
 !Date:29/07/2021
 ?Program Details: Check if a positive integer is a power of 2 without using any branching or loop.
   */
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isPower = n & (n - 1);
    if (!isPower)
    {
        cout << n << " is  power of two" << endl;
        return 0;
    }
    cout << n << " is not a power of two" << endl;
    return 0;
}
