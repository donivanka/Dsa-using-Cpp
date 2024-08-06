#include <iostream>
using namespace std;
int main()
{
    int n = 3, k = 1, brr[10];
    int arr[] = {1, 2, 3};
    for (int i = n - 1; i >= 0; i--)
    {
        int ni = (i - k) % n;
        if (ni < 0)
            brr[n - k] = arr[i];
        brr[ni] = arr[i];
    }
    // printing Rotated
    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
    }
    return 0;
}
