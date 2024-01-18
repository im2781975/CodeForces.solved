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
