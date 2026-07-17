#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int* arr = new int[b]{};
    while (a > 1) {
        ++arr[a % b];
        a /= b;
    }
    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum += arr[i] * arr[i];
    }
    cout << sum;
    delete[] arr;
    return 0;
}