#include<iostream>
using namespace std;

int main()
{
    int i=2;
    try{
        if (i==1)
            throw 1;
        if (i==2)
            throw 2;
        if (i==3)
            throw 3;
    }
//    catch(int e)
//    {
//        if (e==1)
//            cout<<"Exception no :"<<e<<endl;
//        if (e==2)
//            cout<<"Exception no :"<<e<<endl;
//        if (e==3)
//            cout<<"Exception no :"<<e<<endl;
//    }
    catch(...)
    {
        cout<<"Exception no :"<<endl;
    }

    return 0;
}
