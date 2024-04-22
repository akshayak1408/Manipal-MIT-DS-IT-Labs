/*Write a program to convert a given decimal number to a number in any base using
stack.*/
#include<iostream>
using namespace std;
class stk
{
    int num[100];
    int top,MAX=100;
public:
    stk()
    {
        top=-1;
    }
    void push(char s[100])
    {
        if(top==MAX-1)
        {
            cout<<"Stack overflow!";
            return;
        }
        int a;
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
    void conversions()


};
