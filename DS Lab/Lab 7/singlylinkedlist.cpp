#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class LinkedList{
    private:
    node *head;
    public:
    LinkedList()
    {
        head=NULL;
    }
    void append(int elem){
        node *temp= new node;
        temp->data=elem;
        temp->next=head;
        head=temp;
    }
    void insert_after(int elem, int value){
        node *temp=new node;
        temp->data=elem;
        node *t=head;
        bool found=false;
        while(t!=NULL){
            if(t->data==value){
                temp->next=t->next;
                t->next=temp;
                found=true;
                break;
            }
            t=t->next;
        }
        if(!found){
            cout<<"Element not found!"<<endl;
        }
    }
    void insert_before(int elem, int value){
        node *temp= new node;
        temp->data=elem;
        node *t=head;
        bool found=false;
        if(t->data==value){
            head=temp;
            temp->next=t;
            return;
        }
        while(t->next!=NULL){
            if(t->next->data==value){
                temp->next=t->next;
                t->next=temp;
                found=true;
                break;
            }
            t=t->next;
        }
        if(!found){
            cout<<"Element not found"<<endl;
        }
    }
    void remove(int elem){
        node *t=head;
        bool found=false;
        if(t->data==elem){
            head=t->next;
            return;
        }
        while(t->next!=NULL){
            if(t->next->data==elem){
                t->next=t->next->next;
                found=true;
                break;
            }
            t=t->next;
        }
        if(t->next==NULL){
            delete t->next;
            t->next=NULL;
            found=true;
        }
        if(!found){
            cout<<"Element not found in the list"<<endl;
        }
    }
    void traverse(){
        node *t= new node;
        t=head;
        while(t!=NULL){
            cout<<t->data<<' ';
            t=t->next;
        }
        cout<<endl;
    }
    void reverse(){
        node *prev=NULL, *next=NULL, *curr=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    void sort(bool rev=false){
        node *t=head, *t2, *min;
        int temp;
        while(t){
            min=t;
            t2=t->next;
            while(t2){
                if(t2->data<min->data)
                    min=t2;
                t2=t2->next;
            }
            if(min!=t)
            {
                temp=min->data;
            min->data=t->data;
            t->data=temp;
            }
            t=t->next;
        }
    if(rev)
        reverse();
    }
    void delete_alternate(){
        node *temp=head;
        node *temp2=temp->next;
        while(temp && temp2){
            temp->next=temp2->next;
            delete temp2;
            temp=temp->next;
            if(temp)
                temp2=temp->next;
        }
    }
    void insert_sort(int elem){
        node *temp=new node;
        node *trav=head;
        temp->data=elem;
        if(head==NULL){
            append(elem);
            return;
        }
        if(trav->data>elem){
            temp->next=head;
            head=temp;
            return;
        }
        while(trav->next!=NULL){
            if(trav->next->data>elem){
                temp->next=trav->next;
                trav->next=temp;
                break;
            }
            trav=trav->next;
        }
        if(trav->next==NULL){
            trav->next=temp;
            temp->next=NULL;
        }
    }
    void print_list()
    {

    node* temp = head;
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    }
};
int main(){
    LinkedList L;
    int choice;
    int loc,elem;
    L.append(1);
    L.append(2);
    L.append(3);
    L.append(4);
    do{
        cout<<"\nEnter\n1.Insert before an element\n2.Insert after an element\n3.Delete an element\n4.Traverse the list\n5.Reverse the list\n6.Sort the list\n7.Delete alternate elements\n8.Insert in sorted list\n9.Print\n10.Exit\n";
        cin>>choice;
         switch(choice){
            case 1:
                cout<<"Enter the element to insert before:";
                cin>>loc;
                cout<<"Enter the element to insert:";
                cin>>elem;
                L.insert_before(elem, loc);
                break;
            case 2:
                cout<<"Enter the element to insert after:";
                cin>>loc;
                cout<<"Enter the element to insert:";
                cin>>elem;
                L.insert_after(elem, loc);
                break;
            case 3:
                cout<<"Enter the element to delete:";
                cin>>elem;
                L.remove(elem);
                break;
            case 4:
                L.traverse();
                break;
            case 5:
                L.reverse();
                break;
            case 6:
                cout<<"0 for Ascending\n1 for Descending";
                cin>>elem;
                L.sort(elem);
                break;
            case 7:
                L.delete_alternate();
                break;
            case 8:
                cout<<"Enter the element to insert:";
                cin>>elem;
            L.insert_sort(elem);
                break;
            case 9:
                L.print_list();
                break;
            case 10:
                break;
            default:
                cout<<"Invalid choice!";
                break;
        }
    }while(choice!=10);
    return 0;
}
