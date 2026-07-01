#include<iostream>
using namespace std;
int main()
{
    long long A,B;
    char c;
    cin>>A>>c>>B;
    if(c=='+')
    {
    cout<<A+B;
    }
    else if(c=='-')
    {
        cout<<A-B;
    }
    else if(c=='*')
    {
        cout<<A*B;
    }
    else if(c=='/')
    {
        cout<<double(A/B);
    }
    else return 0;
}