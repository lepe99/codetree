#include <iostream>
#define MAX_SIZE 201
using namespace std;

int main() {
    char s[MAX_SIZE];
    int sum{};
    for (int i = 0; i < 10; i++) {
        cin >> s;
        if (i % 2 == 0) cout << s << endl;
    }
    return 0;
}