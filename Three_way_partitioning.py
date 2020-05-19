# function should a list containing the required order of the elements
def threeWayPartition(arr, n, a, b):
    arr.sort()
    return arr
    
            



#{ 
#  Driver Code Starts
# Driver Program
from collections import Counter
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        brr = Counter(arr)
        a,b = list(map(int, input().strip().split()))
        res = threeWayPartition(arr, n, a, b)
        k1 = k2 = k3 = 0
        for e in arr:
            if e > a:
                k3+=1
            elif e<=a and e>=b:
                k2+=1
            elif e<a:
                k1+=1
        m1 = m2 = m3 = 0
        for e in range(k1):
            if res[e]<a:
                m1+=1
        for e in range(k1, k1+k2):
            if res[e]<=a and res[e]>=b:
                m2+=1
        for e in range(k1+k2, k1+k2+k3):
            if res[e]>=a:
                m3+=1
        flag = False
        if k1==m1 and k2==m2 and k3==m3:
            flag = True
        for e in range(len(res)):
            brr[res[e]]-=1
        for e in range(len(res)):
            if brr[res[e]]!=0:
                flag = False
        if flag:
            print(1)
        else:
            print(0)
# Contributed by: Harshit Sidhwa
# } Driver Code Ends
