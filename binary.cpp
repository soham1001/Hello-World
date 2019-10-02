#include <bits/stdc++.h>
using namespace std;

 long int binarySearch(long int arr[], int l, int r, long int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[m] == x) 
            return m; 
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
            l = m + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
}

long int ar[10004], ar1[10004];
int main()
{
	int n, k;

	cin>>n;
	
	for (int i = 0; i < n; i++)
	{
		cin>> ar[i];
	}
	cin>>k;
	for (int j = 0; j < k; j++)
	{
		cin>>ar1[j];
        cout<<binarySearch(ar, 0 , n , ar1[j])<< " ";
		
	}


     
  	return 0;
}