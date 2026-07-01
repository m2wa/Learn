#include<iostream>
using namespace std;
int main()
{
    long long A,B,C;
    cin>>A>>B>>C;


    if((A>=B&&B>C)||(B>A&&A>C))
    {if(A>=B)
    cout<<C<<" "<<A;
    else
    cout<<C<<" "<<B;
    }
    
    else if((B>=C&&C>A)||(C>B&&B>A))
    {if(B>=C)
    cout<<A<<" "<<B;
    else
    cout<<A<<" "<<C;
    }

    else if((A>B&&A>B)||(C>A&&A>B))
    {if(A>=C)
    cout<<B<<" "<<A;
    else
    cout<<B<<" "<<C;
    }
}