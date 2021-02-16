//Search an element in sorted and rotated array
#include <bits/stdc++.h> 
using namespace std; 
  
int binarySearch(int arr[], int low, int high, int k) 
{ 
    if (high<low) 
        return -1; 
        
    int mid = (low+high)/2; 
    if (k==arr[mid]) 
        return mid; 
    if (k>arr[mid]) 
        return binarySearch(arr, (mid+1), high, k); 
  
    return binarySearch(arr, low, (mid-1), k); 
} 
  
int findPivot(int arr[], int low, int high) 
{ 
    if (high<low) 
        return -1; 
    if (high==low) 
        return low; 
  
    int mid = (low+high)/2; 
    if (mid<high && arr[mid]>arr[mid+1]) 
        return mid; 
  
    if (mid>low && arr[mid] < arr[mid-1]) 
        return (mid-1); 
  
    if (arr[low]>=arr[mid]) 
        return findPivot(arr, low, mid-1); 
  
    return findPivot(arr, mid+1, high); 
} 

int pivotBinarySearch(int arr[], int n, int k) 
{ 
    int pivot = findPivot(arr, 0, n-1); 
  
    if (pivot==-1) 
        return binarySearch(arr, 0, n-1, k); 
    if (arr[pivot]==k) 
        return pivot; 
    if (arr[0]<=k) 
        return binarySearch(arr, 0, pivot-1, k); 
  
    return binarySearch(arr, pivot+1, n-1, k); 
} 
