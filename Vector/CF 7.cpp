void solve()
{
    int H, W;
    cin >> W >> H;
    int a[20][20];
    vector< vector<int> > map;
    map.resize(H);
    for(int i = 0; i < H; ++i)
        map[i].resize(W); 

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++)
            cin >> map[i][j];
    }
    cout << endl;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++)
        {
            cout << map[i][j] << " ";
            a[i][j] == map[i][j];
        }
        cout<<endl;
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++)
        cout << a[i][j] << " ";
        //a[i][j] == map[i][j];
        cout<<endl;
    }
    long long int num1 = 1,num2 = 1,num3 = 1,maxim = 1;
    for (int i = 0;i<H;i++){
        for (int j = 0; j< W;j++){
            num1 = map[i][j] * map[i+1][j+1] * map[i+2][j+2] * map[i+3][j+3];
            num2 = map[i][j] * map[i][j+1] * map[i][j+2] * map[i][j+3];
            num3 = map[i][j] * map[i+1][j] * map[i+2][j] * map[i+3][j];
            if (num1>maxim)
                maxim = num1;
            if (num2>maxim)
                maxim = num2;
            if (num3>maxim)
                maxim = num3;
        }
    }
    cout << endl;
    cout<<maxim;
}
void solve()
{
    int b[19][19];
    vector < vector<int> > a;
    a.resize(19);
    for (int i = 0;i<=19;++i)
        a[i].resize(19);
    for(int j = 0;j<=19;j++){
        for(int i = 0;i<=19;i++)
            cin>>a[j][i];
    }
    /*a[0][19]= 8;
    a[1][19]= 0;
    a[2][19]= 65;
    a[3][19]= 91;
    a[4][19]= 80;
    a[5][19]= 50;
    a[6][19]= 70;
    a[7][19]= 21;
    a[8][19]= 72;
    a[9][19]= 95;
    a[10][19]= 92;
    a[11][19]= 57;
    a[12][19]= 58;
    a[13][19]= 40;
    a[14][19]= 66;
    a[15][19]= 69;
    a[16][19]= 36;
    a[17][19]= 16;
    a[18][19]= 54;
    a[19][18] = 67;
    a[19][19] = 48;*/
    for (int i = 0;i<=18;i++)
        cin>>a[i][19];
    cout<<endl;
    for(int i = 0;i<=19;i++){
        for(int j = 0;j<=19;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<a[19][18]<<endl;
