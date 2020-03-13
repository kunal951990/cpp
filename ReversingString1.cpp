#include<iostream>>
using namespace std;

string rev_str(string x)
{
    int l = x.size();
    char temp;
    for(int i=0;i<l/2;i++){
        temp = x[i];
        x[i]=x[l-1-i];
        x[l-1-i] = temp;
    }
    return x;
}

int main()
{
    string s = "foo bar";
    cout<<rev_str(s);
    return 0;
}
