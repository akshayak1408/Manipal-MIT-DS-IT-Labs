#include<iostream>
using namespace std;
class node
{
    public:
    int info;
    node *lcl;
    node *rcl;
    node *ins_bst(node *root)
    {
    node *temp,*prev,*cur;
    temp=new node;
    cout<<"Enter the element: \n";
    cin>>temp->info;
    temp->lcl=NULL;
    temp->rcl=NULL;
    if(root==NULL)
        return temp;
    prev=NULL;
    cur=root;
    while(cur!=NULL)
    {
        prev=cur;
        if(temp->info==cur->info)
        {
            cout<<"No duplicates please!\n";
            delete temp;
            return root;
        }
        if(temp->info<cur->info)
            cur=cur->lcl;
        else
            cur=cur->rcl;
    }
    if(temp->info<prev->info)
        prev->lcl=temp;
    else
        prev->rcl=temp;
    return root;
}
};
int main()
{
    int option;
    node *result;
    node *root=NULL;
    node n;
    do
    {
        cout<<"\nEnter\n1.Insert in the binary search tree\n2.Exit\n";
        cin>>option;
        switch(option)
        {
        case 1:
            result=n.ins_bst(root);
            break;
        case 2:
            break;
        }
    }while(option!=2);
}
