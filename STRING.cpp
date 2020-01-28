// assign / append / insert / replace / erase / find / rfind / compare / c_str / size
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="Hello ";
    string s2;
    s2.assign("Kunal ");  // string1.assign(string2)
    s1.append(s2);          // string.append(string)
    cout<<s1<<endl<<s2<<endl;
    s2+=s1;
    cout<<s1<<endl<<s2<<endl;
    cout<<s1<<endl;
    s1.insert(0,"Hi ");  // string.insert(start_index,string)
    cout<<s1<<endl;
    s1.replace(0,3,"Bil"); // string.replace(start_pos, no of character replacable, string)
    cout<<s1<<endl;
    cout<<s2<<endl;
    s2.erase(0,6);  //  string.erase(start_pos,  no of characters)
    cout<<s2<<endl;
    return 0;
}
