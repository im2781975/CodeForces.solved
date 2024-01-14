int x[12];
int y = 0;

while (y++ < 12)
    cin >> x[y - 1];

cin >> y;

int min = 22, mini = 0, minj = 0, i = 0, j = 0, po = 0;

for (i = 0; i < 11; i++) {
    for (j = i + 1; j < 12; j++) {
        if (x[i] + x[j] > y) {
            po++;
            if (((i - 0) + (j - 0)) < min) {
                min = (i - 0) + (j - 0);
                mini = i;
                minj = j;
            }
        }
    }
}

if (po == 0)
    cout << "NULL";
else
    cout << mini + 1 << " " << minj + 1;

char x[10];
int f = 0, y = 0;

cin >> x;

while (y++ < 10)
    if (x[y - 1] == 'F')
        f++;

if (f == 1 || f == 2 || f == 5 || f == 8 || f == 9)
    cout << "NO" << endl;
else
    cout << "YES" << endl;
---
    long long x[3], c = 0;
int y = 0;

while (y++ < 3) cin >> x[y - 1];

y = 0;
int min = 0;

while (y++ < 3) {
    if (x[min] > x[y]) min = y;
}

int ff = 0;
float ffs = x[min], sds = 10;

while (ffs > 10) {
    ffs /= 10;
    ff++;
}

ffs = pow(sds, ff - 1);
y = 0;

while (y++ < 3) x[y - 1] -= ffs;

while (true) {
    if (x[0] == x[1] && x[0] == x[2]) {
        c = c + x[0];
        break;
    }

    if (x[0] > x[1] && x[0] > x[2]) {
        swap(x[0], x[2]);
        if (x[0] > x[1]) swap(x[0], x[1]);
    }

    if (x[0] > x[1] && x[0] <= x[2]) {
        swap(x[0], x[1]);
    }

    if (x[0] > x[2] && x[0] <= x[1]) {
        swap(x[0], x[2]);
        swap(x[1], x[2]);
    }

    if (x[0] <= x[1] && x[0] <= x[2] && x[1] > x[2]) {
        swap(x[2], x[1]);
    }

    if (x[0] == 0 && x[1] == 0) break;

    if (x[0] + x[1] + x[2] > 3) {
        x[2] -= 2;
        x[1] -= 1;
        c++;
    } else {
        if (x[0] + x[1] + x[2] == 3) {
            c++;
            break;
        } else {
            break;
        }
    }
}

cout << c + ffs << endl;

