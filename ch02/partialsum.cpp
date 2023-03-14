#include <iostream>
using namespace std;

int sum(int n) {

    int partialSum;

    partialSum = 0;
    for (int i = 1; i <= n; ++i)
        partialSum += i * i * i;
    return partialSum;
}

int main() {

    cout << "partial sum of 137 is " << sum(137) << endl;

    return 0;
}
