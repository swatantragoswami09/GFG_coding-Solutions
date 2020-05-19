#{ 
#Driver Code Starts
#Initial Template for Python 3

import math


 # } Driver Code Ends

#User function Template for python3

##You need to complete this function
def factorial(N):
    if N==0:
        return 1
    if N==1:
        return 1
    else:
        return N*factorial(N-1)



#{ 
#Driver Code Starts.

def main():
    
    T=int(input())
    
    while(T>0):
        N=int(input())
        
        print(factorial(N))
        
        
        T-=1
    
    




if __name__=="__main__":
    main()
#} Driver Code Ends
