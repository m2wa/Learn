#include<iostream>
using namespace std;
int main()
{
    
    char A;
    cin>>A;
    if(int(A)>=65&&int(A)<=90)
    {
        char z= char(int(A)+32);
    cout<<z;
    }
    else if(int(A)>=97&&122>=int(A))
    {
        char y=char(int(A)-32);
        cout<<y;
    }
}