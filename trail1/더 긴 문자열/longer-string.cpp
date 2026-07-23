#include <iostream>
using namespace std;

int main() {
    char a[21], b[21];
    int la = 0, lb = 0;
    cin >> a >> b;
    while (a[la]) la++;
    while (b[lb]) lb++;
    if (la == lb) cout << "same";
    else if (la > lb) cout << a << " " << la;
    else cout << b << " " << lb;
    return 0;
}