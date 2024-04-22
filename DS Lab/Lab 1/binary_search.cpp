#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,num,mid,l=0,h;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  h=n-1;
  mid=(l+h)/2;
  cout<<"\nEnter the elements for the array: \n";
  for (i=0;i<n;i++)
  {
      cin>>a[i];
  }
  cout<<"Enter the number to be searched: ";
  cin>>num;
  while (mid!=0 || mid!=n-1)
  {
      if (num==a[mid])
      {
          cout<<"Number found! It is at position: "<<mid+1;
          break;
      }
      else if (num>a[mid])
      {
          mid=mid+1;
      }
      else if (num<a[mid])
      {
          mid=mid-1;
      }
  }
  return 0;
}
