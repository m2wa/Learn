#include<iostream>
using namespace std;
int main()
{
    char A;
    cin>>A;
    if(int(A)>=65&&int(A)<=90)
    cout<<"ALPHA\nIS CAPITAL";
    else if(int(A)>=97&&122>=int(A))
    cout<<"ALPHA\nIS SMALL";
    else if(int(A)>=48&&int(A)<=57)
    cout<<"IS DIGIT";
}