#include <bits/stdc++.h>

using namespace std;

int n = 4;

bool isSafe(int **arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (arr[i][col] == 1)
        {
            return false;
        }
    }

    int tempRow = row;
    int tempCol = col;

    while (tempRow >= 0 && tempCol >= 0)
    {
        if (arr[tempRow][tempCol] == 1)
        {
            return false;
        }
        tempRow--;
        tempCol--;
    }

    tempRow = row;
    tempCol = col;

    while (tempRow >= 0 && tempCol < n)
    {
        if (arr[tempRow][tempCol] == 1)
        {
            return false;
        }
        tempRow--;
        tempCol++;
    }

    return true;
}

bool nQueen(int **arr, int row)
{
    if (row >= n)
    {
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(arr, row, i))
        {
            arr[row][i] = 1;

            if (nQueen(arr, row + 1))
            {
                return true;
            }

            arr[row][i] = 0;
        }
    }
    return false;
}

int main()
{

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0))
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