//Segregate 0s and 1s in an array
#include <bits/stdc++.h> 
using namespace std; 
  
/*Function to put all 0s on  
left and all 1s on right*/
void segregate0and1(int arr[], int size) 
{ 
    int type0 = 0; 
    int type1 = size - 1; 
    while(type0 < type1) 
    { 
        if(arr[type0] == 1) 
        { 
            swap(arr[type0],  
                 arr[type1]); 
            type1--; 
        } 
        else
        type0++; 
    } 
}
