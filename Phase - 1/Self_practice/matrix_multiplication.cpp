#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows, columns;

    cout << "ENTER THE NUMBER OF ROWS: " << endl;
    cin >> rows;
    cout << "ENTER THE NUMBER OF COLUMNS" << endl;
    cin >> columns;

    int a[rows][columns], b[rows][columns], c[rows][columns];

    // ... ENTER THE ELEMENTS IN MATRIX A

    cout << "ENTER THE ELEMENTS IN MARTRIX A: \n" << endl;
    
    for (int i = 0; i < rows; i++)      
    {
        for (int  j = 0; j < columns; j++)
        {
            cin >> a[i][j];
        }
        
    }

    // ... ENTER THE ELEMENTS IN MATRIX B

    cout << "ENTER THE ELEMENTS IN MARTRIX B: \n" << endl;
    
    for (int i = 0; i < rows; i++)      
    {
        for (int  j = 0; j < columns; j++)
        {
            cin >> b[i][j];
        }
        
    } 

    // ... MULTIPLICATION OF TWO MATRIX

    cout << "MULTIPLICATION OF TWO NUMBERS" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < columns; j++)
        {
            
        }
        
    }
    
 return 0;   
}    