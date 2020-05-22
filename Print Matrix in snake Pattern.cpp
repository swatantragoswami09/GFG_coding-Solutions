#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int *a[n];
	    for(int i=0;i<n;i++)
	        a[i]=new int[n];
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<n;j++)
	        cin>>a[i][j];
	        
	   }
	   
	   int fi=0,li=0;
	   int c=n;
	   bool flag=true;
	   while(c-->0)
	   {
	       if(flag)
	       {
	           for(int i=0;i<n;i++)
	            {
	                
	                cout<<a[fi][li++]<<" ";
	                
	            }
	           
	           fi++;
	           li--;
	           flag=!flag;
	       }
	       else
	       {
	           for(int i=0;i<n;i++)
	            {
	                
	                    cout<<a[fi][li--]<<" ";
	                
	            }
	            li++;
	            fi++;
	           flag=!flag;
	       }
	   }
	   cout<<"\n";
	}
	return 0;
}
