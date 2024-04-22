#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[200],wrd[20];
    int i,j,strLen,wrdLen,tmp,chk=0;
    cout<<"Enter the string: ";
    gets(str);
    cout<<"Enter the word to be deleted: ";
    cin>>wrd;
    strLen=strlen(str);
    wrdLen=strlen(wrd);
    for(i=0;i<strLen;i++)
    {
        tmp=i;
        for(j=0;j<wrdLen;j++)
        {
            if(str[i]==wrd[j])
                i++;
        }
        chk=i-tmp;
        if(chk==wrdLen)
        {
            i=tmp;
            for(j=i;j<(strLen-wrdLen);j++)
                str[j]=str[j+wrdLen];
            strLen=strLen-wrdLen;
            str[j]='\0';
        }
    }
    cout<<"\nThe new string is: "<<str;
    cout<<endl;
    return 0;
}
