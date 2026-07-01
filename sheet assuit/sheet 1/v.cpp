#include<iostream>
using namespace std;
int main()
{
    long long A,B;
    char sym;
    cin>>A>>sym>>B;
    if(A>B)
    {
        switch (sym)
        {
        case '>':
            cout<<"Right";
            break;
        default:
            cout<<"Wrong";
            break;
        }
    }
    
    else if(A<B)
    {
        switch (sym)
        {
        case '<':
            cout<<"Right";
                break;
        default:
            cout<<"Wrong";
            break;
        }
    }

    else if(A==B)
        {
            switch (sym)
            {
            case  '=':
                cout<<"Right";
                break;
            
            default:
                cout<<"Wrong";
                break;
            }
        }
}