#include<iostream>
using namespace std;

class Singleton
{
private:
    static Singleton *instance;    //  1. pointer of hold Object.
    int data;
    Singleton(){}
public:
    static Singleton *Instance()    // 2. To check that only one object is created.
    {
        if (instance==NULL)
        {
            instance=new Singleton;
        }
        return instance;            // 3. Return always the pointer of the one object.
    }
    void setData(int value)
    {
        data=value;                 // 4. To set the data of data of Singleton object.
    }
    int getData()
    {
        return data;                // 5. To get the data of data of Singleton object.
    }
};
Singleton *Singleton::instance=NULL;

int main()
{
    Singleton::Instance()->setData(9);     // Singleton::instance->fun() will give error.
    cout<<Singleton::Instance()->getData()<<endl;
    return 0;
}
