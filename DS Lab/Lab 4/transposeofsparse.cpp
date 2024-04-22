#include <iostream>
using namespace std;
class spm
{
    int r,c,v,m,n;
public:
    void read(spm a[]);
    void transpose(spm a[],spm b[]);
    void display(spm b[]);
};
void spm:: read(spm a[])
{
    int k=1,ele;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;
    cout<<"Enter the elements:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
         cin>>ele;
         if(ele==0)
                continue;
         a[k].r=i;
         a[k].c=j;
         a[k].v=ele;
         k++;
        }
    }
    a[0].r=m;
    a[0].c=n;
    a[0].v=k-1;
}
void spm:: transpose(spm a[],spm b[])
{
    int k=1;
    b[0].r=a[0].c;
    b[0].c=a[0].r;
    b[0].v=a[0].v;
    for(int i=0;i<=a[0].c;i++)
    {
        for(int j=1;j<=a[0].v;j++)
        {
            if(i==a[j].c)
            {
                b[k].r=a[j].c;
                b[k].c=a[j].r;
                b[k].v=a[j].v;
                k++;
            }
        }
    }
}
void spm:: display(spm b[])
{
    int i;
    for(i=0;i<=b[0].v;i++)
    cout<<b[i].r<<"\t"<<b[i].c<<"\t"<<b[i].v<<endl;
}
int main()
{
    spm a[50],b[50],a1;
    a1.read(a);
    a1.transpose(a,b);
    a1.display(b);
    return 0;
}
