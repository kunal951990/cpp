// Stack implementation through array and Structure
#include<iostream>
using namespace std;

struct ArrayStack
{
    unsigned capacity;int *ptr;int top;

    void createStack(int cap)
    {
        capacity=cap;top=-1;ptr=new int[capacity];
    }
    int isFull()
    {
        if (top==capacity-1)
            return(1);
        return (0);

    }
    int isEmpty()
    {
        if (top==-1)
            return(1);
        return (0);

    }
    void stackPush(int data)
    {
        if(isFull()==1)
            cout<<"Stack is Full."<<endl;
        top++;ptr[top]=data;
    }
    int stackPop()
    {
        if(isEmpty()==1)
            cout<<"Stack is Empty."<<endl;
        int item=ptr[top];top--;
        return item;
    }
};

int main()
{
    int choice,itm;
    ArrayStack *S = new ArrayStack;
    S->createStack(4);

    while(1)
    {
        cout<<"\n 1: Push";cout<<"\n 2: Pull";cout<<"\n Enter Your Choice:"<<endl;cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter a number: ";cin>>itm;S->stackPush(itm);
            break;
        case 2:
            itm=S->stackPop();cout<<itm<<endl;
            break;
        case 3:
            break;
        }
    }
    return 0;
}

