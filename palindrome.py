def is_p(n):
    s=0
    temp=n
    while n>0:
        rem=n%10
        s=s*10+rem
        n=n//10
    if s==temp:
        return 'Yes'
    else:
       return 'No'
n=int(input())
while n>0:
    print(is_p(int(input())))
    n-=1
        
