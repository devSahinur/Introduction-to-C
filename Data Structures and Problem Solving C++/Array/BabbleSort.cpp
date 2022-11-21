#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    short size;
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Before sort: ";
    printArray(array, size);

    // Bubble Sort Implementation
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            // if (array[j] > array[j + 1]) ////ascending  order
            if (array[j] < array[j + 1]) ////descending order
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "After sorted: ";
    printArray(array, size);

    return 0;
}