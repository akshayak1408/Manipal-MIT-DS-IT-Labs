#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char a[50],b[50];
    int i,flag=0,len=0;
    cout<<"Enter the first string: ";
    gets(a);
    cout<<"Enter the second string: ";
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(a[i]==b[i])
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"The two strings are equal.";
    else
        cout<<"The two strings are not equal.";
    return 0;
}
