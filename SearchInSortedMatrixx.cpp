//Search in sorted matrix

#include<bits/stdc++.h>
using namespace std;

int n;
int find(int m[n][n],int n,int x)
{
	int s=m[0][0],l=m[n-1][n-1];
	if(n==0 || x<s || x>l)
	return -1;
	
	int i=0;j=n-1;
	while(i<n && j>0)
	{
		if(m[i][j]==x)
		{
			cout<<"Element Found at ("<<i<<", "<<j<<")";
			return 1;
		}
		if(m[i][j]>x)
		j--;
		else
		i++;
	}
	cout<<"Element not found"<<endl;
	return 0;
}

int main()
{
	int n,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>m[i][j];
	}
	cout<<"Enter element to search"<<endl;
	cin>>s;
	find(m,n,s);
	return 0;
}
