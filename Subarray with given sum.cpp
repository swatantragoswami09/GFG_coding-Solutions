// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
       int flg=0, j=0, i=0;
        long sum=0;
        vector<int> v;
        while(i<=n){
            if(sum<s)
                sum+=arr[i++];
            else if(sum>s)
                sum-=arr[j++];
            if(sum==s){
                flg=1;
                break;
            }
        }
        if(flg==1){
             
                v.insert(v.begin(), j+1);
                v.insert(v.begin()+1,i); //remove ="">
        }
        else {
            v.insert(v.begin(),-1);
            return v;
        }
        
       
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
