#include <iostream>
using namespace std;
void printArray(int Arr[100], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << " " << Arr[i];
    }
    cout << endl;
}
void reverseArray(int Arr[100], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(Arr[start], Arr[end]);
        start++;
        end--;
    }
    cout << "The Reversed Array is : ";
    printArray(Arr, n);
}
int main()
{
    int Arr[100];
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter Array Elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    cout << "Printing Array Elements: ";
    printArray(Arr, size);
    reverseArray(Arr, size);
}
