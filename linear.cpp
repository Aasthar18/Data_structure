#include <iostream>
using namespace std;

int LS(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    cout << LS(arr, n, 3);
    return 0;
}