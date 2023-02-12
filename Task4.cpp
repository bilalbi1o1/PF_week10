#include <iostream>
using namespace std;

int arr[50];

int main()
{
    int cycle;
    int num;
    int count = 0;

    cout << "Enter how many numbers you want to enter :";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter number :";
        cin >> arr[i];
    }

    cout << "Enter cycles:";
    cin >> cycle;

    if (cycle > num)
    {
        cout << "true";
        return 0;
    }
    else
    {
        for (int i = 0; i < (num - cycle); i++)
        {
            if (arr[i] == arr[(i + cycle)])
            {
                count++;
            }
        }
        if (count == (num - cycle))
            cout << "true";
        else
            cout << "false";
    }
}