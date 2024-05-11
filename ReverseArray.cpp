#include <iostream>
using namespace std;
int main()
{
    int Arr[100];
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter Array Elements";
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    printArray(Arr, size);
    // reverseArray(Arr,size);
}
void printArray(int Arr[100], int s)
{
    cout << "printing array Elements";
    for (int i = 0; i < s; i++)
    {
        cout << Arr[i];
    }
}