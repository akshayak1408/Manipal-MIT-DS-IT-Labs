#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class student
{
    char name[30];
    int roll;
    char grade;



public:
    void putDetails();
    void getdata(student s[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << "Enter roll number,name and grade ";
            cin >> s[i].roll;
            fflush(stdin);
            gets(s[i].name);
            fflush(stdin);
            cin >> s[i].grade;
        }
    }
    void sortData(student s[], int n)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int minidx = j;
            for (int k = j + 1; k < n; k++)
            {
                if (s[minidx].roll > s[k].roll)
                {
                    minidx = k;
                }
            }
            if (minidx != j)
            {
                int tempRoll = s[j].roll;
                char tempGrade = s[j].grade;
                char tempName[100];
                strcpy(tempName, s[j].name);
                s[j].roll = s[minidx].roll;
                s[j].grade = s[minidx].grade;
                strcpy(s[j].name, s[minidx].name);
                s[minidx].roll = tempRoll;
                s[minidx].grade = tempGrade;
                strcpy(s[minidx].name, tempName);
            }
        }
    }
    void putDetails(student s[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            cout << "Roll Number: " << s[i].roll;
            cout << " Name: " << s[i].name;
            cout << " Grade: " << s[i].grade << endl;
        }
    }
};
int main()
{
    int n;
    student s[100], s1;
    cout<<"Enter the number of details to be put: ";
    cin >> n;
    s1.getdata(s, n);
    s1.sortData(s, n);
    s1.putDetails(s, n);
    return 0;
}
