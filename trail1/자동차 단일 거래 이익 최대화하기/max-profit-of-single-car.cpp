#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Please write your code here.
    int min = price[0], max_diff = 0;
    for (int i = 0; i < n; i++) {
        if (min > price[i]) min = price[i];
        else {
            // cout << "i :" << i << endl;
            int diff = price[i] - min;
            max_diff = max_diff > diff ? max_diff : diff;
        }
    }
    cout << max_diff;
    return 0;
}
