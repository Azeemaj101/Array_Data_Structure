#include <iostream>
using namespace std;

int min(int A[], int k, int N)
{
    int min = A[k], Loc = k;
    for (int i = k + 1; i <= N - 1; i++)
    {
        if (min > A[i])
        {
            min = A[i];
            Loc = i;
        }
    }
    return Loc;
}

int main()
{
    system("CLS");
    system("color 03");

    int arr[] = {5, 3, 6, 8, 9, 2, 10, 12};
    int temp;
    int Min;
    int S = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= S - 2; i++)
    {
        Min = min(arr, i, S);
        temp = arr[i];
        arr[i] = arr[Min];
        arr[Min] = temp;
    }
    Min = min(arr, 0, S);
    cout << "Minimum Value is = " << arr[Min] << endl;
    for (int i = 0; i <= S - 1; i++)
    {
        cout << arr[i] << " ";
    }
}