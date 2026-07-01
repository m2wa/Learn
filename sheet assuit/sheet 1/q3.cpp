#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    long long z = (long long)x*y;
    cout<<x<<" + "<<y<<" = "<<x+y<<"\n"<<x<<" * "<<y<<" = "<<z<<"\n"<<x<<" - "<<y<<" = " <<x-y<<endl;
    return 0;
}