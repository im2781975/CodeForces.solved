#include <bits/stdc++.h>
using namespace std;
int c = 0, odd = 0;
int req(int x, int y) {
    if (y == 1)
        return x;

    if (x + y + 1 == y)
        return (pow(2, c - 1) + odd);
    if (x + odd == y)
        return pow(2, c);
    if (x == y)
        return (pow(2, c) + odd);
    if (x <= y && odd > y)
        return ((pow(2, c)) + (odd / y) + (odd % y));
    if (x <= y && odd <= y)
        return ((pow(2, c)) + 1);

    if (x % 2 == 0) {
        x /= 2;
        c++;
    } else {
        x = (x + 1) / 2;
        c++;
        odd++;
    }
    return req(x, y);
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << req(x, y);
    // x= 1024 y=5
}
