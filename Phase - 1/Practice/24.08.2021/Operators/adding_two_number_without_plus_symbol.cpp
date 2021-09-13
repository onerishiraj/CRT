#include <iostream>
using namespace std;

int Add(int, int);

int main()
{
    int n,a,b;
    cin >> n;
    while (n>0)
    {
        cin >> a >> b;
        int sum = Add(a,b);
        cout << sum << endl;
        n--;
    }
    
}


int Add(int x, int y)
{
	if (y == 0)
		return x;
	else
		return Add( x ^ y,(unsigned) (x & y) << 1);
}


