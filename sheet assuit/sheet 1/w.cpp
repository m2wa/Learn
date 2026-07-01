#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double a,b,c;
    char sym1,sym2;
    cin>>a>>sym1>>b>>sym2>>c;
    
    switch (sym1)
    {
    case '+':
        if(a+b==c)
        {
        cout<<"Yes";
        }
        else cout<<a+b;
        break;

    case '-':
            if(a-b==c)
        {
        cout<<"Yes";
        }
        else cout<<a-b;
        break;
    
    case '*':
            if(double(a*b)==double(c))
        {
        cout<<"Yes";
        }
        else cout<<double(a*b);
        break;
    
    case '/':
            if(double(a/b)==double(c))
        {
        cout<<"Yes";
        }
        else cout<<double(a/b);
        break;
    default:
        return 0;
        break;
    }
}