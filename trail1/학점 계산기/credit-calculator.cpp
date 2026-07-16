#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double a;
        cin >> a;
        sum += a;
    }
    double avg = (double) sum / n;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    if (avg >= 4.0) cout << "Perfect";
    else if (avg >= 3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}