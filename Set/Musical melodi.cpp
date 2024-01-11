https://codeforces.com/contest/1833/problem/A
void musical_puzzle()
{
    int n;
    int result = 0;
    string str;
    char temp;
    cin >> n;
    set<char> s({});

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cin >> str;
    
        for (int j = 1; j < str.length(); j++)
        {
            temp = str[j] + str[j - 1];
            cout << temp << endl;
            s.insert(temp);
        }
        temp = 0;
        for (int z = 0; z < s.size(); z++)
        {
            result++;
        }
        cout << result << "\n";
    }
}
