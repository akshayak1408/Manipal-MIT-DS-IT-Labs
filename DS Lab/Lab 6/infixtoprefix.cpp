#include<iostream>
#include<string.h>
using namespace std;
#define MAX 20
class stk
{
    public :
    int top;
    char a[MAX];

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

    void push(char c)
    {
        if (isfull())
        {
            cout<<"STACK FULL"<<endl;
            return ;
        }
        else
            a[++top]=c;
    }

    void pop()
    {
        if (isempty())
        {
            cout<<"STACK EMPTY"<<endl;
            return ;
        }
        else
            top--;
    }

    char topp()
    {
        if (isempty())
        return '\0';
        return a[top];
    }

};

void reverss(char y[])
{
    char q[20];
    int l=strlen(y);
    int j=0;
    for (int i=l-1;i>=0;i--)
    {
        if (y[i]=='(') {
        q[j++]=')'; continue; }
        else if (y[i]==')') {
        q[j++]='('; continue; }
        q[j++]=y[i];
    }
    int i;
    for ( i=0;i<l;i++)
    y[i]=q[i];
    y[i]='\0';
}
int precedence(char r)
{
    switch (r)
    {
        case '+' :
        case '-' : return 1;
        case '*' :
        case '/' : return 2;
        default : return -1;
    }
}

int main()
{
    stk s;
    char arr[20];
    cout<<"Enter the infix expression: ";
    cin>>arr;
    char ans[20];
    int j=0;
    int h=strlen(arr);
    int i=0;
    reverss(arr);
    while (h--)
    {
        char c=arr[i++];
        if ((c>=97 && c<=122))
        ans[j++]=c;
        else if (c=='(')
        s.push(c);
        else if (c==')')
        {
            while (s.topp()!='(')
            {
                ans[j++]=s.topp();
                s.pop();
            }
            s.pop();
        }
        else
        {
            if (s.isempty())
            s.push(c);
            else if (precedence(c)>precedence(s.topp()) )
            s.push(c);
            else
            {
                while (!s.isempty())
                {
                    if (precedence(c)>precedence(s.topp()))
                    break;
                    ans[j++]=s.topp();
                    s.pop();
                }
                s.push(c);
            }
        }
    }
    while (!s.isempty())
    {
        ans[j++]=s.topp();
        s.pop();
    }
    ans[j]='\0';
    reverss(ans);
    cout<<"Prefix form: "<<ans<<endl;
    return 0;
}
