#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    char a[20];
    int i,len=0;
    cout<<"Enter a string: ";
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    cout<<"The length of the given string is: "<<len;
    return 0;
}
