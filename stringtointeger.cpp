#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s = "5678";
    int num;
    stringstream ss(s);
    ss >> num;

    cout << "Integer value: " << num << endl;
    return 0;
}
