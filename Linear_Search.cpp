#include <iostream>
using namespace std;

void Search(int arr[], int S, int ser)
{
    int flag = 1;
    for (int i = 0; i < S; i++)
    {
        if (arr[i] == ser)
        {
            cout << arr[i] << " in List\n";
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << ser << " Not in List\n";
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
                int size = sizeof(arr) / sizeof(arr[0]);
                Search(arr, size, Find);
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
        }
        default:
            break;
        }
    }
}