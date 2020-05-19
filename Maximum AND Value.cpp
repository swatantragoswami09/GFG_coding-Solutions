// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
 
// Function for finding maximum and value pair
int check(int p,int arr[], int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if((p&arr[i])==p) c++;
    }
    return c;
}
int maxAND (int arr[], int n)
{
    
    int r=0,c;
    for(int b=31;b>=0;b--)
    {
        c=check(r|(1<<b),arr,n);
        if(c>=2)
        r|=(1<<b);
    }
    return r;
    
}

// { Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        cout <<  maxAND(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
