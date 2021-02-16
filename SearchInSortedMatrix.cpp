//Search in the sorted matrix

#include <bits/stdc++.h> 
using namespace std;
 
int search(int mat[4][4], int n, int a)
{
    if (n == 0)
        return -1;
   
    int s = mat[0][0], l = mat[n - 1][n - 1];
    if (a < s || a > l)
        return -1;
   
    int i = 0, j = n - 1; 
    while (i < n && j >= 0) 
    {
        if (mat[i][j] == a) 
        {
            cout << "Found at "
                 << i << ", " << j;
            return 1;
        }
        if (mat[i][j] > a)
            j--;
        else
            i++;
    }
    cout << "Element not found";
    return 0;
}
 
int main()
{
    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    search(mat, 4, 29);
    return 0;
}
