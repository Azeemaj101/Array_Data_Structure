#include <iostream>
using namespace std;

int Selection_Sort(int A[], int k, int S)
{
    int min = A[k], Loc = k;
    for (int i = k + 1; i <= S - 1; i++)
    {
        if (min < A[i])
        {
            min = A[i];
            Loc = i;
        }
    }
    return Loc;
}

int main()
{
    int arr[] = {8, 7, 6, 4, 9, 5, 2, 3, 10};
    int min, temp;
    int S = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= S - 2; i++)
    {
        min = Selection_Sort(arr, i, S);
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    min = Selection_Sort(arr, 0, S);
    cout << "Minimum Value is = " << arr[min] << endl;
    for (int i = 0; i <= S - 1; i++)
    {
        cout << arr[i] << " ";
    }
}