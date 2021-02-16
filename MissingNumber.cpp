//Find the missing number
#include <bits/stdc++.h>
using namespace std;

int missing_Num(int a[], int n) 
{ 
    int i, t=1; 
    for ( i=2; i<=(n+1); i++)
    {
        t += i;
        t -= a[i-2];
    }
    return t; 
} 
