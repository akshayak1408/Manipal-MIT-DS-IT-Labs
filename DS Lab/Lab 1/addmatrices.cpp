#include<iostream>
using namespace std;
int main()
{
    int a[100][100],b[100][100],add[100][100],i,j,m,n;
    cout<<"Enter the number of rows and columns of the matrices: ";
    cin>>m>>n;
    cout<<"\nEnter the elements of the matrix A: ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nEnter the elements of the matrix B: ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"\nMatrix A is: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nMatrix B is: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nThe addition of the matrices is: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"\nAddition of matrices A and B is: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<add[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
