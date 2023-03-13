#include <iostream>
using namespace std;

int main() {

    string str = "hell";
    string& rstr = str;
    rstr += 'o';
    bool cond = (&str == &rstr);
    cout << cond << endl;

    return 0;
}
