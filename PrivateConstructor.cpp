#include<iostream>
#include<string.h>
using namespace std;

class Admin
{
private:
    char name[10];
    char password[10];
    static int InstanceCount;
    Admin()
    {
        strcpy(name,"Kunal");
        strcpy(password,"K@123");
    }
public:

    void showData()
    {
        cout<<"Admin: "<<name<<endl;
        cout<<"Password: "<<password<<endl;
    }
    static Admin* makeInstance()
    {
        if(InstanceCount==0)
        {
            Admin *ptr=new Admin;
            InstanceCount++;
            return ptr;
        }
        else
        {
            return NULL;
        }
    }

};
int Admin::InstanceCount=0;
int main()
{
    Admin *ad;
    ad=Admin::makeInstance();
    if (ad!=NULL)
    {
        ad->showData();
    }
    else
    {
        cout<<"Only one object can be created."<<endl;
    }

    Admin *d;
    d=Admin::makeInstance();
    if (d!=NULL)
    {
        d->showData();
    }
    else
    {
        cout<<"Only one object can be created."<<endl;
    }
    return 0;
}
