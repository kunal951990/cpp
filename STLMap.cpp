#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int,string> customer;

    customer[100]="Hundred";
    customer[55]="Fiftyfive";
    customer[65]="Sixtyfive";
    customer[75]="Seventyfive";

    cout<<customer[55]<<endl;  //we can access values by subscript operator like map["key"].
    cout<<customer.size()<<endl; // map.size() will give size of map.
    cout<<customer.at(65)<<endl;  // map.at(key) will also work like subscript operator.
    cout<<customer.empty()<<endl; // map.empty() will give '0' or '1' respectively for non-empty and empty map.
    customer.insert(pair<int,string>(85,"Eightyfive"));  // map.insert(pair) eg of pair: pair<data_type,data_type>(item1,item2)
    cout<<customer[85]<<endl;

    map <int,string> c1{{100,"Hundred"},{55,"Fiftyfive"},{65,"Sixtyfive"},{75,"Seventyfive"}};
    map <int,string>::iterator p=c1.begin();

    while(p!=c1.end())
        {cout<<p->first<<" : "<<p->second<<endl;p++;}

    c1.clear(); // map.clear() will remove everything from map.
    cout<<c1.empty()<<endl;
    return 0;
}
