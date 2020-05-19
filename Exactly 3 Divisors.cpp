// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
int exactly3Divisors(int N)
{
    bool flag;
    int count=0;
    for(int i=2;i*i<=N;i++)
    {
        flag=true;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
                flag=false;
        }
        if(flag) count++;
    }
    return count;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
