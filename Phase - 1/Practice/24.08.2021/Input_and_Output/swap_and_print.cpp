#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp = 0;

    cin >> a >> b;
    cout << "a=" << a << ", b=" << b << endl;
    temp = a;
    a = b;
    b = temp;

    
    cout << "a=" << a << ", b=" << b << endl;

    return 0;
}  
