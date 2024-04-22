#include<iostream>
#include<stdio.h>
using namespace std;



class time
{
    int hours,minutes,seconds;
    int sumhrs=0,summin=0,sumsec=0,subhrs=0,submin=0,subsec=0;
public:
    void getTime(time arr[],int n);
    void addTime(time arr[],int n);
    void subtractTime(time arr[],int n);
};
void time::getTime(time arr[],int n)
{
    for(int i=0;i<n;i++)
    {
    cout<<"Enter number of hours: ";
    cin>>arr[i].hours;
    cout<<"Enter number of minutes: ";
    cin>>arr[i].minutes;
    cout<<"Enter number of seconds: ";
    cin>>arr[i].seconds;
    }



}
void time::addTime(time arr[],int n)
{



   sumhrs=arr[0].hours;
    summin=arr[0].minutes;
    sumsec=arr[0].seconds;



   for(int i=1;i<n;i++)
    {
        sumhrs=arr[i].hours+arr[i-1].hours;
        summin=arr[i].minutes+arr[i-1].minutes;
        sumsec=arr[i].seconds+arr[i-1].seconds;
    }
    cout<<"\nThe required result after addition is: "<<sumhrs<<"hours,"<<summin<<"minutes,"<<sumsec<<"seconds";



}
void time::subtractTime(time arr[],int n)
{



   subhrs=arr[0].hours;
    submin=arr[0].minutes;
    subsec=arr[0].seconds;



   for(int i=0;i<n;i++)
    {
        subhrs=arr[i].hours-arr[i-1].hours;
        submin=arr[i].minutes-arr[i-1].minutes;
        subsec=arr[i].seconds-arr[i-1].seconds;
    }
    cout<<"\nThe required result after subtraction is: "<<-subhrs<<"hours,"<<-submin<<"minutes,"<<-subsec<<"seconds";



}
int main()
{
    time arr[100],t;
    int n=2;
    char op;



   cout<<"Enter 'a' to add and 's' to subtract: ";
    cin>>op;
    switch (op)
    {
    case'a':
        {
            t.getTime(arr,n);
            t.addTime(arr,n);
            break;
        }
    case's':
        {
            t.getTime(arr,n);
            t.subtractTime(arr,n);
            break;
        }
    default:
        {
            cout<<"Please enter either 'a' or 's' to continue.";
        }
    }
    return 0;
}
