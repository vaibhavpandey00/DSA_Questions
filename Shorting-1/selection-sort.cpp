#include <bits/stdc++.h>
using namespace std;

// Given an array of N integers, write a program to implement the Selection sorting algorithm.

// Step 1:  Get the minimum element from the aray and place it on the 1st place
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

    // Selection sort
    for (int j = 0; j < x - 1; j++)
    {
        for (int k = j + 1; k < x; k++)
        {
            if (arr[k] < arr[j])
            {
                swap(arr[k], arr[j]);
            }
        }
        cout << "Count ";
    }

    for (int t = 0; t < x; t++)
    {
        cout << arr[t] << " ";
    }
}