#include <iostream>
using namespace std;

void quick(int A[], int N, int BEG, int END, int *LOCPTR)
{
    int Left, Right, temp;
    Left = BEG;
    Right = END;
    *LOCPTR = BEG;
    while (true)
    {
        while (A[*LOCPTR] <= A[Right] && *LOCPTR != Right)
            Right--;
        if (*LOCPTR == Right)
        {
            return;
        }
        if (A[*LOCPTR] > A[Right])
        {
            temp = A[*LOCPTR];
            A[*LOCPTR] = A[Right];
            A[Right] = temp;
            *LOCPTR = Right;
        }
        while (A[Left] <= A[*LOCPTR] && Left != *LOCPTR)
            Left++;
        if (*LOCPTR == Left)
        {
            return;
        }
        if (A[Left] > A[*LOCPTR])
        {
            temp = A[Left];
            A[Left] = A[*LOCPTR];
            A[*LOCPTR] = temp;
            *LOCPTR = Left;
        }
    }
}
void quick_sort(int A[], int N)
{
    int BEG, END, LOC, TOP = -1;
    int Lower[10], Upper[10];
    if (N > 1)
    {
        TOP++;
        Lower[TOP] = 0;
        Upper[TOP] = N - 1;
    }
    while (TOP != -1)
    {
        BEG = Lower[TOP];
        END = Upper[TOP];
        TOP--;
        quick(A, N, BEG, END, &LOC);
        if (BEG < LOC - 1)
        {
            TOP++;
            Lower[TOP] = BEG;
            Upper[TOP] = LOC - 1;
        }
        if (LOC + 1 < END)
        {
            TOP++;
            Lower[TOP] = LOC + 1;
            Upper[TOP] = END;
        }
    }
}
int main()
{
    int B[] = {44, 33, 11, 55, 77, 90, 40, 60, 99, 22, 88, 66};
    int i;
    quick_sort(B, 12);
    for (i = 0; i <= 11; i++)
    {
        cout << B[i] << " ";
    }
}