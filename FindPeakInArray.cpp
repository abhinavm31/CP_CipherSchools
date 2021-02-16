//Find peak in given array

#include<bits/stdc++.h>
using namespace std;

int peakElement(int a[],int l, int h, int n)
{
	int mid=l+(h-l)/2;
	if((mid==0 || a[mid-1]<=a[mid]) && (mid==n-1 || a[mid+1]<=a[mid]))
	return mid;
	else if(mid>0 && a[mid-1]>a[mid])
	return peakElement(a,l,(mid-1),n);
	else
	return peakElement(a,(mid+1),h,n);
}

int peak(int a[], int n)
{
	return peakElement(a,0,n-1,n);
}

int main()
{
	int a[]={5,10,20,15};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<peak(a,n);
	return 0;
}
