#include <iostream>
#include <string>

using namespace std;

int n;
char date[100][101];
char day[100][101];
char weather[100][101];

int compare(const char* a, const char* b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] < b[i]) return -1;
        else if (a[i] > b[i]) return 1;
        i++;
    }
    while (!a[i] && !b[i]) return 0;
    if (a[i]) return 1;
    return -1;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
    }

    // Please write your code here.
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (compare(weather[i], "Rain") == 0) {
            idx = i;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (compare(date[idx], date[i]) == 1 && compare(weather[i], "Rain") == 0) {
            idx = i;
        }
    }
    cout << date[idx] << " " << day[idx] << " " << weather[idx];

    return 0;
}