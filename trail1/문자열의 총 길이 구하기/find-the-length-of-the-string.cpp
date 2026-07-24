#include <iostream>
#define MAX_SIZE 201
using namespace std;

int main() {
    char s[MAX_SIZE];
    int sum{};
    for (int i = 0; i < 10; i++) {
        cin >> s;
        int l{};
        while (s[l]) l++;
        sum += l;
    }
    cout << sum;
    return 0;
}