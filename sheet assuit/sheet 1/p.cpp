#include<iostream>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a>999&&a<=9999)
    {
    int z=a/1000;
    if(z%2==0)
    {
        cout<<"EVEN";
    }
    else cout<<"ODD";
    }
}