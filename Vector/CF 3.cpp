#include<bits/stdc++.h>
using namespace std;
void solve1()
{
    // https://codeforces.com/contest/1843/problem/A
    int size;
    cin >> size;
    vector<int> v(size);
    int subtracts = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (size % 2 == 0)
    {
        for (int j = size - 1, i = 0; j >= size / 2, i < size / 2; j--, i++)
                sum += v[j] - v[i];
    }
    else
    {
        for (int j = size - 1, i = 0; j > size / 2, i < size / 2; j--, i++)
                sum += v[j] - v[i];
    }
    cout << sum - subtracts << "\n";
}
void solve2()
{
    // https://codeforces.com/contest/1843/problem/B
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    int c = 0;
    int subarray = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += abs(v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            continue;
        for (int z = i; z < n; z++)
        {
            if (v[z] <= 0)
            {
                flag = false;
                i = z;
            }
            else
                break;
        }
        if (!flag)
        {
            subarray++;
            flag = true;
            c++;
        }
    }
    cout << sum << " " << subarray << "\n";
}
void solve4()
{
    //https://codeforces.com/contest/1772/problem/C
    int n, max;
    cin >> n >> max;
    int nmax = 1;
    int temp = 1;
    int sum = n;
    vector<int> v;
    while (nmax - 1 < max - n && n > 2)
    {
        v.push_back(nmax);
        temp++;
        nmax += temp;
        n--;
    }
    while (n > 0)
    {
      v.push_back(max);
      max--;
      n--;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] <<" ";
    cout << "\n";
    // cout << charac(v, v.size()) << "\n";
  }
