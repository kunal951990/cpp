#include<iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
public:
    void setData(int a,string jj)
    {
        roll_no=a;
        name=jj;
    }
    void showData()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Roll_No :"<<roll_no<<endl;
    }
};

int main()
{
    Student s1;
    s1.setData(35,"Ajay");
    s1.showData();
    cout<<"................................."<<endl;
    pair <string,int> p1;
    pair <string, Student> p2;

    p1=make_pair("ABC",25);
    p2=make_pair("Chhalera",s1);
    cout<<"................................."<<endl;
    cout<<p1.first<<endl;   // pair.first will give first item.
    cout<<p1.second<<endl;  // pair.second will give second item.
    cout<<"................................."<<endl; // if object is there then we have to handle in this way.
    cout<<p2.first<<endl;
    Student s2 = p2.second;
    s2.showData();
    return 0;
}
