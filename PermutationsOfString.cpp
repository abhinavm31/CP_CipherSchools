// All Permutations of Given String
#include <bits/stdc++.h>
using namespace std;

void generatePermutation(string str, int start, int end, vector<string>& result) 
{
    if (start>=end) 
	{
        result.push_back(str);
    } 
	
	else 
	{
        for (int i=start; i<=end; i++) 
		{
            swap(str[i], str[start]);
            generatePermutation(str, start+1, end, result);
            swap(str[i], str[start]);
        }
    }
}

vector<string> generatePermutation1(string str) 
{
    vector<string> result;
    generatePermutation(str, 0, str.size()-1, result); 
    return result;
}
