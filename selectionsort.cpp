#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the no of elements:";
    cin >> n;

    cout << "enter the elements:";
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    cout << "the sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}