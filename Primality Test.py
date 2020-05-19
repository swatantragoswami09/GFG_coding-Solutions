#{ 
#Driver Code Starts
#Initial Template for Python 3


import math



 # } Driver Code Ends

#User function Template for python3


##Complete this function
def isPrime(n):
    if n<=1:
        return 0
        
    for i in range(2,n):
        
        if n%i==0:
            return 0
    
    
    
    return 1
    
    


#{ 
#Driver Code Starts.
def main():
    
    T=int(input())
    
    while(T>0):
        
        N=int(input())
        
        if(isPrime(N)):
            print("Yes")
        else:
            print("No")
            
        
        T-=1
    
    




if __name__=="__main__":
    main()
#} Driver Code Ends
