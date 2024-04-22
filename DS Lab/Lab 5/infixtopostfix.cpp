#include<iostream>
#include<string.h>
using namespace std;
class stks
{
    char infix[100];
    int MAX=100,top;
public:
    stks()
    {
        top=-1;
    }
    bool isempty()
    {
       if(top==-1)
        return true;
       return false;
    }
    bool isfull()
    {
        if(top==MAX-1)
         return true;
        return false;
    }
    void push(char ele)
    {
        if(top==MAX-1)
            {
                cout<<"Stack overflow!";
                return;
            }
    infix[++top]=ele;
    }

    char pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow!";
            return 'n';
        }
        return infix[top--];
    }
    void ConToPfix(char arr[])
{
    int l,precedence,p=0;
    char e1,e2,pfix[50];
    for(int i=0;arr[i]!='\0';i++)
    {
        e1=arr[i];
        switch(e1)
        {
        case '(':
            push(e1);
            break;
        case ')':
            while((e2=pop())!='(')
            pfix[p++]=e2;
            break;
        case '+':
        case '-':
        case '*':
        case '/':
            if(!isempty())
            {
                precedence=prec(e1);
                e2=pop();
                while(precedence<=prec(e2))
                {
                    pfix[p++]=e2;
                    if(!isempty())
                        e2=pop();
                    else
                        break;
                }
                if(precedence>prec(e2))
                    push(e2);
            }
            push(e1);
            break;
        default:
            pfix[p++]=e1;
            break;
        }
    }
    while(!isempty())
            pfix[p++]=pop();
    pfix[p]='\0';
    cout<<"The postfix expression is: "<<pfix<<endl;
}
int prec(char symbol)
{
    switch(symbol)
    {
    case '/':
    case '*':return 3;
    case '+':
    case '-':return 2;
    case '(':return 0;
    default:return -1;
    }
}
};
int main()
{
    stks s;
    int option;
    char str[50];
    cout<<"Enter the infix expression: ";
    cin>>str;
    s.ConToPfix(str);
    return 0;
}
