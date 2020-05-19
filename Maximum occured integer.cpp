// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends

// L and R are input array
// maxx : maximum in R[]
// n: size of array
// arr[] : declared globally with size equal to maximum in L[] and R[]
#define MAX 1000000
int maxOccured(int L[], int R[], int n, int maxx){

    // vector<int> arr[1000];
    int arr[MAX];
    memset(arr, 0, sizeof arr);
    int maxi=-1; 
    for(int i=0;i<n;i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
        if(R[i]>maxi){ 
            maxi=R[i]; 
        } 
    }
   int msum=arr[0],ind;
//   int res=0;
    for(int i=1;i<maxi+1;i++)
    {
        arr[i]+=arr[i-1];
        if(msum<arr[i])
        {
            msum=arr[i];
            ind=i;
        }
    }
    return ind;
    
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int L[n];
	    int R[n];
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    
	    cout << maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
