#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next, *prev;
};
class DoublyCircular{
    private:
    Node *head;
    int counter;
    public:
    DoublyCircular(){
        head=NULL;
        counter=0;
    }
    void insert(int elem, int loc){
        Node *temp= new Node;
        Node *trav= new Node;
        temp->data=elem;
        if(loc==-1)
            loc==counter;
        if(head==NULL){
            head=temp;
            temp->next=head;
            temp->prev=head;
            counter++;
            return;
        }
        bool found=false;
        trav=head;
        int count=0;
        do{
            if(count==loc){
                break;
                found=true;
            }
            count++;
            trav=trav->next;
        }while(trav!=head);
        if(count<loc){
            cout<<"Index out of bound!"<<endl;
            return;
        }
        trav->prev->next=temp;
        temp->prev=trav->prev;
        temp->next=trav;
        trav->prev=temp;
        counter++;
        if(loc==0){
            head=temp;
        }
    }
    void delete_elem(int elem){
        Node *trav= head;
        bool found=false;
        if(trav==NULL){
            cout<<"List empty!";
            return;
        }
        else if(trav->next==trav->prev){
            head=NULL;
            delete trav;
            counter--;
            return;
        }
        do{
            if(trav->data==elem){
                if(trav->prev)
                    trav->prev->next=trav->next;
                if(trav->next)
                    trav->next->prev=trav->prev;
                if(trav==head){
                    head=trav->next;
                }
                delete trav;
                counter--;
                found=true;
                break;
            }
            trav=trav->next;
        }while(trav!=head);
        if(!found){
            cout<<"Element Not found!"<<endl;
        }
    }
    void display(){
        Node *trav= new Node;
        trav=head;
        do{
            cout<<trav->data<<' ';
            trav=trav->next;
        }while(trav!=head);
        cout<<endl;
    }
};
int main(){
    DoublyCircular DC;
    int choice, loc, elem;
    do{
         cout<<"\nEnter\n1.Insert an element at a position\n2.Delete an element\n3.Display\n4.Exit\n";
         cin>>choice;
         switch(choice){
            case 1:
                cout<<"Enter the location (Enter-1 to append):";
                cin>>loc;
                cout<<"Enter the element to insert :";
                cin>>elem;
                DC.insert(elem, loc);
                break;
            case 2:
                cout<<"Enter the element to delete:";
                cin>>elem;
                DC.delete_elem(elem);
                break;
            case 3:
                DC.display();
                break;
            case 4:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }while(choice!=4);
    return 0;
}
