#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    char a[50],b[50];
    int i,j,len=0;
    cout<<"Enter the first string: ";
    gets(a);
    cout<<"Enter the second string: ";
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    for(j=0;j<50;j++)
    {
        a[len+j]=b[j];
    }
    cout<<"The final concatenated string is: ";
    puts(a);
    return 0;
}
