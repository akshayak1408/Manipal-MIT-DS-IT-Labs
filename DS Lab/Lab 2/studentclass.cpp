/*Write a C++ program to define a class student with the data members to store name,
roll no and grade of the student. Also write the member functions to read, display, and
sort student information according to the roll number of the student. All the member
functions will have array of objects as arguments*/
#include<iostream>
using namespace std;

class student
{
        char name[30];
        int rollNo;
        char grade;
    public:
        void getDetails(student arr[],int n);
        void putDetails(student arr[],int n);
        void sortDetails(student arr[],int n);
};
void student::getDetails(student arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name: " ;
        cin>>arr[i].name;
        cout<<"Enter roll number: ";
        cin>>arr[i].rollNo;
        cout<<"Enter grade of the student: ";
        cin>>arr[i].grade;
    }
}
void student::putDetails(student arr[],int n){
    cout<<"Student details:\n";
    for(int i=0;i<n;i++)
    {
         cout<<"Name: "<< arr[i].name << ", Roll Number: " << arr[i].rollNo << ", Grade: " << arr[i].grade;
         cout<<"\n";
    }
}
void student::sortDetails(student arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (arr[j].rollNo>arr[j+1].rollNo)
            {
                student temp=arr[j];
                arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    student arr[100],s;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    s.getDetails(arr,n);
    s.sortDetails(arr,n);
    s.putDetails(arr,n);
    return 0;
}
