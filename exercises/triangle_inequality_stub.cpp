
#include <bits/stdc++.h>
using namespace std;

// The triangle inequality is a theorem in math that describes how the lengths of
// a triangle are related to each other. In particular, it tells us that the len-
// gth of the longest side of the triangle cannot be more than the sum of the two
// other sides of the triangle. (https://en.wikipedia.org/wiki/Triangle_inequality)
// For example, a triangle can have side lengths 2, 3 and 4, but not 2, 3 and 6.

// In the possibleTriangles function, find how many triangles can possibly be made
// with any 3 side lengths (numbers in the array) using the triangle inequality.

int possibleTriangles(int array[], int arraySize)
{
    // TODO: add your code here !
}

// ----------------------------------------------------------------------------

// main function for testing array output

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "The amount of possible triangles is: " << possibleTriangles(array, size) << endl;
}