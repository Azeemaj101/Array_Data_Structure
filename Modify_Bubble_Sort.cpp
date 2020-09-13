#include <iostream>
using namespace std;

void Bubble_Sort(int arr[], int S)
{
    int flag;
    for (int round = 1; round <= S - 1; round++)
    {
        flag = 0;
        for (int i = 0; i <= S - 1 - round; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = 1;
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (flag == 0)
        {
            cout<<"mmm"<<round<<endl;
            break;
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
        cout << "Press 2 For Bubble Sort\n";
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
                Bubble_Sort(arr, Lsize);
                for (int i = 0; i < Lsize; i++)
                {
                    cout << "Sorted Array is = " << arr[i] << " at index " << i << endl;
                }
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