/*
 !Name: Aritra Ghorai
 !Date:29/07/2021
 ?Program Details: Find the position of the rightmost set bit
   */
#include <bits/stdc++.h>
using namespace std;

int rightMostSetBitPosition(int n)
{
  int digit = n & (n - 1);
  digit = digit ^ n;
  int count = 0;
  while (digit)
  {
    digit = digit >> 1;
    count++;
  }
  return count;
}
int main()
{
  int a;
  cin >> a;
  cout << a << "=" << bitset<8>(a);
  cout << "\nThe right most set bit position is:" << rightMostSetBitPosition(a);

  return 0;
}
