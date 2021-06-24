
 // } Driver Code Ends


//User function Template for C++

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);
        stack<int>h=input;
        vector<int>v;
        while(!output.empty()!=NULL)
        {output.pop();}
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        input=h;
        }

    int dequeue() {
        if(output.empty())
        {return -1;}
        else
        {int x=output.top();
        output.pop();
        stack<int>p=output;
        while(!input.empty())
        {
            input.pop();
        }
        while(!output.empty())
        {
            input.push(output.top());
            output.pop();
        }
        output=p;
        return x;}
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}
  // } Driver Code Ends
