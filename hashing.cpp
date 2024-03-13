#include <bits/stdc++.h>
using namespace std;

/*      Pre-storing / Fetching     */

// int main()
// {
//     int n;
//     cout << "Enter number of element in arry : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter Elements in Arry : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for (int i = 0; i < 13; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == arr[j])
//             {
//                 hash[i] += 1;
//             }
//         }
//     }
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "The number has occure in array " << hash[num] << " times";
// }

/*   Hasing Using Map     */

int main()
{
    int n;
    cout << "Enter number of element in arry : ";
    cin >> n;
    // int arr[n];                           //Integer array
    // cout << "Enter Elements in Arry : ";

    char arr[n]; // Character array
    cout << "Enter Elements in char Arry : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // map<int, int> mp;                // Integer hasing
    // for (int i; i < n; i++)
    // {
    //     mp[arr[i]]++;
    // }

    map<char, int> mp;
    for (int i; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}