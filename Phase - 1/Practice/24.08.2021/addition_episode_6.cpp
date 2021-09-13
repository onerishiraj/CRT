#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],m,sum;
    
    while(true)
    {   
        sum = 0;
        cin >> m;
        if(m == 0)
        {
            break;
        }
        else{
            for(int i=0;i<m;i++)
            {
                cin >> a[i];
                sum += a[i];
            }
            cout << sum << endl;
        }
    }
} 