#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int rows,columns;
    cout << "Enter the number of Rows: " << endl;
    cin >> rows;
    cout << "Enter the number of Columns: " << endl;
    cin >> columns;

    int a[rows][columns], b[rows][columns], c[rows][columns];

    // ... Taking input into Matrix A.

    cout << "ENTER THE ELEMENT IN MATRIX A: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
           cin >> a[i][j];
        }   
    }
    

    // ... Taking input into Matrix B.
    
    cout << "ENTER THE ELEMENT IN MATRIX B: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
           cin >> b[i][j];
        }
        
    }
    
    // ... Adding two matrix A and B.

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
           c[i][j] = a[i][j] + b[i][j];
        }  
        cout << endl;
    }

    // ... Printing the sum of two Matrices.

    cout << "SUM OF TWO MATRIX A & B: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < columns; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
    
    
return 0;
}
