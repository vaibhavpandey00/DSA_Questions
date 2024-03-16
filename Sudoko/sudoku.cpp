#include <bits/stdc++.h>
using namespace std;

int n = 9;

bool isSafe(int arr[][9], int row, int col, int num)
{

    // cout << col << " " << num << endl;

    for (int i = 0; i < n; i++)
    {
        // 1st we will check if the number is present in coloumn

        if (arr[i][col] == num)
        {
            return false;
        }

        // 2nd we will check if the number is present in the row

        if (arr[row][i] == num)
        {
            return false;
        }

        // 3rd we will check for the square of 3x3 grid if the number is present in it

        if (arr[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num)
        {
            return false;
        }
    }

    // If all of the above condition doesent met then

    return true;
}

bool sudoku(int arr[][9])
{
    // if (row >= n)
    // {
    //     return true;
    // }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (arr[row][col] == 0)
            {
                for (int val = 1; val <= n; val++)
                {
                    if (isSafe(arr, row, col, val))
                    {
                        arr[row][col] = val;

                        bool nxtSolve = sudoku(arr);
                        if (nxtSolve)
                        {
                            return true;
                        }
                        else
                        {
                            // backtrack
                            arr[row][col] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int arr[9][9] = {{0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 1, 2, 0, 3, 4, 5, 6, 7},
                     {0, 3, 4, 5, 0, 6, 1, 8, 2},
                     {0, 0, 1, 0, 5, 8, 2, 0, 6},
                     {0, 0, 8, 6, 0, 0, 0, 0, 1},
                     {0, 2, 0, 0, 0, 7, 0, 5, 0},
                     {0, 0, 3, 7, 0, 5, 0, 2, 8},
                     {0, 8, 0, 0, 6, 0, 7, 0, 0},
                     {2, 0, 7, 0, 8, 3, 6, 1, 5}};

    if (sudoku(arr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}