//Trapping RainWater
#include<iostream>
using namespace std;
 
int max_Water(int a[], int n)
{
    int s=n-1;
    int prev =a[0];
    int prev_index= 0;
    int water = 0;
    int temp = 0;
    
    for(int i=1; i<=s; i++)
    {
        if (a[i]>=prev) 
        {
            prev=a[i];
            prev_index=i;
            temp=0;
        } 
        else
        {
            water+=prev-a[i];
 
            temp+=prev-a[i];
        }
    }
    if(prev_index<s) 
    {
        water-=temp;
        prev=a[s];
        for(int i=s; i>=prev_index; i--) 
        {
            if(a[i]>=prev)
            {
                prev=a[i];
            } 
            else
            {
                water+=prev-a[i];
            }
        }
    }
    return water;
}
