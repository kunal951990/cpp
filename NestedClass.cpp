#include<iostream>
#include<string.h>
using namespace std;

class Student
{
private:
    int roll_no;
    char name[20];
    class Address
    {
    private:
        int house_no;
        char street[20];
        char city[15];
    public:
        void setAdd(int x,char *y, char *z)
        {
            house_no=x;
            strcpy(street,y);
            strcpy(city,z);
        }
        void showAdd()
        {
            cout<<"House no:"<<house_no<<endl;
            cout<<"Street :"<<street<<endl;
            cout<<"City :"<<city<<endl;
        }
    };
public:
    Address *a = new Address;
    Student(int k,char *l,int x,char *y, char *z)
    {
        roll_no=k;
        strcpy(name,l);
        a->setAdd(x,y,z);
    }
    void showDetails()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<roll_no<<endl;
        a->showAdd();
    }
};

int main()
{
    Student s1(230,"Kishor Kunal",29,"Ram Rajya More","Siwan");
    s1.showDetails();
    return 0;
}
