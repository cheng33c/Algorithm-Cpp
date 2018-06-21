#include <iostream>

#include "SortTestHelper.h"
#include "shellSort.h"
#include "InsertionSort.h"

using namespace std;

int main() {

    int n = 500000;

//    {
//        cout << "Test for Random Array, size = " << n << ", random range [0, " << n << "]" << endl;
//        int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
//        int *arr2 = SortTestHelper::copyIntArray(arr1, n);
//
//
//        SortTestHelper::testSort("Shell Sort", shellSort, arr2, n);
//        SortTestHelper::testSort("Merge Sort", mergeSort, arr1, n);
//
//        delete[] arr1;
//        delete[] arr2;
//    }

    {
        int swapTimes = 0;
        cout << "Test for Random Array, size = " << n << ", random range [0, " << n << "]" << endl;
        int *arr1 = SortTestHelper::generateNearlyOrderedArray(n, 0);
        int *arr2 = SortTestHelper::copyIntArray(arr1, n);


        SortTestHelper::testSort("Insertion Sort", insertionSort, arr2, n);
        SortTestHelper::testSort("Merge Sort", mergeSort, arr1, n);

        delete[] arr1;
        delete[] arr2;
    }

    return 0;
}