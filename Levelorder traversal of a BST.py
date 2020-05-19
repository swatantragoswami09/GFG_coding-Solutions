#{ 
#Driver Code Starts
#Initial Template for Python 3

class Node:
    data=0
    left=None
    right=None


def createNewNode(value):
    temp=Node()
    temp.data=value
    temp.left=None
    temp.right=None
    return temp
    

def newNode(root,data):
    if(root is None):
        root=createNewNode(data)
    elif(data<root.data):
        root.left=newNode(root.left,data);
    else:
        root.right=newNode(root.right,data)
        
    return root
    


 # } Driver Code Ends

#User function Template for python3

##Complete this function
def levelOrder(root):
    if root is None:
        return 
    # print(root.data)
    q=[]
    stack=[]
    q.append(root)
    while q:
        temp=q.pop(0)
        
        if temp.left:
            q.append(temp.left)
            # print(temp.data,end=' ')
        if temp.right:
            q.append(temp.right)    
        print(temp.data,end=' ')
        stack.append(temp)
    
             


#{ 
#Driver Code Starts.


def main():
    testcases=int(input())
    while(testcases>0):
        root=None
        sizeOfArray=int(input())
        arr=[int(x) for x in input().strip().split()]
        for i in arr:
            root=newNode(root,i)
       
        levelOrder(root)
        print()
        testcases-=1

if __name__=="__main__":
    main()
#} Driver Code Ends
