//Stock buy sell
#include <bits/stdc++.h>
using namespace std;

int stocks(vector<int> & sp) 
{
    int min=sp[0], profit=0;
    
    for (int i=1;i<sp.size();i++) 
	{
        if (min<=sp[i]) 
		{
            int temp=sp[i]-min;
            profit=max(profit,temp);
        } 
		else 
            min=sp[i];
    }
    return profit;
}
