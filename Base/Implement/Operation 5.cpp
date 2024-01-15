long long x = 0, z = 0, f = 0, ie = -1, io = -1, so = 0, se = 0;
cin >> x;
long long *e = new long long[x];
long long *o = new long long[x];

while (z++ < x)
{
    cin >> f;
    if (f % 2 == 0)
        e[++ie] = f;
    else
    {
        o[++io] = f;
    }
}

z = 0;
if (io > -1)
{
    cout << o[io];
    so++;
    while (io-- > 0)
    {
        cout << " " << o[io];
        so++;
    }
}
z = 0;
if (ie > -1)
{
    if (so > 0)
        cout << " ";
    cout << e[z];
    se++;
    while (z++ < ie)
    {
        cout << " " << e[z];
        se++;
    }
}
z = 0;
cout << endl;
----
    long double l = 0, r = 0, x = 0, y = 0;
cin >> l >> r;
if (l < 1 || r < 1)
    return 0;
x = l * l;
y = 0.5 * r * r;
if (x <= y)
    cout << "YES" << endl;
else
    cout << "NO" << endl;
-----
    int n = 0, x = 0, c = 0, s = 0;
char y[3];

cin >> n;

while (c++ < n) {
    cin >> y;
    s = 0;

    while (s++ < 2) {
        if (y[s - 1] == '+') {
            x++;
            break;
        }

        if (y[s - 1] == '-' || y[s - 1] == '�') {
            x--;
            break;
        }
    }
}

cout << x << endl;

