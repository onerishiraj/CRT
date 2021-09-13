#include <iostream>
using namespace std;
int main()
{
    int n,k,count = 0;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin << a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%3 == 0)
            count++;
    }
    
    cout << count;
    
    return 0;
}