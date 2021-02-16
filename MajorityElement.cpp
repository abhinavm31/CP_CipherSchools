//Find Majority Element

#include <bits/stdc++.h>
using namespace std;

int index(vector<int>& vec) 
{
    int index1 = 0, count = 1;
    for (int i = 1; i < vec.size(); i++) 
	{
        if (vec[i] == vec[index1]) 
		{
            count++;
        } 
		else 
		{
            count--;
        }
        if (count == 0) {
            index1 = i;
            count = 1;
        }
    }
    return index1;
}

int findMajority(vector<int>& vec) 
{
    int index1 = index(vec);
    int freq = 0;
    
    for (int i = 0; i < vec.size(); i++)
	{
        if (vec[i] == vec[index1]) 
		{
            freq++;
        }
    }

    if (freq > vec.size()/2)
	{
        cout << vec[index1] << " ";
    }
	else 
	{
        cout << "No Majority Element" << endl;
    }
}

int main() 
{
    vector<int> vec = {1, 1, 3, 2, 1, 1, 1, 5, 6, 7};
    return 0;
}

