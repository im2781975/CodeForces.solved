#include <bits/stdc++.h>
using namespace std;
void PrimeFactor() {
    int n, cnt = 0;
    cin >> n;
    vector<int> prime;
    while (n % 2 == 0) {
        if (cnt == 0)
            prime.push_back(2);
        n /= 2;
        cnt = 1;
    }
    for (int i = 3; i * i <= n; i = i + 2) {
        cnt = 0;
        while (n % i == 0) {
            if (cnt == 0)
                prime.push_back(i);
            cnt = 1;
            n = n / i;
        }
    }
    if (n > 2)
        prime.push_back(n);
    for (int i = 0; i < prime.size(); i++)
        cout << prime[i] << " ";
    return 0;
}
void FindCombination(vector<char> ch, int n, int k, vector<string> &total, string temp, int count) {
    if (count == n) {
        if (temp.size() == k) {
            total.push_back(temp);
        }
        return;
    }
    FindCombination(ch, n, k, total, temp, count + 1);
    temp += sv[count];
    FindCombination(ch, n, k, total, temp, count + 1);
    return;
}
int main() {
    vector<char> ch = {'a', 'b', 'c'}; 
    int n = ch.size(); 
    int k = 2; 
    vector<string> total;
    string temp = "";
    int count = 0;

    FindCombination(ch, n, k, total, temp, count);

    for(int i=0; i<total.size(); i++)
        cout << total[i] << " ";
    return 0;
}
int fin(int n, map<vector<vector<int>>, int> &m, vector<vector<int>> a) {
    if (m.count(a) == 1) {
        return m[a];
    }
    if (n == 1) {
        if (a[0][0] == 1) {
            m[a] = 1;
            return 1;
        } else {
            m[a] = 0;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        if (sum == 0) {
            m[a] = 0;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[j][i];
        }
        if (sum == 0) {
            m[a] = 0;
            return 0;
        }
    }
    vector<vector<int>> b(n - 1, vector<int>(n - 1));
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                x = i;
                y = j;
                goto l;
            }
        }
    }
    l:
    cout << x << " " << y << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == x || j == y) {
                continue;
            }

            if (i < x && j < y) {
                b[i][j] = a[i][j];
            } else if (i < x && j > y) {
                b[i][j - 1] = a[i][j];
            } else if (i > x && j < y) {
                b[i - 1][j] = a[i][j];
            } else {
                b[i - 1][j - 1] = a[i][j];
            }
        }
    }
    a[x][y] = 0;
    int ans1 = fin(n, m, a);
    int ans2 = fin(n - 1, m, b);

    cout << m[a] << endl;
    a[x][y] = 1;
    m[a] = ans1 + ans2;
    return m[a];
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> c(n, vector<int>(n));
    map<vector<vector<int>>, int> memo;
    int result = fin(n, memo, c);
    cout << "Result: " << result << endl;
    return 0;
}
