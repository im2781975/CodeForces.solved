#include <iostream>
using namespace std;
void solve1() {
    int x, z = 0;
    cin >> x;
    int y[x];

    while (cin >> y[z++]);

    int l = 0, k = x;

    for (int i = 0; i < x; i++) {
        if (y[i]) {
            int m = 0;

            for (int j = i + 1; j < x; j++) {
                if (y[i] == y[j]) {
                    m++;
                    y[j] = 0;
                }
            }
            if (m > 0) k -= m;
            if (m > l) l = m;
        }
    }
    cout << l + 1 << " " << k;
}
void solve2() {
    int x, z = 0, even = 0, odd = 0, eve = 0, od = 0;
    cin >> x;
    int y[x];
    
    while (z < x)
        cin >> y[z++];
    
    z = 0;
    while (z++ < x) {
        if (y[z - 1] % 2 == 0) {
            even++;
            eve = z - 1;
        } else {
            odd++;
            od = z - 1;
        }
    }
    if (even == 1) 
        cout << eve + 1;
    else 
        cout << od + 1;
    return 0;
}
void solve3() {
    int n, k, z = 0, c = 0;
    cin >> n >> k;
    int y[n];

    while (cin >> y[z++]);
    z = 0;
    while (z++ < n) {
        if (y[z - 1] >= y[k - 1]) {
            if (y[z - 1] > 0)
                c++;
        } else {
            break;
        }
    }
    cout << c;
}
void solve4(){
    float y = 0, z[3], sum = 0;
    int x = 0;

    while (x++ < 4) {
        cin >> y;
        sum = sum + y;
    }
    int min = 0;
    x = 0;

    while (x++ < 3) {
        cin >> z[x - 1];
        if (z[min] > z[x - 1]) min = x - 1;
    }

    x = 0;
    float f = 0;

    while (x++ < 3) {
        if (x - 1 == min) continue;
        f += z[x - 1];
    }

    sum += f / 2;

    if (sum >= 90) {
        cout << "A";
        return 0;
    }
    if (sum >= 80 && sum < 90) {
        cout << "B";
        return 0;
    }
    if (sum >= 70 && sum < 80) {
        cout << "C";
        return 0;
    }
    if (sum >= 60 && sum < 70) {
        cout << "D";
        return 0;
    }
    if (sum < 60) {
        cout << "F";
        return 0;
    }

    return 0;
}
void solve5() {
    int x;
    while (cin >> x) {
        int l[x], r[x];
        int z = 0, c = 0;
        while (z < x) {
            cin >> l[z];
            z++;
        }

        z = 0;
        while (z < x) {
            cin >> r[z];
            z++;
        }
        for (z = 0; z < x; z++) {
            int m = 0;
            for (int f = 0; f < x; f++) {
                if (l[z] == r[f]) {
                    r[f] = 0;
                    m++;
                    break;
                }
            }
            if (m == 0) {
                c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}
void solve6() {
    int n, b;
    cin >> n >> b;
    int res = n / b;

    int x[3] = {abs(res - 1) * b, res * b, (res + 1) * b};
    int y[3] = {abs(n - (abs(res - 1) * b)), abs(n - (res * b)), ((res + 1) * b) - n};

    int z = 0, min = 0;

    while (z++ < 2) {
        if (y[z] < y[min]) 
            min = z;
        if (y[z] == y[min]) {
            if (x[z] > x[min])
                min = z;
        }
    }
    cout << x[min];
    return 0;
}
void solve7() {
    int n, v, x, m;
    cin >> n >> v;
    
    int yy[n], d = 0;
    while (d++ < n)
        yy[d - 1] = 1;

    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < x; j++) {
            cin >> m;
            if (v > m)
                yy[i] = 0;
        }
    }
    int z = 0, c = 0, r = -1;
    while (z++ < n) {
        if (yy[z - 1] == 0)
            c++;
        if (c == 1 && r == -1)
            r = z - 1;
    }
    cout << c << endl;
    if (c > 0) {
        cout << r + 1;
        z = 0;
        while (z++ < n) {
            if (z - 1 == r)
                continue;
            if (yy[z - 1] == 0)
                cout << " " << z;
        }
    }
    return 0;
}
void solve8() {
    int z, f = 0;
    sd: while (cin >> z) {
        for (int y = 2; y < 35; y++) {
            f = 0;
            for (int x = 2; x <= y && f < z; x++) {
                f = pow(x, y) + pow(y, x);
                if (f == z) {
                    cout << "YES" << endl << x << " " << y << endl;
                    goto sd;
                }
            }
        }
        cout << "NO" << "\n";
    }
    return 0;
}
