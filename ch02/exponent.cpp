// Exponentiation

#include <iostream>
using namespace std;

long long pow(long long x, int n) {

    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n % 2 == 0)
        return pow(x*x, n/2);
    else
        return pow(x*x, n/2) * x;
}

int main() {

    cout << "12 raised to the power of 10 is " << pow(12,10) <<endl;
}
