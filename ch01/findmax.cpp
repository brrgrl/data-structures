#include <iostream>
#include <vector>

using namespace std;

/**
 * Return the maximum item in array a.
 * Assumes a.size() > 0.
 * Comparable objects must provide operator< and operator=
 */

template <typename Comparable, typename Comparator>
const Comparable &findMax(const vector<Comparable> &a, Comparator cmp) {

    int maxIndex = 0;

    for (int i = 1; i < a.size(); ++i)
        if (cmp.isLessThan(a[maxIndex],a[i]))
            maxIndex = i;
    return a[maxIndex];
}

// Generic findMax, using default ordering.
#include <functional>
template <typename Object> const Object &findMax(const vector<Object> &arr) {

    return findMax(arr, less<Object>());
}

class CaseInsensitiveCompare {

public:
    bool isLessThan(const string & lhs, const string & rhs) const {
        return strcasecmp(lhs.c_str(), rhs.c_str()) > 0;
    }
};

int main() {

    vector<string> arr = {"ZEBRA", "alligator", "crocodile"};
    cout << findMax(arr, CaseInsensitiveCompare()) << endl;

    return 0;
}
