#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> ans;
    int i = 0, j = 1;

    while (j < nums.size())
    {
        if (nums[i + 1] > 0)
        {
            i++;
        }
        if (nums[j] < 0)
        {
            swap(nums[i], nums[j]);
            i = j;
        }
        j++;
    }

    return nums;
}

int main()
{
    vector<int> arr{3, 1, -2, -5, 2, -4}; //
    // cout << majorityElement(arr);

    // string str = "babad";

    vector<int> result = rearrangeArray(arr);

    // cout << result;

    for (auto it : result)
    {
        cout << it << " ";
    }
}