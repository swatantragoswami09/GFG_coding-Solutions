def A(n):
    l=[i for i in str(n)]
    d=len(l)
    s=0
    o=n
    while n>0:
        rem=n%10
        s+=rem**d
        n=n//10
    if o==s:
        return 'Yes'
    else:
        return 'No'

n=int(input())
while n>0:
    print(A(int(input())))
    
    n-=1
