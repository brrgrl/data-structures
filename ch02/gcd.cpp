// Euclid's Algorithm

#include <iostream>
using namespace std;

long long gcd(long long m, long long n) {

    while (n != 0) {

        long long rem = m % n;
        m = n;
        n = rem;
    }

    return m;
}

int main() {

    cout << "The gcd for 1,989 and 1,590 is " << gcd(1989,1590) << endl;
}
