// { Driver Code Starts
#include<iostream>
using namespace std;

int isPowerOfFour(unsigned int n);

/*Driver program to test above function*/
int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
if(isPowerOfFour(n))
	cout<<1<<endl;
else
	cout<<0<<endl;
}
//getchar();
}
// } Driver Code Ends
int isPowerOfFour(unsigned int n)
{
    return ((n&(n-1)) == 0) && !(n & 0xAAAAAAAA);
}
