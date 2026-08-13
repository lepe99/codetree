#include <iostream>
using namespace std;

struct A {
    char code[11];
    char place;
    int time;
};

int main() {
    // Please write your code here.
    A a;
    cin >> a.code >> a.place >> a.time;
    cout << "secret code : " << a.code << endl;
    cout << "meeting point : " << a.place << endl;
    cout << "time : " << a.time << endl;
    return 0;
}