#include<iostream>
using namespace std;

int recursiveBinarySearch(int arr[],int start_index,int end_index,int element)
{
   if(end_index>=start_index){
      int middle=start_index + (end_index - start_index)/2;
      if (arr[middle]==element)
         return middle;
      if (arr[middle] > element)
         return recursiveBinarySearch(arr, start_index, middle-1, element);
      return recursiveBinarySearch(arr, middle+1, end_index, element);
   }
   return -1;
}
int main()
{
    int i,n,arr[100],element;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

  cout<<"Enter the element to search for: ";
  cin>>element;
   int found_index = recursiveBinarySearch(arr, 0, n-1, element);
   if(found_index == -1 ) {
      cout<<"Element not found in the array ";
   }
   else {
      cout<<"Element found at index: "<<found_index+1;
   }
   return 0;
}
