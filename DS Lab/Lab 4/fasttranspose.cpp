#include<iostream>
using namespace std;
class spm
{
    int r,c,v,m,n;
public:
    void read(spm a[])
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
    void ftranspose(spm a[],spm b[],int rT[50],int sp[50])
    {
        b[0].r=a[0].c;
        b[0].c=a[0].r;
        b[0].v=a[0].v;
        for(int i=0;i<a[0].c;i++)
            rT[i]=0;
        for(int i=1;i<=a[0].v;i++)
            rT[a[i].c]++;
        sp[0]=1;
        for(int i=1;i<a[0].c;i++)
            sp[i]=sp[i-1]+rT[i-1];
        for(int i=1;i<=a[0].v;i++)
        {
            int k=sp[a[i].c]++;
            b[k].r=a[i].c;
            b[k].c=a[i].r;
            b[k].v=a[i].v;
        }
    }
    void display(spm b[])
    {
        for(int i=0;i<=b[0].v;i++)
        {
            cout<<b[i].r<<"\t"<<b[i].c<<"\t"<<b[i].v<<"\n";
        }
    }
};
int main()
{
    spm a[50],b[50],s;
    int rT[50],sp[50];
    s.read(a);
    s.ftranspose(a,b,rT,sp);
    s.display(b);
    return 0;
}
