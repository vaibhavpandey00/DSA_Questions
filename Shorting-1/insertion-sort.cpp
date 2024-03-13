#include <bits/stdc++.h>
using namespace std;

// Given an array of N integers, write a program to implement the Insertion sorting algorithm.

// In insertion sort we start chekcing with 1 element aray and check if the element is in
// correct order or not, then increase array by 2 element and do the same.
// Best time com. O(n) Worst O(n^2)

int main()
{
    int x;
    cout << "Enter number of Elements in an array : ";
    cin >> x;
    int arr[x];
    cout << "Enter the elements in array : ";
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort

    for (int j = 0; j < x; j++)
    {
        for (int k = 0; k <= j; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                cout << arr[k] << " " << arr[k + 1] << endl;
                swap(arr[k], arr[k + 1]);
            }
        }
    }

    for (int t = 0; t < x; t++)
    {
        cout << arr[t] << " ";
    }
}