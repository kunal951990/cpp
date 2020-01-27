//sort() //size() // push_back() // push_front() // pop_back() // pop_front() //reverse() // remove() // clear()
#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> l1{50,90,10,20,30,10};
    list <string> l2{"India","Tibet","Mayanmar","Sri Lanka","Java"};

    // cout<<l1[0]<<endl; // Subscript operator wont work for List.

    // We can print or use values in List with help of Iterator.
    list <int> :: iterator p=l1.begin();
    while(p!=l1.end())
        {cout<<*p<<" ";p++;}

    cout<<"\nAfter Sorting :"<<endl;
    l1.sort();                         // list.sort() will sort the list.
    p=l1.begin();
    while(p!=l1.end())
        {cout<<*p<<" ";p++;}

    cout<<"\n........................................."<<endl;
    cout<<"After Removing some item 10:"<<endl;
    l1.remove(10);   // list.remove(item) will remove all copies of the item passed as parameter.

    p=l1.begin();
    while(p!=l1.end())
        {cout<<*p<<" ";p++;}

    cout<<"Size of List: "<<l1.size()<<endl;  // list.size() will give size of list.

    cout<<"\n........................................."<<endl;
    cout<<"After Clearing List"<<endl;
    l1.clear();   // list.clear() will remove all elements of the list..

    p=l1.begin();
    while(p!=l1.end())
        {cout<<*p<<" ";p++;}

    cout<<"Size of List: "<<l1.size()<<endl;  // list.size() will give size of list.
    cout<<":::::::::::::::::::::::::::::::::::::::::"<<endl;
    l2.push_back("Bhopal");
    l2.push_front("Bhopal");
    list <string> :: iterator q=l2.begin();
    while(q!=l2.end())
        {cout<<*q<<" ";q++;}

    cout<<"........................................."<<endl;
    //string temp1 = l2.pop_back();
    //string temp2 = l2.pop_front();  //pop_back or pop_front wont work in this compiler.
    cout<<"........................................."<<endl;
    cout<<"\nAfter Sorting :"<<endl;
    l2.sort();  // list.sort() will sort the list.
    q=l2.begin();
    while(q!=l2.end())
        {cout<<*q<<" ";q++;}

    cout<<"........................................."<<endl;
    cout<<"\nAfter Reversing :"<<endl;
    l2.reverse();  // list.reverse() will reverse the list.
    q=l2.begin();
    while(q!=l2.end())
        {cout<<*q<<" ";q++;}
    cout<<"\nSize of List: "<<l2.size()<<endl;  // list.size() will give size of list.
    return 0;
}
