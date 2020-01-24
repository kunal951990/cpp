#include<iostream>
using namespace std;

struct book{
    int bookid;
    float price;
    char bookname[20];
};

book creat_struct();
void display_struct(book);

int main(){
    book b1;
    b1 = creat_struct();
    display_struct(b1);
    return 0;
}
book creat_struct(){
    book b;
    cout<<"Enter bookid, price and bookname :"<<endl;
    cin>>b.bookid>>b.price>>b.bookname;
    return b;
}

void display_struct(book b){
    cout<<"Book Id is :"<<b.bookid<<endl;
    cout<<"Book Name is :"<<b.bookname<<endl;
    cout<<"Book Price is :"<<b.price<<endl;
}





