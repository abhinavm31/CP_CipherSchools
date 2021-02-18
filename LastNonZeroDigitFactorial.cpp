// Last non zero digit of factorial
#include<bits/stdc++.h> 
using namespace std; 

int dig[]={1, 1, 2, 6, 4, 2, 2, 4, 2, 8}; 
  
int lastNonZeroDigit(int n) 
{ 
     if (n<10) 
        return dig[n]; 
    
	if (((n/10)%10)%2==0) 
        return (6*lastNonZeroDigit(n/5)*dig[n%10])%10; 
    
	else
        return (4*lastNonZeroDigit(n/5)*dig[n%10])%10; 
} 
  
