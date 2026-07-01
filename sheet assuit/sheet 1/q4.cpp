#include<iostream>
using namespace std;
int main()
{
    int x ,y,c,z;
    cin>>x>>y>>c>>z;
    long long a=(long long) x*y;
    long long b= (long long) c*z;
    cout<<"Difference = "<<a-b;
    return 0;
}