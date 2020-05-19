#{ 
#Driver Code Starts
#Initial Template for Python 3

import math


 # } Driver Code Ends

#User function Template for python3

##Complete this function
import math
def digitsInFactorial(N):
    n=math.factorial(N)
    # print(n)
    return int( math.log(n,10)+1)
    
       


#{ 
#Driver Code Starts.

def main():
    
    T=int(input())
    
    while(T>0):
        N=int(input())
        
        print(digitsInFactorial(N))
        
        T-=1
    
    




if __name__=="__main__":
    main()
#} Driver Code Ends
