#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next, *prev;
};
class Doubly{
    private:
    Node *head, *tail;
    public:
    Doubly(){
        head=NULL;
        tail=NULL;
    }
    void append(int elem){
        Node *temp= new Node;
        temp->data=elem;
        temp->next=NULL;
        if(head==NULL){
            temp->prev=NULL;
            head=temp;
        }
        else{
            temp->prev=tail;
            tail->next=temp;
        }
        tail=temp;
    }
    void delete_end(){
        Node *temp= tail;
        if(temp->prev==NULL){
            head=tail=NULL;
            delete temp;
            return;
        }
        temp->prev->next=NULL;
        tail=temp->prev;
        delete temp;
        return;
    }

    void insert_pos(int elem, int loc){
        Node *temp= new Node;
        Node *trav= new Node;
        temp->data=elem;
        trav=head;
        int count=0;
        while(trav!=NULL){
            if(count==loc){
                break;
            }
            count++;
            trav=trav->next;
        }
        if(trav==NULL){
            append(elem);
            return;
        }
        trav->prev->next=temp;
        temp->prev=trav->prev;
        temp->next=trav;
        trav->prev=temp;
    }

    void delete_pos(int loc){
        Node *trav;
        trav=head;
        if(loc==0){
            head=trav->next;
            delete trav;
            return;
        }
        int count=0;
        while(trav!=NULL){
            if(count==loc){
                break;
            }
            count++;
            trav=trav->next;
        }
        if(trav==NULL){
            delete_end();
        }
        trav->prev->next=trav->next;
        trav->next->prev=trav->prev;
    }
    void insert_after(int elem, int val){
        Node *temp= new Node;
        Node *trav= new Node;
        temp->data=elem;
        trav=head;
        bool found=false;
        while(trav!=NULL){
            if(val==trav->data){
                found=true;
                if(trav->next!=NULL)
                    trav->next->prev=temp;
                else
                    tail=temp;
                temp->next=trav->next;
                trav->next=temp;
                temp->prev=trav;
                break;
            }
            trav=trav->next;
        }
        if(!found){
            cout<<"Element not found"<<endl;
        }
    }
    void insert_before(int elem, int val){
        Node *temp= new Node;
        Node *trav= new Node;
        temp->data=elem;
        trav=tail;
        bool found=false;
        while(trav!=NULL){
            if(val==trav->data){
                found=true;
                if(trav->prev!=NULL)
                    trav->prev->next=temp;
                else
                    head=temp;
                temp->prev=trav->prev;
                trav->prev=temp;
                temp->next=trav;
                break;
            }
            trav=trav->prev;
        }
        if(!found){
            cout<<"Element not found"<<endl;
        }
    }
    void display(){
        Node *trav= new Node;
        trav= head;
        while(trav!=NULL){
            cout<<trav->data<<' ';
            trav=trav->next;
        }
        cout<<endl;
    }

    void reverse(){
        Node *trav=head;
        Node *temp;
        Node *t;
        while(trav!=NULL){
            temp=trav->next;
            trav->next=trav->prev;
            trav->prev=temp;
            trav=trav->prev;
        }
        t=head;
        head=tail;
        tail=t;
    }
};

int main(){
    Doubly D;
    int choice;
    int loc,elem;
    do{
        cout<<"\nEnter\n1.Insert at end\n2.Delete from end\n3.Insert at position\n4.Delete from position\n5.Insert after another element\n6.Insert before another element\n7.Traverse the list\n8.Reverse the list\n9.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the element to insert:";
                cin>>elem;
                D.append(elem);
                break;
            case 2:
                D.delete_end();
                break;
            case 3:
                cout<<"Enter the location:";
                cin>>loc;
                cout<<"Enter the element to insert:";
                cin>>elem;
                D.insert_pos(elem, loc);
                break;
            case 4:
                cout<<"Enter the location:";
                cin>>loc;
                D.delete_pos(loc);
                break;
            case 5:
                cout<<"Enter the element to insert after:";
                cin>>loc;
                cout<<"Enter the element to insert:";
                cin>>elem;
                D.insert_after(elem, loc);
                break;
            case 6:
                cout<<"Enter the element to insert before:";
                cin>>loc;
                cout<<"Enter the element to insert:";
                cin>>elem;
                D.insert_before(elem, loc);
                break;
            case 7:
                D.display();
                break;
            case 8:
                D.reverse();
                break;
            case 9:
                break;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }while(choice!=9);

}

