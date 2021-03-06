#include<iostream>
using namespace std;

class doubly
{
public:
    struct node
    {
        int info;
        node *next, *prev;
    };
    node *start;
    void insertStart(node **s,int data);
    void insertLast(node **s, int data);
    void insertAfter(node **s, node *ptr, int data);
    node* findNode(node **s, int data);
    void deleteFirst(node **s);
    void deleteLast(node **s);
    void deleteIntermediate(node **s,node *ptr);
    void viewList(node **s);
    void viewFirst(node **s);
    void viewLast(node **s);
};

int main()
{
    doubly d;
    d.start=NULL;
    doubly::node *ptr;
    d.viewList(&d.start);
    d.insertStart(&d.start,10);
    d.insertLast(&d.start,20);
    cout<<endl;
    ptr=d.findNode(&d.start,20);
    d.insertAfter(&d.start,ptr,30);
    cout<<endl;
    ptr=d.findNode(&d.start,30);
    d.insertAfter(&d.start,ptr,40);
    cout<<endl;
    d.insertLast(&d.start,50);
    d.viewList(&d.start);
    cout<<endl;
    d.deleteFirst(&d.start);
    d.viewList(&d.start);
    cout<<endl;
    d.deleteLast(&d.start);
    d.viewList(&d.start);
    cout<<endl;
    ptr=d.findNode(&d.start,20);
    d.deleteIntermediate(&d.start,ptr);
    d.viewList(&d.start);
    cout<<endl;
    d.viewFirst(&d.start);
    cout<<endl;
    d.deleteLast(&d.start);
    return 0;
}

void doubly ::viewLast(node **s)
{
    if (*s==NULL)  // To check list is not empty.
    {
        cout<<"List is Empty.";
    }
    else
    {
        node *t = new node;
        t=*s;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        cout<<t->info<<endl;
    }

}

void doubly ::viewFirst(node **s)
{
    if (*s==NULL)
    {
        cout<<"List is Empty.";
    }
    else
    {
        cout<<(*s)->info<<endl;
    }

}

void doubly ::viewList(node **s)
{
    if (*s==NULL)
    {
        cout<<"List is Empty."<<endl;
    }
    else
    {
        node *p = new node;
        p=*s;
        while(p!=NULL)
        {
            cout<<p->info<<" ";
            p=p->next;
        }
    }
}
void doubly ::deleteIntermediate(node **s,node *ptr)
{
    if (*s==NULL)                                     // List is empty.
    {
        cout<<"Nothing is there to delete."<<endl;
    }
    else if (ptr->prev==NULL)                         // List has only node.
    {
        start=ptr->next;
        ptr->next->prev=NULL;
        delete(ptr);
    }
    else if (ptr->next==NULL)                          // To check whether Pointer is holding last node.
    {
        ptr->prev->next=NULL;
        delete(ptr);
    }
    else                                                // General case.
    {
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        delete(ptr);
    }
}
void doubly ::deleteLast(node **s)
{
    node *p = new node;
    p=*s;
    if (*s==NULL)                                     // No Node is added.
    {
        cout<<"Nothing is there not Delete."<<endl;
    }
    else if ((*s)->next==NULL)                       // List has only one node.
    {
        start=NULL;
        delete(p);
    }
    else                                              // List has more than one node.
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->prev->next=NULL;
        delete(p);
    }
}
void doubly::deleteFirst(node **s)
{
    if (*s==NULL)
    {
        cout<<"Nothing to Delete."<<endl;
    }
    else
    {
        node *p = new node;
        p=*s;
        start=(*s)->next;
        start->prev=NULL;
        delete(p);
    }

}
doubly::node* doubly:: findNode(node **s, int data)
{
    if (*s==NULL)
    {
        return NULL;
    }
    else
    {
        node *t = new node;
        t=*s;
        while(t!=NULL)
        {
            if (t->info==data)
                return t;
            t=t->next;
        }
        return NULL;
    }
}
void doubly::insertAfter(node **s,node *ptr,int data)
{
    if (ptr==NULL)
        cout<<"Invalid Insertion."<<endl;
    else
    {
        node *p = new node;
        p->info=data;
        p->next=ptr->next;
        p->prev=ptr;
        if (ptr->next!=NULL)
        {
            ptr->next->prev=p;
        }
        ptr->next=p;
    }
}
void doubly::insertLast(node **s,int data)
{
    node *p = new node;
    node *t = new node;
    p->info=data;
    p->next=NULL;
    if (*s==NULL)
    {
        p->prev=NULL;
        start=p;
    }
    else
    {
        t=*s;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=p;
        p->prev=t;
    }
}
void doubly::insertStart(node **s,int data)
{
    node *p = new node;
    p->info=data;
    p->prev=NULL;
    p->next=*s;
    start=p;
}

