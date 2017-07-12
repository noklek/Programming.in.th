#include<iostream>
#include<string>
#include <algorithm>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int aa[]={a,b,c};
    int n = sizeof(aa)/sizeof(aa[0]);
    sort(aa, aa+n);

    string abc;
    cin>>abc;

    for (int i=0;i<abc.length();i++)
    {
        if(abc.at(i) == 'A')
        {
            cout<<aa[0]<<" ";
        }else if(abc.at(i) == 'B')
        {
            cout<<aa[1]<<" ";
        }else
        {
            cout<<aa[2]<<" ";
        }
    }

}
