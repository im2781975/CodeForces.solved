#include <bits/stdc++.h>
using namespace std;

int main() {
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
#include <iostream>
#include <vector>
#include <string>

void findCombination(vector<char> sv, int dis, int k, vector<string> &total, string temp, int count) {
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
    vector<char> sv = {'a', 'b', 'c'}; 
    int dis = sv.size(); 
    int k = 2; 
    vector<string> total;
    string temp = "";
    int count = 0;

    findCombination(sv, dis, k, total, temp, count);

    for (const string &str : total)
        cout << str << " ";
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
#include <iostream>
#include <vector>

using namespace std;

void ta(int x, int y, int n, int m, vector<vector<char>> &a, vector<vector<int>> &b, int count, string s, string *c);

int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m));
    vector<vector<int>> b(n, vector<int>(m, -1));

    cout << "Enter the grid:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    int startX, startY;
    cout << "Enter the starting position (x, y): ";
    cin >> startX >> startY;

    string result;
    ta(startX, startY, n, m, a, b, 0, "", &result);

    if (result.empty()) {
        cout << "No path found to the destination 'B'.\n";
    } else {
        cout << "Path to destination 'B': " << result << "\n";
    }

    return 0;
}

void ta(int x, int y, int n, int m, vector<vector<char>> &a, vector<vector<int>> &b, int count, string s, string *c) {
    if (x < 0 || y < 0 || x >= n || y >= m) {
        return;
    }
    if (b[x][y] <= count && b[x][y] != -1) {
        return;
    }

    if (a[x][y] == '#') {
        b[x][y] = -1;
        return;
    }
    b[x][y] = count;

    if (a[x][y] == 'B') {
        *c = s;
        return;
    }
    ta(x + 1, y, n, m, a, b, count + 1, s + "D", c);
    ta(x - 1, y, n, m, a, b, count + 1, s + "U", c);
    ta(x, y + 1, n, m, a, b, count + 1, s + "R", c);
    ta(x, y - 1, n, m, a, b, count + 1, s + "L", c);
    return;
}
#include <iostream>
#include <vector>
#include <algorithm>

int olusola(int n, int x, int y) {
    std::vector<int> v(4);

    v[0] = x;
    v[1] = y;
    v[2] = n + 1 - x;
    v[3] = n + 1 - y;

    std::sort(v.begin(), v.end());

    return v[0];
}

int main() {
    int n, x, y;
    
    // Taking input for n, x, and y
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;

    // Calling the olusola function and printing the result
    int result = olusola(n, x, y);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve_tc() {
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    int me = v[k - 1];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            continue;
        }
        if (v[i] >= me) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    solve_tc(); // Call the function to execute the provided code logic
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& arr, int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    std::vector<int> a = { /* Your values for vector a */ };
    std::vector<int> b = { /* Your values for vector b */ };
    int n = a.size();

    std::vector<int> a1 = a;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        int index = binarySearch(a, 0, n - 1, a1[i]);
        std::cout << b[index] << " ";
    }
    std::cout << std::endl;

    return 0;
}
#include <iostream>

int main() {
    // Assuming you have 'n', 'ans', 'a', and 'b' declared and initialized

    int n = /* your value */;
    int ans = /* your initial value */;
    int a[n]; // Assuming 'a' is an array of integers
    int b[n]; // Assuming 'b' is an array of integers

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        
        for (int j = i; j < n; j++) {
            if (b[i] < a[j]) {
                cnt++;
            } else {
                break;
            }
        }

        ans = ans % 1000000007;
        cnt = cnt % 1000000007;
        ans = (ans * cnt) % 1000000007;
    }

    std::cout << ans << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int cnt = 0;
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "ME" << endl;

    int i = 0, j = n - 1;
    vector<int> v1;

    int diff = 0, diff1 = 1;
    while (i <= j) {
        if (v[i] != v[j]) {
            diff = abs(v[i] - v[j]);
            diff1 = min(v[i], v[j]);
            break;
        }
        i++;
        j--;
    }

    if (diff == 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> v2(n);
    vector<int> v3(n);

    for (int i = 0; i < n; i++) {
        v2[i] = v[i] % diff;
        if (diff1 != 0) {
            v3[i] = v[i] % diff1;
        } else {
            v3[i] = 0;
        }
    }

    i = 0;
    j = n - 1;

    bool og1 = false, og2 = false;
    while (i <= j) {
        if (v2[i] != v2[j]) {
            og1 = true;
        }
        if (v3[i] != v3[j]) {
            og2 = true;
        }
        i++;
        j--;
    }

    if (og1 && og2) {
        cout << 1 << endl;
        return 0;
    } else if (og1) {
        cout << diff1 << endl;
    } else if (og2) {
        cout << diff << endl;
    }

    while (i <= j) {
        if ((v1[i] % diff) != 0) {
            // Complete this part as per your logic
        }
    }

    sort(v1.begin(), v1.end());

    if (v1[0] == v1[v1.size() - 1]) {
        cout << v1[0] << endl;
        return 0;
    } else {
        cout << 1 << endl;
        return 0;
    }
}
#include <iostream>
#include <vector>
#include <cmath>

