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

