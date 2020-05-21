
##Complete this code
def twoRepeated(arr,n):
    s=set()
    for i in arr:
        if i in s:
            print(i,end=" ")
        else:
            s.add(i)
    # print(arr)

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math


    
def main():
        T=int(input())
        while(T>0):
            
            N=int(input())

            A=[int(x) for x in input().strip().split()]
            
            twoRepeated(A,N)
            print()
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends
