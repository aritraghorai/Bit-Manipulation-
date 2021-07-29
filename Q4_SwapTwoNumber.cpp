/*
 !Name: Aritra Ghorai
 !Date:29/07/2021
 ?Program Details: Swap two numbers without using any third variable
   */
#include <bits/stdc++.h>

using namespace std;
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    printf("Before swap a and b is:%d %d", a, b);
    swap(&a, &b);
    printf("Before swap a and b is:%d %d", a, b);
    return 0;
}
