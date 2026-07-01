#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long no_of_Days,yr,mnth,dy;
    cin>>no_of_Days;
    if (0>no_of_Days)
    return 0;
    int x,y,l,z;
    //no of years
    if(no_of_Days>=365||no_of_Days<365)
    {
        x=no_of_Days%365;
        y=(-x+no_of_Days)/365;
    }
    //no of monthes
    if(x>=30||x<30)
    {
l=x%30;
mnth=(-l+x)/30;
dy=l;
    }
    cout<<y<<" years"<<"\n"<<mnth<<" months"<<"\n"<<dy<<" days";
}