#User function Template for python3

# xor has imported in driver code
def getXor(arr, n, li, ri) :
    '''
    arr: given array
    n:   len of given array
    li: left index of range
    ri: right index of range
    '''
    x=arr[li]
    for i in range(li+1,ri+1):
            
        x=x^arr[i]
    return x



#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB

from math import ceil, log2;
from operator import xor
 
  

if __name__ == "__main__" :
    
    t=int(input())
    
    for tcs in range(t):
        n,li,ri=[int(x) for x in input().split()]
        li,ri=min(li,ri),max(li,ri)
        arr=[int(x) for x in input().split()]
        
        print(getXor(arr,n,li,ri))
        
        
# } Driver Code Ends
