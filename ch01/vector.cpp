#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> squares(100);

    for (int i = 0; i < squares.size(); ++i)
        squares[i] = i * i;

    for (int i = 0; i < squares.size(); ++i)
        cout << i << " " << squares[i] << endl;

    int sum = 0;
    for (auto x : squares)
        sum += x;

    cout << "\nThe total sum: " << sum << endl;

    // using a refernce to increase squares by 1
    for (auto & x: squares)
        ++x;

    for (int i = 0; i < squares.size(); ++i)
        cout << i << " " << squares[i] << endl;


    return 0;
}
