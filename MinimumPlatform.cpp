//Minimum Platform
#include <bits/stdc++.h>
using namespace std;

int minimumPlatform(const vector<int>& a, const vector<int>& dept) 
{
    sort(a.begin(), a.end());
    
    sort(dept.begin(), dept.end());
    
    int i=1, j=0;
    int min_Platform=1, cur_Platform=1;
    
    while (i<a.size() && j<dept.size()) 
	{
        if (a[i] >=dept[j]) 
		{
            cur_Platform-=1;
            j++;
        } 
		else 
		{
            cur_Platform+=1;
            i++;
        }
        min_Platform = max(min_Platform, cur_Platform);
    }
    
    return min_Platform;
}
