#include <bits/stdc++.h>
using namespace std;

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
        	
		// Iterations to perform binary search
		int bSearchOutput=-1;
		int l=0, r=n;
		long long int x=ar1[j];
		
		while (l <= r) 
		{ 
			int m = l + (r - l) / 2; 

			// Check if x is present at mid 
			if (ar1[m] == x) 
			    bSearchOutput = m;

			// If x greater, ignore left half 
			if (ar1[m] < x) 
			    l = m + 1; 

			// If x is smaller, ignore right half 
			else
			    r = m - 1; 
	    	}  
		
		cout<<bSearchOutput<< " ";
	}


     
  	return 0;
}
