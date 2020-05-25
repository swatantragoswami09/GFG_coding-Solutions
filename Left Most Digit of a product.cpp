// formula used:
// int(10^(log10(product of elements in array)-int(log10(product of elements in array)))
// int(10^(log10(a[i])-int(log10(a[i]))))



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
		int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    double s=0;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s+=log10(a[i]);
	    }
	  
	    cout<<(int)(pow(10,s-(int)(s)))<<"\n";
	}
	return 0;
}
