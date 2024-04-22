#include<iostream>
using namespace std;
int main()
{
   int n,arr[100];
   cout<<"Enter the number of elements: \n";
   cin>>n;
   cout<<"Enter elements: \n";
   for(int i = 0; i<n; i++)
    {
      cin>>arr[i];
    }
   cout<<"Array before sorting:  ";
    for(int i = 0; i<n; i++)
      {
          cout << arr[i] << " ";
      }
      cout<<"\n";
   int key, j;
   for(int i = 1; i<n; i++) {
      key = arr[i];
      j = i;
      while(j > 0 && arr[j-1]>key) {
         arr[j] = arr[j-1];
         j--;
      }
      arr[j] = key;
   }
   cout << "Array after sorting:  ";
   for(int i = 0; i<n; i++)
   {
      cout << arr[i] << " ";
   }
   return 0;
}
