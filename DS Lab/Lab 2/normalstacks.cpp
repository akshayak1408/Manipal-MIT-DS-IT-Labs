#include<iostream>
#include<stdio.h>
#define STACK_SIZE 10
using namespace std;
class Stack {
public:
 Stack()
 {
    top = -1;
 }
 void push();
 int pop();
 void display();
private:
 int s[10];
 int item;
 int top;
};
void Stack:: push()
{
if(top == STACK_SIZE-1)
{
cout<<"Stack Overflow \n";
return;
}
s[++top]=item;
}
int Stack::pop()
{
if(top==-1)
{
cout<<"Empty Stack \n";
return -1;
}
return s[top--];
}
void Stack::display()
{
int i;
if(top==-1)
{
cout<<"Empty Stack \n";
return;
}
 cout<<"Contents of stack\n";
 for(i=0;i<=top;i++)
 cout<<s[i];
}
int main()
{
    Stack st;
    char s[100];
    cout<<"Enter the numbers: ";

    st.push();
}
