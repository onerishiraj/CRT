#include <iostream>
using namespace std;
int main()
{
    int row,column;
    cout << "Enter the row size:\t \n";
    cin >> row;
    cout << "Enter the column size:\t \n";
    cin >> column;

    int a[row][column], b[row][column], c[row][column];

// Enter the elements in the matrix A
cout << "Enter the elements in the matrix A:\t \n";

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin >> a[i][j];
        }
    }

// Enter the elements in the matrix B
cout << "Enter the elements in the matrix B:\t \n";

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin >> b[i][j];
        }
    }

// Printing the matrix A
cout << "\n Matrix A \n";

for (int i=0;i<row;i++)
{
    for (int j=0;j<column;j++)
    {
        cout << a[i][j] << " ";
    }
    cout << "\n";
}


// Printing the matrix B
cout << "\n Matrix B \n";

for(int i=0;i<row;i++)
{
    for(int j=0;j<column;j++)
    {
        cout << b[i][j] << " ";
    }
    cout << "\n";
}

// Addition of matrix A and B
cout << "SUM OF MATRIX A AND B \n";

for (int i=0;i<row;i++)
{
    for(int j=0;j<column;j++)
    {
        cout << a[i][j] + b[i][j] << " ";
    }
    cout << "\n";
}
}