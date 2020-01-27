#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v1{10,20,30,40,50};
    cout<<"Capacity :"<<v1.capacity()<<endl;

    vector <int> :: iterator it = v1.begin();  // defining iterator and assigning starting position of vector.

    v1.insert(it,90);   // vector.insert(iterator, item).

    cout<<"Inserted Item :"<<v1[0]<<endl;
    cout<<"Capacity :"<<v1.capacity()<<endl;

    cout<<"First Item :"<<v1.front()<<endl;  // vector.front() will give first item of vector.
    cout<<"Second Item :"<<v1.back()<<endl;  // vector.back() will give last item of vector.
    return 0;
}
