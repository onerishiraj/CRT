#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n,m;
    double a;
    
    cin >> m >> n >> a;
    long long int res = ceil(m/a) * ceil(n/a);
    cout << res << endl;
    
    return 0;
}