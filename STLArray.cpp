#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5> data_array={2,4,6,8};
    array <int,5> data_array1={20,40,60,80};
    cout<<"....................................."<<endl;
    cout<<data_array.at(2)<<endl;  // use of array.at(index)
    cout<<data_array[1]<<endl; // use of index operator array[index]
    cout<<"....................................."<<endl;

    int i=0;
    for(i=0;i<=5;i++)
        cout<<data_array[i]<<endl;

    cout<<"....................................."<<endl;
    cout<<data_array.front()<<endl; // use of array.front() give first item.
    cout<<data_array.back()<<endl;  // use of array.back() give the last item even if it is not filled.
    cout<<"....................................."<<endl;
    data_array.fill(9);  // use of array.fill(item) will fill all indexes with item.
    int j=0;
    for(j=0;j<=5;j++)
        cout<<data_array[j]<<endl;
    cout<<"....................................."<<endl;
    cout<<data_array.size()<<endl;  // use of array.size() will give size of array.
    cout<<"....................................."<<endl;
    data_array={1,2,3,4,5};
    cout<<"....................................."<<endl;
    cout<<data_array.begin()<<endl;  // use of array.size() will give address of array's first item.
    cout<<data_array.end()<<endl;  // use of array.size() will give address of array's last item.
    cout<<"....................................."<<endl;
    cout<<"....................................."<<endl;
    data_array1.swap(data_array); // use of array1.swap(array2), where size of array1 is equal to array2.

    int x=0;
    for(x=0;x<=5;x++)
        cout<<data_array[x]<<endl;

    int y=0;
    for(y=0;y<=5;y++)
        cout<<data_array1[y]<<endl;

    return 0;
}

/*

*/
