#include<iostream>
using namespace std;

    string reverse_str(string x)
    {
        string s_new = "";
        for(int i=x.size()-1;i>=0;i--)
            s_new+=x[i];
        return s_new;
    }

int main()
{
    string s = "Kalki";
    cout<<reverse_str(s);
    return 0;
}
