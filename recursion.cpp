#include <bits/stdc++.h>

using namespace std;

int a = 0;

// void num()
// {
//     if (a == 10)
//         return;
//     else
//     {
//         a++;
//         cout << a << " ";
//         num();
//     }
// }

// int sumofnum(int n, int o)
// {
//     if (n <= 0)
//     {
//         return o;
//     }
//     else
//     {
//         sumofnum(n - 1, o + n);
//     }
// }

// int fac(int n)
// {
//     if (n == 0)
//         return 1;
//     else
//     {
//         return n * fac(n - 1);
//     }
// }

// int main()
// {
//     // num();
//     // cout << sumofnum(5, 0);
//     cout << fac(3);
// }

// void prntarr(int arr[], int end)
// {
//     for (int i = 0; i <= end; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void revarry(int arr[], int start, int end)
// {
//     if (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//         revarry(arr, start, end);
//     }
// }

// int main()
// {
//     int size = 5;
//     int arr[] = {1, 2, 3, 4, 5};
//     revarry(arr, 0, size - 1);
//     prntarr(arr, size - 1);
// }