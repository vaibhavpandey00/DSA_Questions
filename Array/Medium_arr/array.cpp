#include <bits/stdc++.h>
using namespace std;

// Q1 Given an array of integers arr[] and an integer target.

// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

// int twoSum(vector<int> &arr, int target) // Q1
// {
//     map<int, int> mpp;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         int num = arr[i];
//         int require = target - num;
//         if (mpp.find(require) != mpp.end())
//         {
//             cout << mpp[require] << i << " ";
//         }
//         mpp[arr[i]] = i;
//     }
// }

int main()
{

    // vector<int> arr{2, 6, 5, 8, 11};
    // int target = 10;

    // twoSum(arr, target);

    // Q2 Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

    vector<int> arr{2, 0, 1, 0, 1, 2, 2, 0};
    for (auto it : arr)
    {
        cout << it << " ";
    }
    int i = 0, j = 1;

    while (i < j && j < arr.size())
    {
        if (arr[i] < arr[j])
        {
            swap(arr[i], arr[j]);
            j++;
        }
        else if (arr[i] == arr[j])
        {
            i++;
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }

    return 0;
}