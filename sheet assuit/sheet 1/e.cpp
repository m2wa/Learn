#include<iostream>
#include<iomanip>
#define pi 3.141592653;
using namespace std;
int main()
{
    double area,r;
    cin>>r;
    area = r * r;
    area = area * pi;
    cout <<fixed << setprecision(9)<<area;
     // your code.
}