// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//arr1,arr2 : the arrays
// n, m: size of arrays
void findUnion(int a[], int b[], int m, int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(i>0&&a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(j>0&&b[j]==b[j-1])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(b[j]<a[i])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<m)
    {
        if(i==0||a[i]!=a[i-1]) 
        {
            cout<<a[i]<<" ";
            i++;
        }
        
    }
    while(j<n)
    {
        if(j==0||b[j]!=b[j-1]) 
        {
            cout<<b[j]<<" ";
            j++;
        }
        
    }
}

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    findUnion(arr1,arr2, N, M);
	    
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
