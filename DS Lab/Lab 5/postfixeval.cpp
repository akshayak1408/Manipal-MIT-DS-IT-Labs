#include<iostream>
#include<string.h>
using namespace std;
#define MAX 20
class stk
{
    public :
    int top;
    int a[MAX];

    stk()
    {
        top=-1;
    }

    bool isempty()
    {
        if (top==-1)
        return true;
        return false;
    }

    bool isfull()
    {
        if (top==MAX-1)
        return true;
        return false;
    }

    void push(int c)
    {
        if (isfull())
        {
            cout<<"STACK FULL"<<endl;
            return ;
        }
        else
            a[++top]=c;
    }

    int pop()
    {
        if (isempty())
        {
            cout<<"STACK EMPTY"<<endl;
            return -1;
        }
        else
            return a[top--];
    }

    int topp()
    {
        if (isempty())
        return -1;
        return a[top];
    }
};

int Operator(char ch, int a, int b){
    switch(ch){
        case '*': return(a*b);
        case '+': return(a+b);
        case '-': return(a-b);
        case '/': return(a/b);
        default:
        return 0;
    }
}

void posteval(char t[])
{
    stk s;
    int q=strlen(t);
    for (int i=0;i<q;i++)
    {
        char d=t[i];
        if (t[i]>=48 && t[i]<=57)
        s.push((int)d-48);
        else if (d=='+' || d=='-' || d=='*' || d=='/')
        {
            int e1,e2;
            e2=s.pop();
            e1=s.pop();
            s.push(Operator(d,e1,e2));
        }
    }
    cout<<"The evaluated result is: "<<s.topp()<<endl;
}

int main()
{
    char arr[MAX];
    cout<<"Enter postfix expression: ";
    cin>>arr;
    posteval(arr);
    return 0;
}
