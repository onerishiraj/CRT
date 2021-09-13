#include <iostream>
using namespace std;
int main()
{   
    int n,count = 0;
    cin >> n;
    int a[3];

    while(n>0)
    {
        int temp = 0;
        for(int i=0;i<3;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<3;i++)
        {
            if(a[i]==1)
            {
                temp++;
            }
        }
        if(temp>=2)
        {
            count++;
        }
        n--;
    }
    cout << count << endl;

    return 0;
}