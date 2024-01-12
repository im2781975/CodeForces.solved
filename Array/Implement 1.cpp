void chessAndBishop()
  {
    ll n, m;
    cin >> n >> m;
    ll chess[n][m];
    ll maxr = 0;
    ll maxrr = 1000;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> chess[i][j];
        // maxl[i-j] = chess[i][j];
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= m; j++)
      {
        // maxl[i-j] = chess[i][j];
        maxr += chess[i + j][j];
      }
      maxrr = min(maxrr, maxr);
      maxr = 0;
    }
    cout << maxrr << "\n";
    //  for(int i = 0; i < n ; i++){
    //   for(int j =0 ; j < m ; j++){
    //     result = max(result, maxr[i][j]);
    //   }
    //   }
    //   cout << result << "\n";
  }
void solve3()
  {
    // https://codeforces.com/contest/1772/problem/B
    bool flag = false;
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        cin >> arr[i][j];
      }
    }
    if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
    {
      cout << "YES"
          << "\n";
    }
    else
    {
      for (int i = 0; i < 4; i++)
      {
        int temp1 = arr[1][0];
        int temp2 = arr[1][1];
        int temp3 = arr[0][0];
        int temp4 = arr[0][1];
        arr[0][0] = temp1;
        arr[0][1] = temp3;
        arr[1][0] = temp2;
        arr[1][1] = temp4;
        if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
        {
          cout << "YES"
              << "\n";
          flag = true;
          break;
        }
      }
      if (!flag)
        cout << "NO"
            << "\n";
    }
  }
