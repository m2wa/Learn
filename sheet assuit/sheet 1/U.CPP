#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    double x;
    cin>>x;
    if(int(x)==x)
    {
        cout<<"int "<<x;
    }
    else
    {
        double z=fmodl(x,int(x));
        cout<<"float "<<int(x)<<" "<<z;
    }
}