/**
 * Performs the standard binary search using two comparisons per level.
 * Returns the index where item is found or -1 if not found.
 */
#include <vector>
#include <iostream>
#include <string>
using namespace std;

template <typename Comparable>
int binarySearch(const vector<Comparable> &a, const Comparable &x) {

    int low = 0, high = a.size()-1;

    while (low <= high) {

        int mid = (low+high)/2;

        if (a[mid] < x)
            low = mid + 1;
        else if (a[mid] > x)
            high = mid - 1;
        else
            return mid; // found
    }
    return -1; // not found
}

int main() {

    vector<int> arr = {1,2,3,4,5,6,7,8};
    int elem = 7;

    cout << "The number " << elem << " is in index " << binarySearch<int>(arr,elem) << endl; 
}
