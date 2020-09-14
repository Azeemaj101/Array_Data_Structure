#include <iostream>
using namespace std;

void Ins_Sort(int A[], int N)
{
    int temp, j;
    for (int i = 1; i < N; i++)
    {
        temp = A[i];
        for (j = i - 1; j >= 0 && temp < A[j]; j--)
        {
            A[j + 1] = A[j];
        }
        A[j + 1] = temp;
    }
}

int main()
{
    int arr[]={2,4,6,7,1,3,5,8};
    int s= sizeof(arr)/sizeof(arr[0]);
    Ins_Sort(arr, s);
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}