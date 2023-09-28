// c++ program to find the maximum value in an array of size n

#include <bits/stdc++.h>
using namespace std;

// Add code to the function reverseArray such that it receives an array and re-
// verses the orders of the numbers in the array.

void reverseArray(int array[], int arraySize)
{
    // TODO: Add your code here!!
}

// ----------------------------------------------------------------------------

// DO NOT edit these functions below !! They are here for testing purposes.

// helper utility for printing the array.

void arrayShow(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// main function for testing array output

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original array: ";

    arrayShow(array, size);
    reverseArray(array, size);

    cout << "New array:      ";

    arrayShow(array, size);
}
