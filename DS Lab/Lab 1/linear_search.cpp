#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,num;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  cout<<"\nEnter the elements for the array: \n";
  for (i=0;i<n;i++)
  {
      cin>>a[i];
  }
  cout<<"Enter the number to be searched: ";
  cin>>num;
  for (i=0;i<n;i++)
  {
      if (num==a[i])
      {
          cout<<"Number found! It is at position: "<<i+1;
      }
  }
return 0;
}


