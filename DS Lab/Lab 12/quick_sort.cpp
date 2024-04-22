#include<iostream>
using namespace std;
void swapp(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partitionn(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    int j;
    for(j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swapp(&arr[i],&arr[j]);
        }
    }
    swapp(&arr[i+1],&arr[j]);
    return (i+1);
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partitionn(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
void printarray(int arr[],int s)
{
    int i;
    for(i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,arr[50];
    cout<<"Enter the length of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Sorted array: \n";
    printarray(arr,n);
    return 0;
}
