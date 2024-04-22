#include<iostream>
using namespace std;
int main()
{
  int a[100],i,j,n,temp,small,pos;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  cout<<"\nEnter the elements for the array: \n";
  for (i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(i=0;i<n-1;i++)
  {
      small=a[i];
      pos=i;
      for(j=i+1;j<n;j++)
      {
        if (small>a[j])
        {
             small=a[j];
             pos=j;
        }
      }
      temp=a[i];
      a[i]=a[pos];
      a[pos]=temp;
  }
  cout<<"The sorted array is: \n";
  for (i=0;i<n;i++)
  {
      cout<<a[i]<<"\t";
  }
  return 0;
}
