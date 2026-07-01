#include <iostream>
#include <iomanip>  // for setw and setfill
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long Z = 1;
    Z = (Z * (A % 100)) % 100;
    Z = (Z * (B % 100)) % 100;
    Z = (Z * (C % 100)) % 100;
    Z = (Z * (D % 100)) % 100;

    // Print with two digits, padding with leading zero if needed
    cout << setw(2) << setfill('0') << Z;
    return 0;
}
