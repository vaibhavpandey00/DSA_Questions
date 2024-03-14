#include <bits/stdc++.h>
using namespace std;

// Q6 Ans-----------------------------------------------
// void rotate(int arr[], int start, int end)
// {
//     while (start <= end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

// void leftRotateArray(int arr[], int n, int k)
// {
//     rotate(arr, 0, k - 1);
//     rotate(arr, k, n - 1);
//     rotate(arr, 0, n-1);
// }

int main()
{
    // int arr[5];    /*integer array with size [], same we can make character array and double array as well*/
    // cout << "Enter elements in array: "<<endl;
    // for(int i=0;i<5;i++){
    //     cin >> arr[i];
    // }
    // cout << "Elements in array are: ";
    // for(int i=0;i<5;i++){
    //     cout << arr[i]<<" ";
    // }

    // 2d Array
    // int arr [3][3];
    // cout << "Enter Elemnets in 2d array (row wise): "<<endl;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin >> arr[i][j];
    //     }
    // }
    // cout << "Array Elements are: "<<endl;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout << arr[i][j] <<" ";
    //     }
    //     cout << endl;
    // }

    // Q1 Lagest element in array
    // int arr[] = {5,8,1,9,7,22,64,2};
    // int max = arr[0];
    // cout << "Largest elemeint in the array is : ";
    // for(int i = 0; i < 8; i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    // }
    // cout << max;

    // Q2 Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

    // int arr[] = {5,1,7,4,9,12,2,6}; // slarg = 9 ssmal = 2

    // int largest = arr[0];
    // int slargest = -1;
    // int smallest = arr[0];
    // int ssmallest = INT64_MAX;

    // for(int i = 1; i < 8; i++){
    //     if(arr[i] > largest){
    //         slargest = largest;
    //         largest = arr[i];
    //     }
    //     if(arr[i] > slargest && arr[i]!=largest){
    //         slargest = arr[i];
    //     }
    // }

    // for(int j = 1; j < 8; j++){
    //     if(arr[j] < smallest){
    //         ssmallest = smallest;
    //         smallest = arr[j];
    //     }
    //     if(arr[j] < ssmallest && arr[j]!=smallest){
    //         ssmallest = arr[j];
    //     }
    // }

    // cout << slargest <<" "<<ssmallest;

    // Q3 Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

    // int arr[] = {10, 20, 30, 40, 50, 60, 70}, n = 7;
    // bool x = true;

    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i] < arr[i - 1])
    //         x = false;
    // }

    // if (x)
    //     cout << "True";
    // else
    //     cout << "False";

    // Q4 Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

    // int arr[] = {10, 20, 20, 30, 30, 30, 40, 50, 60, 70}, n = 8;
    // int i = 0, j = 1;
    // bool x = false;

    // while (arr[i] <= arr[j])
    // {
    //     if (arr[j] == arr[i])
    //     {
    //         j++;
    //     }
    //     else if (arr[j] > arr[i])
    //     {
    //         i++;
    //         arr[i] = arr[j];
    //         j++;
    //     }
    // }

    // for (int k = 0; k < n; k++)
    // {
    //     cout << arr[k] << " ";
    // }

    // Q5 Given an array of N integers, left rotate the array by one place.

    // int arr[] = {10, 20, 30, 40, 50, 60, 70}, n = 7;
    // int temp = arr[0];

    // for (int i = 0; i < n - 1; i++)
    // {
    //     arr[i] = arr[i + 1];
    // }

    // arr[n - 1] = temp;

    // for (int j = 0; j < n; j++)
    // {
    //     cout << arr[j] << " ";
    // }

    // Q6 Given an array of integers, rotating array of elements by k elements either left or right.

    // int arr[] = {10, 20, 30, 40, 50, 60, 70}, n = 7, k;
    // cin >> k;

    // Using extra array method---------------------------
    // int temp[k];
    // for (int i = 0; i < k; i++)
    // {
    //     temp[i] = arr[i];
    // }

    // for (int i = k; i < n; i++)
    // {
    //     arr[a] = arr[i];
    //     a++;
    // }
    // a = 0;

    // for (int i = n - k; i < n; i++)
    // {
    //     arr[i] = temp[a];
    //     a++;
    // }

    // Using the Rotate the k elements of array and then remaining n-k then reversing the whole array method

    // leftRotateArray(arr, n, k);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Q7 You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

    // int arr[] = {1, 0, 2, 3, 0, 4, 0, 1}, n = 8, i = 0, j = 1;

    // while (i < j && j <= n - 1)
    // {
    //     if (arr[i] == 0)
    //     {
    //         if (arr[j] != 0)
    //         {
    //             swap(arr[i], arr[j]);
    //             i++;
    //             j++;
    //         }
    //         else if (arr[j] == 0)
    //         {
    //             j++;
    //         }
    //     }
    //     else
    //     {
    //         i++;
    //         j++;
    //     }
    // }

    // for (int a = 0; a < n; a++)
    // {
    //     cout << arr[a] << " ";
    // }

    // Q8 Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

    // int arr[] = {10, 20, 30, 40, 50, 60, 70}, n = 7, k, temp;
    // cin >> k;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == k)
    //     {
    //         temp = i;
    //         break;
    //     }
    // }

    // cout << temp;

    // Q9 Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays. The union of two arrays can be defined as the common and distinct elements in the two arrays.

    // set<int> Union;
    // int n = 5, m = 5, i = 0, j = 0;
    // int arr1[] = {1, 2, 3, 4, 5};
    // int arr2[] = {2, 3, 4, 4, 5};

    // while (i < n && j < m)
    // {
    //     if (arr1[i] <= arr2[j])
    //     {
    //         Union.insert(arr1[i]);
    //         i++;
    //     }
    //     else if (arr2[j] <= arr1[i])
    //     {
    //         Union.insert(arr2[j]);
    //         j++;
    //     }
    // }

    // while (i < n)
    // {
    //     Union.insert(arr1[i]);
    //     i++;
    // }

    // while (j < m)
    // {
    //     Union.insert(arr2[j]);
    //     j++;
    // }

    // for (auto it : Union)
    // {
    //     cout << it << " ";
    // }

    // Q10 Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

    // int arr1[] = {1, 2, 4, 5}, n = 5, temp = 0;
    // int num = (n * (n + 1)) / 2;

    // // int x = sizeof(arr1) / sizeof(arr1[0]);

    // for (int i = 0; i < n - 1; i++)
    // {
    //     temp += arr1[i];
    // }

    // num = num - temp;

    // cout << num;

    // Q11 Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.

    // int arr[] = {1, 1, 0, 1, 1, 1, 0, 0, 0, 1}, n = 6, temp = 0, max_count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 1)
    //     {
    //         max_count++;
    //     }
    //     else
    //     {
    //         temp = max_count;
    //         max_count = 0;
    //     }
    // }

    // if (max_count > temp)
    // {
    //     cout << max_count;
    // }
    // else
    // {
    //     cout << temp;
    // }

    // Q12 Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

    // vector<int> arr{4, 1, 2, 1, 2};
    // int x;

    // for (int i = 0; i < vect.size(); i++) // Brute force method
    // {
    //     int count = 0;
    //     for (int j = 0; j < vect.size(); j++)
    //     {
    //         if (vect[i] == vect[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 1)
    //     {
    //         x = vect[i];
    //         break;
    //     }
    // }

    // Using hashing
    // int maxi = arr[0];
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] > maxi)
    //     {
    //         maxi = arr[i];
    //     }
    // }
    // vector<int> hash(maxi + 1, 0);
    // for (int i = 0; i <= maxi; i++)
    // {
    //     hash[arr[i]]++;
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << hash[arr[i]] << endl;
    // }

    // int xorr = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     xorr = xorr ^ arr[i];
    //     cout << xorr << " ";
    // }

    // cout << endl
    //      << xorr << " ";

    // for (auto it : vect)
    // {
    //     cout << it << " ";
    // }

    // Q13  Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

    // vector<int> arr{2, 3, 5, 1, 1, 1, 1, 1};
    // vector<int> arr{-1, 1, 1};
    // int k = 5, i = 0, j = 1, len = 0;
    // long long sum = arr[0];

    // while (i < j && j < arr.size())
    // {
    //     sum += arr[j];
    //     if (sum < k)
    //     {
    //         j++;
    //     }
    //     else if (sum == k)
    //     {
    //         int newLen = j - i + 1;
    //         len = max(newLen, len);
    //         j++;
    //     }
    //     else
    //     {
    //         sum = sum - arr[i];
    //         i++;
    //         j++;
    //     }
    // }

    // cout << len;

    return 0;
}