#include <iostream>
using namespace std;
void BinSearch(int arr[], int Size, int Ser)
{
    int l = 0, u = Size - 1, m, flag = 1;
    m = (l + u) / 2;
    while (u >= l)
    {
        if (arr[m] == Ser)
        {
            cout << "Value is Found At Index " << m << " and the Value is " << Ser << endl;
            flag = 0;
            break;
        }
        else if (arr[m] < Ser)
        {
            l = m + 1;
        }
        else
        {
            u = m - 1;
        }
    }
    if (flag == 1)
        cout << "Not Found\n";
}
void Bubble_Sort(int arr[], int S)
{
    for (int round = 0; round < S - 1; round++)
    {
        for (int i = 0; i < S - 1 - round; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100] = {-2765};
    int Lsize = 0, swi;
    bool Goto = true;
    while (Goto)
    {

        system("CLS");
        system("color 04");
        cout << "Press 1 For Insert\n";
        cout << "Press 2 For Search\n";
        cout << "Press 3 For Exit\n";
        cin >> swi;
        switch (swi)
        {
        case 1:
        {
            cout << "Enter The size of your List (Max = 100)\n";
            cin >> Lsize;
            for (int i = 0; i < Lsize; i++)
            {
                cout << "Enter List Value " << i + 1 << endl;
                cin >> arr[i];
            }
            cout << "\n";
            system("PAUSE");
            break;
        }
        case 2:
        {
            int Find;
            if (arr[0] != -2765)
            {
                cout << "Enter Value For Search\n";
                cin >> Find;
                Bubble_Sort(arr, Lsize);
                BinSearch(arr, Lsize, Find);
            }
            else
            {
                cout << "List is Empty\n";
            }
            cout << "\n";
            system("PAUSE");
            break;
        }
        case 3:
        {
            Goto = false;
            break;
        }
        default:
            break;
        }
    }
}