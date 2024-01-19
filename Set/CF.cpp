#include<bits/stdc++.h>
using namespace std;
void solve_b_div4()
{
    int n;
    cin >> n;
    set<int> s({});
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.emplace(x);
    }
    for (auto j : s)
        ans++;
    if (ans == n)
        cout << "YES\n";
    else
        cout << "NO\n" ;
}
void solve_div3()
{
    set<char> unique_chars;
    int n;
    cin >> n;
    string s;
    cin >> s;
    string tmp = "";

  // Convert all characters to lowercase
    for (int i = 0; i < n; i++)
        s[i] = tolower(s[i]);

  // Create a string with unique characters
    for (int i = 0; i < n; i++)
        tmp += s[i];
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

  // Check if the unique characters form the string "meow"
    if (tmp == "meow")
        cout << "YES\n";
    else
        cout << "NO\n";
}
void diff() {
    vector<int> vec = {1, 3, 7, 10, 15};
    int n = vec.size();
    set<int> diff;
    for (int i = 0; i < n - 1; i++)
        diff.insert(vec[i + 1] - vec[i]);
    cout << diff.size();
}
void solve8()
{
    // https://codeforces.com/contest/1702/problem/B
    string s;
    cin >> s;
    set<char> set({});
    int c = 0;
    int cpp = 0;
    int it = 0;
    for (int i = 0; i < s.length(); i++)
    {
        map<char, int> m;
        string ns;
        for (int j = i; j < s.length(); j++)
        {
            if (m[s[j]] == 0)
            {
                c++;
                m[s[j]]++;
            }
            if (c == 3)
            {
                if (m[s[j + 1]] == 0)
                {
                    cpp++;
                    c = 0;
                    i = j;
                    break;
                }
            }
            else
                i = j;
        }
    }
    if (c > 0)
        c = 1;
    cout << c + cpp << "\n";
}
void musical_puzzle()
{
    //https://codeforces.com/contest/1833/problem/A
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
