#include<bits/stdc++.h>
using namespace std;
void solve7() {
    int n;
    cin >> n;
    map<int, int> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    bool ans = false;
    for (auto i : m) {
        if (i.second >= 3) {
            ans = true;
            cout << i.first << endl;
            break;
        }
    }
    if (!ans) {
        cout << -1 << endl;
    }
}

void solve8() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (m[arr[i]]) {
            if (m[x * arr[i]]) {
                m[x * arr[i]]--;
                m[arr[i]]--;
            } else {
                ans++;
                m[arr[i]]--;
            }
        }
    }
    cout << ans << "\n";
}
void solve9()
{
    // https://codeforces.com/contest/1702/problem/D
    string s, ns = "", op;
    int n, c = 0, news = 0;
    cin >> s >> n;
    int nn = n;
    string temp = s;
    map<char, int> m;
    sort(s.begin(), s.end());
    for (int j = 0; j < s.length(); j++)
    {
        if ((s[j] - 'a' + 1) <= n)
        {
            ns += s[j];
            n -= (s[j] - 'a' + 1);
        }
    }
    for (int i = 0; i < ns.length(); i++)
        m[ns[i]]++;
    for (int i = 0; i < temp.length(); i++)
    {
        if (m[temp[i]] > 0)
        {
            op += temp[i];
            m[temp[i]] -= 1;
            c++;
        }
        if (c == ns.length())
            break;
    }
    cout << op << "\n";
}
void solve10()
{
    // https://codeforces.com/contest/1702/problem/C
    int n, q;
    cin >> n >> q;
    // vector<int>stations(n+1);
    // vector<pair<int, int>>queries(q+1);
    int last = n - 1;
    map<int, int> m;
    map<int, int> m2;
    map<int, int> l;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        m2[x]++;
        if (m2[x] == 1)
        {
            m[x] = i;
            l[x] = i;
        }
    }
    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;

        if (l[b] && m[a] && m[a] < l[b])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
void solve11()
{
    int n;
    cin >> n;
    string op = "";
    int t = 0;
    string s;
    cin >> s;
    map<string, int> m;
    for (int i = 1; i < n; i++)
    {
        string temp;
        temp += s[i - 1];
        temp += s[i];
        m[temp]++;
        if (t < m[temp])
        {
            t = m[temp];
            op = temp;
        }
        temp = "";
    }
    cout << op << "\n";
}
void solve12() {
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (m[arr[i]]) {
            if (m[x * arr[i]]) {
                m[x * arr[i]]--;
                m[arr[i]]--;
            } else {
                ans++;
                m[arr[i]]--;
            }
        }
    }
    cout << ans ;
}
int &maxe(int &a, int &b)
{
    return a > b ? a : b;
}
void hard_problem()
{
    int n, display = 0;
    cin >> n;
    map<string, int> result = {{"Bessie", 7}, {"Mildred", 7}, {"Elsie", 7}};
    int *temp = &result["Bessie"];
    int temp2 = 7;
    vector<pair<int, string>> cows(n);
    vector<pair<int, int>> changeAmt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i].first >> cows[i].second >> changeAmt[i].second;
        changeAmt[i].first = cows[i].first;
    }

    sort(cows.begin(), cows.end());
    sort(changeAmt.begin(), changeAmt.end());

    // cout << "a7a " << "\n";
    // for (int z = 0; z < n ; z++){
    //   cout << cows[z].first << " " << cows[z].second << " " << changeAmt[z].second << "\n";
    // }
    for (int j = 0; j < n; j++)
    {
        // temp = maxe(  result[cows[0].second] , maxe(result[cows[1].second] , result[cows[2].second] ) );
        result[cows[j].second] += changeAmt[j].second;

        if (&result[cows[j].second] == temp)
        {
            if (temp != &result[cows[j].second])
            {
                display++;
            }
            temp = &result[cows[j].second];
            temp2 = result[cows[j].second];
        }
        cout << cows[j].second << " display : " << display << " value -->  " << result[cows[j].second] << "\n";
    }
    cout << display;
}
void solve_div4C()
  {
    int n;
    int temp = 0;
    cin >> n;
    string v[3][n];
    map<string, int> v2;
    string t = "";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> v[i][j];
        v2[v[i][j]]++;
      }
    }
    for (int i = 0; i < 3; i++)
    {
      for (int z = 0; z < n; z++)
      {
        if (v2[v[i][z]] == 2)
          temp += 1;
        if (v2[v[i][z]] == 1)
          temp += 3;
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << "\n";
  }
/* for(int i = 0 ; i < 3 ; i++){
      for(int j = 0;  j < n ; j++){
      if(v2[i][j] == 2) temp +=1;
      if(v2[i][j] == 1) temp +=3;
      }
      cout << temp << " ";
    }
    */
void solve_LLRR()
  {
    ll n, temp = 0, temp1 = 0, temp2 = 0;
    map<char, int> m;
    cin >> n;
    string s;
    cin >> s;
    int counter = 0;
    int idx = 0;
    int idx2 = 1;
    int size = n / 2;
    s[0] = 'R';
    for (int j = 0; j < n; j++)
    {
      if (j <= size)
      {
        s[n - j] = 'L';
        // cout << s[n-j-1] << " "  << n-j-1;
      }
      if (j > size)
      {
        s[j - (size + 1)] = 'R';
        // cout << s[j-size] << " " << j-size <<" ";
      }
      for (int z = 0; z < n; z++)
      {
        if (s[z] == 'R')
          temp += (n - 1) - z;
        else
          temp += z;
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << "\n";
    // cout << idx;
    // cout << s;
  }
