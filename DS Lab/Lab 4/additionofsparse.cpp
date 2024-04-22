#include <iostream>
using namespace std;
class spm
{
    int r,c,v,m,n;
public:
    void read(spm a[],spm b[]);
    void add(spm a[],spm b[],spm ad[]);
    void display(spm ad[]);
};
void spm:: read(spm a[],spm b[])
{
    int k=1,g=1,ele,ele2;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;
    cout<<"Enter the elements of first matrix:\n";
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

    cout<<"Enter the elements of second matrix:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
         cin>>ele2;
         if(ele2==0)
                continue;
         b[g].r=i;
         b[g].c=j;
         b[g].v=ele2;
         g++;
        }
    }
    b[0].r=m;
    b[0].c=n;
    b[0].v=g-1;
}
void spm:: add(spm a[50],spm b[50],spm ad[50])
    {
        int h=1;
        for(int i=0;i<a[0].r;i++)
        {
            for(int j=0;i<a[0].c;j++)
            {
                ad[h].r=i;
                ad[h].c=j;
                if(a[h].v!=0)
                {
                    ad[h].v=a[h].v;
                }
                else if(b[h].v!=0)
                {
                    ad[h].v=b[h].v;
                }
                else if(a[h].r==b[h].r && a[h].c==b[h].c)
                {
                    ad[h].v=a[h].v+a[h].v;
                }
                h++;
            }
        }
        ad[0].r=a[0].r;
        ad[0].c=a[0].c;
        ad[0].v=h-1;
    }
void spm:: display(spm ad[])
{
    int i;
    for(i=0;i<=ad[0].v;i++)
    cout<<ad[i].r<<"\t"<<ad[i].c<<"\t"<<ad[i].v<<endl;
}
int main()
{
    spm a[50],b[50],ad[50],a1;
    a1.read(a,b);
    a1.add(a,b,ad);
    a1.display(ad);
    return 0;
}
