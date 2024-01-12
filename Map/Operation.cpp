#include<bits/stdc++.h>
using namespace std;
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
