#include<iostream>
using namespace std;

class CircList
{
public:
    struct node
    {
        int info;
        node *next;
    };
    node *last;
    void createNode(int data);
    void add_beg(node **s, int data);
    node *findNode(node **s, int data);
    void add_after(node **s, node *ptr, int data);
    void viewList(node **s);

};

int main()
{
    CircList c;
    CircList::node *ptr;
    c.last = NULL;
    c.add_beg(&c.last,20);
    c.createNode(10);

    c.add_beg(&c.last,20);
    cout<<(c.last)->info<<endl;
    cout<<c.last;
    ptr = c.findNode(&c.last,20);
    c.add_after(&c.last,ptr,30);
    c.viewList(&c.last);
}
 void CircList::viewList(node **s)
 {
     node *p;
     p=(*s)->next;
     while(p!=last)
     {
         cout<<p->info<<" ";
         p=p->next;
     }
 }

void CircList::add_after(node **s, node *ptr,int data)
{
    node *p = new node;
    p->info = data;
    p->next = ptr->next;
    ptr->next = p;
}

CircList::node* CircList::findNode(node **s, int data)
{
    if(*s==NULL)
    {
        cout<<"Empty List."<<endl;
        return NULL;
    }
    else
    {
        node *p = new node;
        p=last->next;
        while(p!=last)
        {
            if(p->info==data)
            {
                return p;
            }
            p=p->next;
        }
    }
}

void CircList::add_beg(node **s, int data)
{
    if(*s==NULL)
    {
        cout<<"List is empty. So this will be first node."<<endl;
        node *p = new node;
        p->info = data;
        p->next = NULL;
        last=p;
    }
    else
    {
        cout<<"Adding a Node in Bigining."<<endl;
        node *p = new node;
        p->info = data;
        p->next = last->next;
        last->next = p;
    }
}
void CircList::createNode(int data)
{
    node *p = new node;
    p->info = data;
    p->next = NULL;
    last=p;
}
