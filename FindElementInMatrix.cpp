//Find Element in Matrix
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> row, int s, int e, int x) 
{
    return 0;
}
 
pair<int, int> findElement(vector<vector<int>> matrix, int x) 
{
    for (int i=0; i<matrix.size(); i++) 
	{
        int j=binarySearch(matrix[i], 0, matrix[i].size()-1, x);
        
        if (j>=0) 
            return pair<int,int>{i, j};
    }
} 