#define f0r(i, n) for (int i = 0; i < n; ++i)

using namespace std;

void solve_me()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int n1 = ceil(double(n) / 2);

    int a = n1;
    for (int i = 0; i < n; i += 2)
    {
        v[i] = a;
        a--;
    }

    int b = n;
    for (int i = 1; i < n; i += 2)
    {
        v[i] = b;
        b--;
    }

    f0r(i, n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    solve_me();
    return 0;
}
void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    vector<int> v1(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    int i = n-1, j = n-1;

    while(i >= 0) {
        int temp = v1[j];

        if(temp != v[i]) {
            i--;
        } else if(temp == v1[j]) {
            ans++;
            j--;
            i--;
        }
    }

    cout << n - ans << endl;
}
#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve_tc() {
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    vector<vector<int>> v;
    v.push_back(v1);

    vector<vector<int>> v3(k + 1, vector<int>(2));

    int ans = 0;
    int k1 = k;
    int cnt1 = 1;
    v3[0][0] = 1;
    v3[0][1] = v1[0];

    while (k1--) {
        cin >> v3[cnt1][0] >> v3[cnt1][1];
        cnt1++;
    }

    int k2 = k + 1;
    int cnt = 0;

    while (cnt < k) {
        v1[(v3[cnt][0]) - 1] = v3[cnt][1];

        int cnt2 = cnt + 1;
        vector<int> v2 = v1;

        while (cnt2 < k2) {
            vector<int> v2 = v1;
            v2[(v3[cnt2][0]) - 1] = v3[cnt2][1];

            set<int> op;

            for (int me : v1) {
                op.insert(me);
            }

            for (int me : v2) {
                op.insert(me);
            }

            ans += op.size();
            cnt2++;
        }

        cnt++;
    }

    cout << ans << endl;
}

int main() {
    solve_tc();
    return 0;
}
#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Function to perform the required operations
int performOperations(const vector<int>& v1, vector<vector<int>>& v3, int k) {
    vector<int> v2 = v1;
    int ans = 0;

    for (int cnt = 0; cnt < v3.size(); cnt++) {
        int pos = v3[cnt][0];
        int value = v3[cnt][1];

        v2[pos - 1] = value;
        v2[(v3[cnt][0]) - 1] = v3[cnt][1];

        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k + 1; j++) {
                set<int> op;
                for (int me : v1) {
                    op.insert(me);
                }
                for (int me : v2) {
                    op.insert(me);
                }
                ans += op.size();
            }
        }
    }

    return ans;
}

int main() {
    int pos, value, k;

    // Assuming v1 is declared and initialized before this point
    vector<int> v1; 

    // Assuming v3 is declared and initialized before this point
    vector<vector<int>> v3;

    cin >> pos >> value >> k;
    
    // Assuming v is declared and initialized before this point
    vector<vector<int>> v;

    // Perform necessary operations
    int result = performOperations(v1, v3, k);

    // Print the result or use it as needed
    cout << "Result: " << result << endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> c(n, 0);
    vector<int> b(n + m + 1, 0);

    cout << endl;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    cout << endl;

    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;

    for (int i = 0; i < c.size(); i++)
        cout << c[i] << " ";
    cout << endl;

    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        b[a[x]] += i - c[x];
        c[x] = i;
        a[x] = y;

        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;

        for (int i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << endl;

        for (int i = 0; i < c.size(); i++)
            cout << c[i] << " ";
        cout << endl;
    }

    m++;
    for (int i = 0; i < n; i++)
        b[a[i]] += m - c[i];

    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";

    int ans = 0;
    for (int i = 0; i < b.size(); i++) {
        ans += ((b[i] * (m - b[i])) + ((b[i] * (b[i] - 1)) / 2));
        cout << ans << " ";
    }

    cout << endl;
    cout << ans << endl;
    cout << endl;

    return 0;
}
