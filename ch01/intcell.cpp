#include <iostream>
#include "intcell.h"
using namespace std;

/**
 * Construct the IntCell with initialValue
 */
IntCell::IntCell(int initialValue) : storedValue(initialValue) {}

/**
 * Return the stored value.
 */
int IntCell::read() const { return storedValue; }

/**
 * Store x.
 */
void IntCell::write(int x) { storedValue = x; }


int main() {
    IntCell m;

    m.write(5);
    cout << "Cell contents: " << m.read() << endl;

    return 0;
}
