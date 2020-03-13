#include<iostream>
using namespace std;

void SelectionSort(int A[],int length)
{
    int n;
    for(int j=0;j<length-1;j++)
    {
        int Min = j;
        for(int i=j+1;i<length;i++)
        {
            if(A[Min]>A[i])
            {
                Min=i;
            }
        }
        if(Min!=j)
        {
            n=A[j];
            A[j]=A[Min];
            A[Min]=n;
        }

    }
}

int main()
{
    int B[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    SelectionSort(B,20);
    for(int k=0;k<20;k++)
    {
        cout<<B[k]<<" ";
    }
}


