#include <bits/stdc++.h>
using namespace std;

// Given an array of n integers, sort the array using the Quicksort method.

// Step 1. Pick a Pivot element from the aray and a left and a right
// ex. if array has 10 elem index 1 will be pivot and 2 will be left and 10 will be right
// traverse the array if left elemt is > then pivot and right elem. is < then pivot Swap
// when reached mid or array or left == right swap the pivot with the mid

int sort(vector<int> &arr, int left, int right)
{
    int l = left;
    int r = right;
    int p = arr[left];
    bool ntswaaped = true;
    int mid;
    while (l < r && ntswaaped)
    {
        while (arr[l] <= p && l <= right - 1)
        {
            l++;
        }
        while (arr[r] > p && r >= left + 1)
        {
            r--;
        }
        if (l < r)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
        else
        {
            ntswaaped = false;
        }
    }
    if (ntswaaped)
        swap(arr[left], arr[r]);
    return r;
}

void quicksort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int pivot = sort(arr, left, right);
        quicksort(arr, left, pivot - 1);
        quicksort(arr, pivot + 1, right);
    }
}

int main()
{
    int x, a;
    cout << "Enter length of arrary : ";
    cin >> x;
    vector<int> arr;
    cout << "Enter the elements in array : ";
    for (int i = 0; i < x; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    quicksort(arr, 0, arr.size() - 1);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    // Time compx O(nLogn) but it doe'nt usses extra array
}