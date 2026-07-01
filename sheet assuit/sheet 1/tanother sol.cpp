#include<iostream>
using namespace std;
int main()
{
    long long A,B,C;
    cin>>A>>B>>C;
cout<<min(A,min(B,C))<<"\n";
long long z = A+B+C - min(A,min(B,C))-max(A,(max(B,C)));
cout<<z<<"\n";
cout<<max(A,max(B,C))<<"\n";
//reverse
/*cout<<max(A,max(B,C))<<"\n";
if((A>B&& B>C)||C>B&&B>A)
cout<<B<<"\n";
else if((A>C&&C>B)||(B>C&&C>A))
cout<<C<<"\n";
else if((B>A&&A>C)||(C>A&&A>B))
cout<<A<<"\n";
cout<<min(A,min(B,C));*/
cout<<"\n"<<A<<"\n"<<B<<"\n"<<C;

}