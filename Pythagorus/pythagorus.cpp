#include<iostream>
#include<math.h>
#include <iomanip>

using namespace std;

int main()
{
    double x,y;
    cin>>x>>y;

    double c = x*x+y*y;
    double cc = sqrt(c);
    cout<<setprecision(6)<<fixed<<cc;
}
