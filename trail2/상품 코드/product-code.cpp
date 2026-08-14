#include <iostream>
using namespace std;
struct A {
    string s;
    int i;
};
int main() {
    // Please write your code here.
    A a, b;
    a.s = "codetree";
    a.i = 50;
    cin >> b.s >> b.i;
    cout << "product " << a.i << " is " << a.s << endl;
    cout << "product " << b.i << " is " << b.s << endl;
    return 0;
}