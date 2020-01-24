#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("text.txt",ios::app);
    /*fout<<"Hello World";*/

    char ch;
    ifstream fin;
    fin.open("friendFunc1.cpp",ios::in);
    while(!fin.eof()){
            ch=fin.get();
            fout<<ch;
    }
    return 0;
}
