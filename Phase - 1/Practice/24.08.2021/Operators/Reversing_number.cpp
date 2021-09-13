#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// IMPORTANT TO NOTE
// CHECK FOR THE NEGATIVE VALUES
// CHECK FOR THE CONSTRAINTS

int main()
{
ll n;
// Number of times loop
while(cin >> n)
{

ll check = n;

if(n<0)
{
    n = abs(n);
}

ll temp=0,number = 0;
           
while(n>0)
{
        
    temp = n%10;
    number = (number * 10) + temp;
    n = n/10;

}

// printing
if(check < 0){ cout <<  "-" << number << endl;}

else cout << number << endl;   


} 
return 0;
}
