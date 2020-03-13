#include<iostream>
using namespace std;

struct node
{
    int info;
    node *next, *prev;
    node *start;

    node *start=NULL;

    void insertAsFirstNode()
    {
        node *n;
        n = new node;
        cout<<"Enter a number: ";
        cin>>n->info;
        n->prev=NULL;
        if (start==NULL)      // adding node when List is empty.
        {
            n->next=NULL;
            start=n;
        }
        else                 // adding node in first when List is not empty.
        {
            n->next=start;
            start->prev=n;
            start=n;
        }
    }
    void insertNodeAfterNode(node *prev_node,int data)
    {
        node *m;
        m = new node;
        cout<<"Enter a number: ";
        cin>>m->info;
        m->prev=prev_node;
        if (prev_node->next==NULL)  // adding node at end
        {
            m->next=NULL;
            prev_node->next=m;
        }
        else                       // adding node after node
        {
            m->next=prev_node->next;
            prev_node->next=m;
        }
    }
    void deleteFirstNode()
    {
        node *n;
        if(start==NULL)
            cout<<"List is Empty";
        else
        {
            n=start;
            start=start->next;
            start->prev=NULL;
            delete(n);
        }
    }
    void printList()
    {
        node *n=start;
        while(n->next!=NULL)
        {
            cout<<n->info<<" ";
        }
    }
    void printListInReverse()
    {
        node *n=start;
        while(n->next!=NULL)
        {
            cout<<n->info<<" ";
            n=n->next;
        }
    }
};
int main()
{
    node *k;
    k = new node;
    int choice;
    while(1)
    {
         cout<<"::::::::::::::::::::::::::::::::::::::::"<<endl;
         cout<<"Operation for Doubly Linked List:"<<endl;
         cout<<"::::::::::::::::::::::::::::::::::::::::"<<endl;
         cout<<"1. Create Node."<<endl;
         cout<<"2. Add after position."<<endl;
         cout<<"3. Add before some position."<<endl;
         cout<<"4. Delete first Node."<<endl;
         cout<<"5. Display Data."<<endl;
         cin>>choice;
         switch(choice)
         {
         case 1:
             k.insertAsFirstNode();
             break;
         case 2:
             break;
         case 3:


         }
    }


    return 0;
}

