#include<iostream>
using namespace std;
int main()
{
    int a[50][50],b[50][50],c[50][50],i,j,m,n;
    cout<<"Enter the number of rows and columns for the matrices: \n";
    cin>>m>>n;
    cout<<"Enter the elements of the first matrix: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
     cout<<"Enter the elements of the second matrix: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Matrix A is: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"Matrix B is: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (a[i][j]>b[i][j])
            {
                c[i][j]=a[i][j];
            }
            else
            {
                c[i][j]=b[i][j];
            }
        }
    }
    cout<<"The required matrix C is: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
