#include <iostream>
using namespace std;

int searchelement(int Arr[], int n, int Element)
{
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] == Element)
            return i;
    }
    return 0;
}
int main()
{
    int Arr[100] = {22, 24, 35, 75, 85, 143};
    int key;
    int size = 6;
    cout << "Enter the Element you Want to Search : " << endl;
    cin >> key;
    int found = searchelement(Arr, size, key);
    if (found)
        cout << "Element Found at : " << found;
    else
        cout << "Element Not Found";

    return 0;
}
