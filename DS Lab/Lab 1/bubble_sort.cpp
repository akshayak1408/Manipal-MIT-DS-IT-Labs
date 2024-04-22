#include<iostream>
using namespace std;
int main()
{
  int a[100],i,j,n,num,temp;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  cout<<"\nEnter the elements for the array: \n";
  for (i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for (i=0;i<n;i++)
  {
      for (j=0;j<n-i-1;j++)
      {
          if (a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
  }
  cout<<"The sorted array is: \n";
  for (i=0;i<n;i++)
  {
      cout<<a[i]<<"\t";
  }
  return 0;
}
