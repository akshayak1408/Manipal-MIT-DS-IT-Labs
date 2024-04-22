#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    char a[50],b[50],c[50];
    int p=0,r=0,i=0,t=0,x,g,s,n,o;
    puts("Enter the first string: ");
    gets(a);
    puts("Enter the second string: ");
    gets(b);
    cout<<"Enter the position where the item has to be inserted: ";
    cin>>p;
    r=strlen(a);
    n=strlen(b);
    i=0;
    while(i<=r)
    {
        c[i]=a[i];
        i++;
    }
    s=n+r;
    o=p+n;
    for(i=p;i<s;i++)
    {
        x=c[i];
        if(t<n)
        {
            a[i]=b[t];
            t=t+1;
        }
        a[o]=x;
        o=o+1;
    }
    cout<<"The final string is: ";
    puts(a);
    return 0;
}
