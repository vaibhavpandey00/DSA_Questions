#include <bits/stdc++.h>

using namespace std;

int n = 4;

bool isSafe(int **arr, int row, int col)
{
    // Checkin the whole coloumn for 1
    for (int i = 0; i < row; i++)
    {
        if (arr[i][col] == 1)
        {
            return false;
        }
    }

    int tempRow = row;
    int tempCol = col;

    // Checkin the left diagonal for 1
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

    // Checkin the rigth diagonal for 1
    while (tempRow >= 0 && tempCol < n)
    {
        if (arr[tempRow][tempCol] == 1)
        {
            return false;
        }
        tempRow--;
        tempCol++;
    }

    // If none of the above condition is rigth we send its safe to place 1 at given position
    return true;
}

bool nQueen(int **arr, int row)
{
    if (row >= n)
    {
        return true;
    }

    // We will start the loop with (0,0) where row = 0 & col = 0 then each time
    // the nQueen will be called we will be shifted to next row (1,0)
    for (int i = 0; i < n; i++)
    {
        if (isSafe(arr, row, i))
        {
            arr[row][i] = 1;

            if (nQueen(arr, row + 1))
            {
                return true;
            }

            // backtracks from here
            arr[row][i] = 0;
        }

        // If the above statement returns false then we will increase the coloumn
        // ex. we are at row 1 so from (1,0) to (1,1).
    }

    // if none of the above contition is true its not possible to solve the nQueen
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