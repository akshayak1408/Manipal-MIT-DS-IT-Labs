#include<iostream>
using namespace std;
enum Boolean {FALSE,TRUE};
 class circularqueue
 {
     int front,rear,a[10],maxsize;
 public:
    circularqueue()
    {
        maxsize=20;
        front=rear=-1;
    }
    Boolean IsFull()
    {
        if(front==0 && rear==maxsize-1)
            return TRUE;
            if(front== rear+1)
                return TRUE;
        return FALSE;
    }
    Boolean IsEmpty()
    {
        if(rear==front)
        return TRUE;
        return FALSE;
    }
    void add(int x)
    {
        if(IsFull())
        {
            cout<<"Queue is full!";
        }
        else
        {
            if(front==-1)
                front=0;
            rear=(rear+1)% maxsize;
            a[rear]=x;
        }
    }
    int del()
    {
        int element;
    if (IsEmpty())
    {
      cout<<"Queue is empty!";
      return -1;
    }
    else
    {
      element=a[front];
      if (front==rear)
      {
        front=-1;
        rear=-1;
      }
      else
      {
        front=(front+1)%maxsize;
      }
      return (element);
    }
    }
    void display()
    {
        int i;
    if(IsEmpty())
    {
         cout<<"Empty Queue";
    } else
    {
      cout<<" \nFront -> "<<front;
      cout<<" \nItems -> ";
      for (i=front;i!=rear;i=(i+1)%maxsize)
        cout<<a[i]<<" ";
      cout<<a[i];
      cout<<endl
         <<"Rear -> "<< rear;
    }
    }
 };
 int main()
 {
     circularqueue s;
	int ele;
	char ch,option;
	do{
    cout<<"\nI-Insert\nD-Delete\nP-Display\nE-exit\n";
	cin>>option;
	switch(option)
	{
	case 'I':	cout<<"Enter the element to be pushed\n";
			cin>>ele;
			s.add(ele);
			break;
	case 'D':	s.del();
			break;
	case 'P':	s.display();
	break;
	}
	}while(option!='E');
	return 0;
 }
