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

int main()
{
    // Write C++ code here
    int x, y, temp, sumofnumber = 0;

    cout << "Enter a number: ";
    cin >> x;

    y = x;
    temp = x;
    string p = to_string(x);
    int count = p.size();

    while (y != 0)
    {
        int a = y % 10;
        sumofnumber += pow(a, count);
        y = y / 10;
    }
    if (temp == sumofnumber)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    cout << sumofnumber;

    return 0;
}