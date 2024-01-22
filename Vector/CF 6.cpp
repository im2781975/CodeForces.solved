#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

vector<ll> primeFactors(ll n) {
    vector<ll> v;
    int counter = 0;

    while (n % 2 == 0) {
        if (counter == 0) {
            v.push_back(2);
        }
        n = n / 2;
        counter = 1;
    }

    for (ll i = 3; i <= sqrtl(n); i = i + 2) {
        counter = 0;
        while (n % i == 0) {
            if (counter == 0) {
                v.push_back(i);
            }
            counter = 1;
            n = n / i;
        }
    }

    if (n > 2) {
        v.push_back(n);
    }

    return v;
}

int main() {
    ll num;
    cout << "Enter a number: ";
    cin >> num;

    vector<ll> factors = primeFactors(num);

    cout << "Prime factors of " << num << " are: ";
    for (ll factor : factors) {
        cout << factor << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

void findCombination(std::vector<char> sv, int dis, int k, std::vector<std::string> &total, std::string temp, int count) {
    if (count == dis) {
        if (temp.size() == k) {
            total.push_back(temp);
        }
        return;
    }
    findCombination(sv, dis, k, total, temp, count + 1);
    temp += sv[count];
    findCombination(sv, dis, k, total, temp, count + 1);
    return;
}

int main() {
    std::vector<char> sv = {'a', 'b', 'c'}; // Example character vector
    int dis = sv.size(); // Example distance
    int k = 2; // Example length
    std::vector<std::string> total;
    std::string temp = "";
    int count = 0;

    findCombination(sv, dis, k, total, temp, count);

    // Displaying the combinations
    for (const std::string &str : total) {
        std::cout << str << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

ll fin(int n, map<vector<vector<int>>, int> &m, vector<vector<int>> a) {
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
    ll ans1 = fin(n, m, a);
    ll ans2 = fin(n - 1, m, b);

    cout << m[a] << endl;

    a[x][y] = 1;
    m[a] = ans1 + ans2;
    return m[a];
}

int main() {
    int n;
    // Assuming 'n' is input by the user or obtained in some way
    // Also, assuming 'c' is defined somewhere in your code

    // Example usage:
    vector<vector<int>> c(n, vector<int>(n));
    map<vector<vector<int>>, int> memo;
    ll result = fin(n, memo, c);
    cout << "Result: " << result << endl;

    return 0;
}
