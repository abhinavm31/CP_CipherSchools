//Largest Sum Contiguous SubArray
#include<bits/stdc++.h>
using namespace std;
 
int SubArraySum(int a[], int s)
{
   int nmax=a[0], cmax=a[0];
   for (int i=1; i<s; i++)
   {
        cmax=max(a[i], cmax+a[i]);
        nmax=max(nmax, cmax);
   }
   return nmax;
}
