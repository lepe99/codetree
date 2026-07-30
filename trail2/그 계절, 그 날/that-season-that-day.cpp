#include <iostream>
using namespace std;

int day[]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


bool yoon(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0 && y % 400 != 0) return false;
        return true;
    }
    return false;
}

int get_day(int y, int m) {
    return day[m] + (yoon(y) && m == 2 ? 1 : 0);
}

const char* get_season(int m) {
    if (m == 3 || m == 4 || m == 5) return "Spring";
    else if (m == 6 || m == 7 || m == 8) return "Summer";
    else if (m == 9 || m == 10 || m == 11) return "Fall";
    else return "Winter";
}

int main() {
    // Please write your code here.
    int y, m, d;
    cin >> y >> m >> d;
    if (get_day(y, m) >= d) cout << get_season(m);
    else cout << -1;
    return 0;
}