#include <iostream>
using namespace std;

struct A {
    string id;
    int level;
};

int main() {
    // Please write your code here.
    A a1, a2;
    a1.id = "codetree";
    a1.level = 10;
    cin >> a2.id >> a2.level;
    cout << "user " << a1.id << " lv " << a1.level << endl;
    cout << "user " << a2.id << " lv " << a2.level << endl;
    return 0;
}