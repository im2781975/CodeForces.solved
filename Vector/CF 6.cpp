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

int ll_fin(int n, map<vector<vector<int>>, int> &m, vector<vector<int>> a) {
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
}

int main() {
    int n; // Assuming you get the value of n from somewhere
    vector<vector<int>> a(n, vector<int>(n, 0)); // Initialize a 2D vector of size n x n, you can modify this based on your requirements

    // Populate the 2D vector 'a' with values, you can modify this based on your requirements

    map<vector<vector<int>>, int> memo; // Memoization map

    int result = ll_fin(n, memo, a);

    cout << "Result: " << result << endl;

    return 0;
}

