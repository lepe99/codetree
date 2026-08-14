#include <iostream>
using namespace std;
struct A {
    string aa;
    char b;
    int c;
};

int main() {
    // Please write your code here.
    A a;
    cin >> a.aa >> a.b >> a.c;
    cout << "code : " << a.aa << endl;
    cout << "color : " << a.b << endl;
    cout << "second : " << a.c << endl;
    return 0;
}