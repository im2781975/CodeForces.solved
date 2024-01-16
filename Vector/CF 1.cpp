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
