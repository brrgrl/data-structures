// intcell1.cpp
#include <iostream>
using namespace std;

class IntCell {

public:
    explicit IntCell(int initialValue = 0) {
        {storedValue = new int[initialValue];}
    }
    // destructor
    ~IntCell() {delete storedValue;}
    // copy constructor
    IntCell(const IntCell & rhs) {
        storedValue = new int(*rhs.storedValue);
    }
    // move constructor
    IntCell(IntCell && rhs) : storedValue(rhs.storedValue) {
        rhs.storedValue = nullptr;
    }
    // copy assignment
    IntCell & operator= (const IntCell & rhs) {
        if (this != &rhs)
            *storedValue = *rhs.storedValue;
        return *this;
    }
    // move assignment
    IntCell & operator= (IntCell && rhs) {
        std::swap(storedValue, rhs.storedValue);
        return *this;
    }
    int read() const {
        return *storedValue;
    }
    void write(int x) {
        {*storedValue = x;}
    }

private:
    int *storedValue;
};

int main() {

    IntCell a(2);
    IntCell b = a;
    IntCell c;

    c = b;
    a.write(4);

    cout << a.read() << endl << b.read() << endl << c.read() << endl;
}
