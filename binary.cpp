#include <iostream>
using namespace std;

int BS(int arr[], int n, int key)
{
    int low = 0;
    int high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    cout << BS(arr, n, 5);
    return 0;
}