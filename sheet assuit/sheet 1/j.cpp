#include<iostream>
using namespace std;
int main()
{
    long long A,B;
    cin>>A>>B;
    if(double(A%B)==0)
    cout<<"Multiples";
    else if(double(B%A)==0)
    cout<<"Multiples";
    else
    cout<<"No Multiples";
    return 0;
}