#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Stack
{
    char s[100];
    int top,MAX=100;
public:
    Stack()
    {
        top=-1;
    }
    void push(char a)
    {
        if (top==MAX-1)
        {
            cout<<"Stack overflow!";
            return;
        }
            s[++top]=a;
    }
    char pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow!";
            return 'N';
        }
        return s[--top];
    }
    void IsPalindrome(char s[100])
    {
        int flag=0;
        int a;
        char str[100];
        cout<<"Enter the string: ";
        gets(str);
        for(int i=0;i<MAX,str[i]!='\0';i++)
        {
           push(str[i]);
        }

        for(int i=0;i<MAX,str[i]!='\0';i++)
        {
            pop();
            if(s[top]!=str[i])
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"The given string is a palindrome.";
        }
        else
        {
            cout<<"The given string is not a palindrome.";
        }
    }
};
int main()
{
     char s[100];
     Stack st;
    st.IsPalindrome(s);
    return 0;
}

