#include <iostream>

// Anya needs your help passing the Eden Academy entrance test! Help her learn
// addition blazingly fast by finding a way to sum up numbers in an array mul-
// tiple times.

// Add code to the subSum function that finds if any number of consecutive arr-
// ay elements add to the target sum. If a target is found, then the program s-
// hould print "target sum found between indexes []  and [] ", where the brack-
// ets represent the corresponding incides.

// if the index itself is the sum, then the program should print "target sum f-
// ound at index [] ".

void subSum(int array[], int arraySize, int target) {
    // TODO: add your code here!!
}

// ----------------------------------------------------------------------------

// main function for testing array output

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    subSum(array, size, 12);
    return 0;
}
