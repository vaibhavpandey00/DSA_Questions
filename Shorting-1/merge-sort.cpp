#include <bits/stdc++.h>
using namespace std;

// merge sort based on deivide and concure method we divide the array into smaller parts and the
// merge it while rearenging the elements in correcrt order

void merge(vector<int> &arr, int l, int mid, int h)
{
    vector<int> temp;
    int left = l;
    int right = mid + 1;
    while (left <= mid && right <= h)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= h)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}

void mergersort(vector<int> &arr, int l, int h)
{
    if (l == h)
    {
        return;
    }
    else
    {
        int mid = (l + h) / 2;
        mergersort(arr, l, mid);
        mergersort(arr, mid + 1, h);
        merge(arr, l, mid, h);
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

    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }

    mergersort(arr, 0, x - 1);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    // Time compx. O(nLogn)
}