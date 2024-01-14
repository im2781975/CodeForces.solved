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

