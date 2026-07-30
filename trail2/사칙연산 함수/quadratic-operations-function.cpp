#include <iostream>
using namespace std;

int sum (int a, int c) {
    return a + c;
}

int sub (int a, int c) {
    return a - c;
}

int mul (int a, int c) {
    return a * c;
}

int divi (int a, int c) {
    return a / c;
}

int main() {
    int a, c, b;
    char o;
    cin >> a >> o >> c;
    bool f = 1;
    if (o == '+') b = sum (a, c);
    else if (o == '-') b = sub(a, c);
    else if (o == '*') b = mul(a, c);
    else if (o == '/') b = divi(a, c);
    else f = 0;
    if (!f) {
        cout << "False";
        return 0;
    }
    cout << a << " " << o << " " << c << " = " << b;  
    return 0;
}