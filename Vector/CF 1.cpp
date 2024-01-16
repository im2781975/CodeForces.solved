#include<bits/stdc++.h>
using namespace std;
void solveDiv2A()
{
    int n;
    bool flag=true;
    int tmp=INT_MAX;
    cin >>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
        cin >> vec[i];
    for(int i=1; i<n; i++)
    {
        if(vec[i]< vec[i-1])
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        for(int i=1; i<n; i++)
        {
            tmp=min(tmp, v[i]-vec[i-1]);
        }
        cout <<tmp/2 +1;
    }
    else
        cout << 0;
}
void solveContest1790ProblemB()
{
    int n, s, r, temp = 0, temp2 = 1;
    cin >> n >> s >> r;
    temp = r;
    vector<int> v;
    vector<int> sides = {1, 2, 3, 4, 5, 6};
    vector<int> result;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 5; j >= 0; j--)
        {
            while (r >= sides[j] && sides[j] <= s - r)
            {
                r -= sides[j];
                result.pb(sides[j]);
                temp2++;
            }
        }
    }
    sort(result.rbegin(), result.rend());
    for (int i = 0; i < n - 2; i++)
    {
        while (result[i] > 1)
        {
            if (result.size() == n - 1)
                break;
            result[i]--;
            result.pb(1);
        }
    }
    result.push_back(s - temp);
    for (auto j : result)
    {
      cout << j << " ";
    }
    cout << "\n";
}
