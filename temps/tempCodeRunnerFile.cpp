#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int x,count=0;
//     cin >> x;
//     do{
//         x=x/10;
//         count++;
//     }
//     while(x!=0);
//     cout << count;
// }

// int main()
// {
//     int x, c;
//     int y = 0;
//     cin >> x;
//     c = x; // 123
//     while (x != 0)
//     {
//         int z = x % 10;
//         y = y * 10 + z;
//         x = x / 10;
//     }
//     if (c == y)
//     {
//         cout << c << " is a palendrom";
//     }
//     else
//         cout << c << " is not a palendrom";
// }

// int main()
// {
//     int x, y,ans;
//     cin >> x >> y;
//     for (int i = 1; i <= min(x, y); i++)
//     {
//         if (x % i == 0 && y % i == 0)
//         {
//             ans = i;
//         }
//     }
//     cout << ans;
// }

// int main()
// {
//     int x, y, c, temp, sumofpower = 0;
//     cin >> x;
//     c = x;
//     temp = c;
//     string p = to_string(x);
//     y = p.length();
//     while (c != 0)
//     {
//         int q = c % 10;
//         sumofpower += pow(q, y);
//         c /= 10;
//     }
//     if (sumofpower == temp)
//     {
//         cout << "Yes";
//     }
//     else
//         cout << "NO";
// }

// int main(){
//     int x;
//     cin >> x;
//     for(int i = 1; i <= x; i++){
//         if(x % i==0){
//             cout << i<<" ";
//         }
//     }
// }

// int main()
// {
//     int x;
//     cin >> x;
//     if (x % 2 == 0)
//     {
//         cout << "Not a prime number";
//     }
//     else
//     {
//         cout << x << " is a prime number with divisior 1 and " << x << endl;
//     }
// }

// int main()
// {
//     int x, y, z, count, temp, sumofnumber = 0;
//     cin >> x;
//     y = x;
//     temp = x;
//     string s = to_string(x);
//     count = s.size();
//     while (y!=0)
//     {
//         int a = y % 10;
//         sumofnumber += pow(a, count);
//         y = y / 10;
//     }
//     if (sumofnumber == temp)
//     {
//         cout << "It's a Armstrong number";
//     }
//     else
//         cout << "Not a Armstrong number";
// }

// int removeElement(vector<int> &nums, int val)
// {
//     int n = nums.size();
//     int trim = 0;
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         if (nums[i] == val && nums[j] != val)
//         {
//             swap(nums[i], nums[j]);
//             trim++;
//             i++;
//             j--;
//         }
//         else if (nums[j] == val)
//         {
//             trim++;
//             j--;
//         }
//         else
//             i++;
//     }

//     return (n - trim);
// }

// string reverseWords(string s)
// {
//     int n = s.length(), i = 0;
//     string res = "";

//     while (i < n)
//     {
//         string temp = "";
//         while (s[i] != ' ' && i < n)
//         {
//             temp += s[i];
//             i++;
//         }
//         cout << temp << endl;
//         if (s[i] == ' ' || i == n)
//         {
//             res = temp + ' ' + res;
//             i++;
//         }
//     }

//     return res;
// }

// int candy(vector<int> &ratings)
// {
//     int n = ratings.size();
//     int cndGiven = -1;
//     int reqCandy = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//         {
//             if (ratings[i] > ratings[i + 1])
//             {
//                 reqCandy++;
//                 cndGiven = i;
//             }
//         }
//         if (i + 1 < n && ratings[i] >= ratings[i + 1] && ratings[i] > ratings[i - 1])
//         {
//             if (i - 1 != cndGiven)
//             {
//                 cndGiven = i;
//                 reqCandy++;
//             }
//         }
//     }

//     return ratings.size() + reqCandy;
// }

// int main()
// {
//     // Write C++ code here
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     cout << candy(v);

//     return 0;
// }

// string convert(string s, int numRows){
//     int n = s.length();

//     if (numRows == 1)
//         return s;

//     if (numRows > n)
//         return s;

//     int down = -1; // 1 means down -1 means up

//     int row = 0;

//     vector<char> res[numRows];

//     for (auto c : s)
//     {
//         res[row].push_back(c);

//         if (row == 0 || row == numRows - 1)
//             down *= -1;

//         row += down;
//     }

//     string result = "";

//     for (auto x : res)
//     {

//         for (auto y : x)
//         {
//             cout << y << endl;
//             result += y;
//             // cout << result << endl;
//         }
//     }

//     return result;
// }

int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int i = 0, j = 1;
    int first = nums[0];

    int minLen = 0, current = first;

    while (j < n)
    {
        current += nums[j];

        if (current >= target)
        {
            minLen = min(minLen, j - i);
            current -= nums[i];
            cout << current << endl;
            i++;
        }
        else
        {
            j++;
        }
    }

    return minLen;
}

int main()
{
    // Write C++ code here
    vector<int> v{2, 3, 1, 2, 4, 3};
    cout << minSubArrayLen(7, v);

    return 0;
}