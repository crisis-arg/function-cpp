#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a_row, a_column;
    cout << " enter the num of a a_row: " << endl;
    cin >> a_row;
    cout << "enter the num of a_column: " << endl;
    cin >> a_column;
    int a[a_row][a_column];
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < a_column; j++)
        {
            cin >> a[i][j];
        }
    }
    int b_row, b_column;
    cout << "enter the num of b_row: " << endl;
    cin >> b_row;
    cout << "enter the num of b_column: " << endl;
    cin >> b_column;
    int b[b_row][b_column];
    for (int i = 0; i < b_row; i++)
    {
        for (int j = 0; j < b_column; j++)
        {
            cin >> b[i][j];
        }
    }
    int product[a_row][b_column];
    int sum = 0;
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < b_column; j++)
        {
            for (int k = 0; k < b_row; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 0; i < a_row; i++)
    {
        for (int j = 0; j < b_column; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
}
