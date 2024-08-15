#include <bits/stdc++.h>
using namespace std;

// Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

// Opposite to slection sort bubble sort pushes the largest element to last index
// Step 1: Compares the first 2 elements and swaps then iterates for whole array
// Best time com. O(n) Worst O(n^2)

int main()
{
    cout << "Enter number of Elements in an array : ";
    int arr[20] = {45, 216, 198, 795, 484, 650, 590, 431, 705, 316, 557, 189, 652, 606, 153, 829, 813, 367, 658, 961};

    // Bubble sort

    for (int j = 20 - 1; j >= 1; j--)
    {
        int didSwap = 0;
        for (int k = 0; k <= j; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
                didSwap = 1;
                // cout << arr[k] << " " << arr[k + 1] << endl;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        // cout << "Count ";
    }

    for (int t = 0; t < 20; t++)
    {
        cout << arr[t] << " ";
    }
}