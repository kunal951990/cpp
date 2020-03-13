#include<iostream>
using namespace std;

    void palindrome_chk(string x)
    {
        string s_new = "";
        for(int i=x.size()-1;i>=0;i--)
            s_new+=x[i];
        if (s_new==x)
            cout<<"The given string is palindrome";
        else
            cout<<"Not a Palindrome";
    }

int main()
{
    string s = "KrK";
    palindrome_chk(s);
    return 0;
}

