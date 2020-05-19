// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the largest consecutive ones
*   x: given input to calculate the largest consecutive ones
*/
int maxConsecutiveOnes(int n)
{
 
    int ans=0;
    while(n>0)
    {
        n=n&(n<<1);
        ans++;
    }
    return ans;
    
}



// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
