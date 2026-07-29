#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char n[6];
    cin >> n;
    int sum{};
    for (int i = 0; n[i]; i++) {
        sum += n[i] - '0';
    }
    cout << sum;
    return 0;
}