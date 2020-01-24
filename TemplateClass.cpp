#include<iostream>
using namespace std;

template <class X>class ArrayList{
private:
    struct ControlBlock{
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;
public:
    ArrayList(int capacity){
        s = new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr= new X[s->capacity];
    }
    void addElement(int index, X data){
       if (0<=index<=s->capacity-1)
        s->arr_ptr[index]=data;
       else
        cout<<"Array Index is not valid."<<endl;
    }
    void viewElement(int index, X &data){
        if (0<=index<=s->capacity-1)
         data = s->arr_ptr[index];
        else
         cout<<"Array Index is not valid."<<endl;
    }
    void viewList(){
        int i;
        for (i=0;i<s->capacity;i++)
            cout<<" "<<s->arr_ptr[i];
    }
};

int main(){
    ArrayList <float>list1(4);  // We have to specify while creating Object that what kind of data type it will be.
    list1.addElement(0,3.2);
    list1.addElement(1,3.5);
    list1.addElement(2,4.1);
    list1.addElement(3,9.9);
   /* list1.viewElement(0,data);
    cout<<"Value in ArrayList is :"<<data<<endl;*/
    list1.viewList();
    return 0;
}
