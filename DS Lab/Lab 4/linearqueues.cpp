#include<iostream>
using namespace std;
enum Boolean{FALSE,TRUE};
class queue
{	int front,rear, a[10], maxsize;
public: queue()
	{ maxsize=20;front=rear=-1;}

	Boolean Isfull()
	{
		if(rear==maxsize-1)
            return TRUE;
		return FALSE;
	}
	Boolean Isempty()
	{	if(rear==front)
	return TRUE;
		return FALSE;
	}
	void add(int x);
	void del();
	void display();
};
void queue::add(int x)
{       if(Isfull())
		cout<<"Queue is full \n";
	else
		a[++rear]=x;
}
void  queue::del()
{
	if(Isempty())
		cout<<"Queue is empty\n";
	else
	       cout<<"Deleted element is "<<(a[++front])<<" ";
	       cout<<"\n";
}
void queue::display()
{        if(Isempty())
		cout<<"Queue is empty\n";
	else
	for(int i=front+1;i<=rear;i++)
		cout<<a[i]<<" ";
		cout<<"\n";
}
int main()
{	queue s;
	int ele;
	char ch,option;
	do{
    cout<<"I-Insert\nD-Delete\nP-Display\nE-exit\n";
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
