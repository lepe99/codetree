#include <iostream>
using namespace std;

int main() {
    char a[21], b[21], c[21];
    cin >> a >> b >> c;
    int la = 0, lb = 0, lc = 0;
    while(a[la]) la++;
    while(b[lb]) lb++;
    while(c[lc]) lc++;
    if (la >= lb && lb >= lc) cout << la - lc;
    else if (la >= lc && lc >= lb) cout << la - lb;
    else if (lb >= la && la >= lc) cout << lb - lc;
    else if (lb >= lc && lc >= la) cout << lb - la;
    else if (lc >= la && la >= lb) cout << lc - lb;
    else cout << lc - la;

    return 0;
}