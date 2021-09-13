# include <iostream>
using namespace std;

int main()
{
    int a[100],n;
    
    while (cin >> n)
    {
        int sum = 0;

        for(int i=0;i<n;i++)
        {
        cin >> a[i];
        sum = sum += a[i];
        }
        
    cout << sum << endl;
    }
        
    return 0;
}