#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    ifstream fin;
    fout.open("text1.txt",ios::app);
    cout<<fout.tellp()<<endl;
    fout<<"Hello World";
    cout<<fout.tellp()<<endl;
    fout<<"Hello World";
    cout<<fout.tellp()<<endl;
    fout<<"Hello World";
    cout<<fout.tellp()<<endl;
    fout.close();
//    char ch;
//    fin.open("text1.txt");
    //char ch = fin.get();

//    cout<<fin.tellg()<<endl;
//    fin>>ch;
//    cout<<ch<<endl;
//    cout<<fin.tellg()<<endl;
//    fin>>ch;
//    cout<<ch<<endl;
//    cout<<fin.tellg()<<endl;
//    fin>>ch;
//    cout<<ch<<endl;
//    cout<<fin.tellg()<<endl;
//    fin.close();
    return 0;
}
