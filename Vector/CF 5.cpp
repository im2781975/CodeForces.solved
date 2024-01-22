#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximum(const vector<int>& vec)
{
    return *max_element(vec.begin(), vec.end());
}
int minimum(const vector<int>& vec)
{
    return *min_element(vec.begin(), vec.end());
}
int sum(const vector<int>& vec)
{
    int s = 0;
    for (int i = 0; i < vec.size(); i++)
        s += vec[i];
    return s;
}
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec[i] = x;
    }
    int x =0, ans = -1;
    while(maximum(vec) <= k)
    {
        sort(vec.begin(), vec.end());
        vec[1] += vec[0];
        ans+=1;
        k--;
    }
    cout << ans<< " ";
    for( int i=0; i<=n; i++)
    {
        if(vec[i]%2==0)
            x =i;
    }
    cout << x;
    sort(vec.begin(), vec.end());

    if (minimum(vec) != 1)
        cout << maximum(vec) << "\n";
    else
        cout << minimum(vec) + 1 << "\n";

    int cnt = 0;
    while (sum(vec) > n)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }

        cout << "\nSum of the vector is: " << sum(vec);
        cout << "\nMinimum element is: " << minimum(vec) << "\n";

        for (int i = 0; i < n; i++)
        {
            if (vec[i] > minimum(vec))
                vec[i] = vec[i] - minimum(vec);
        }
        cnt += 1;
        break;
    }
    cout << cnt + 1;
    return 0;
}
int Sum(const vector<int>& v) {
    int result = 0;
    for (int val : v) {
        result += val;
    }
    return result;
}

int element(vector<int>& v) {
    int lastElement = v.back();
    v.pop_back();
    return lastElement;
}
int main() {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << "sum of the consecutive is: " << sum;
    if (sum % 2 != 0)
        cout << "NO" << "\n";
    else {
        vector< int >vec;
        for (int i = 1; i <= n; i++)
            vec.push_back(i);

        cout << "\n";
        int a = Sum(vec) / 2;
        vector<int> set1;
        vector<int> set2;

        if (n % 2 != 0) {
            set1.push_back(vec[n - 1]);
            vec.pop_back();
            set2.push_back(vec[n - 2]);
            vec.pop_back();

            for (int i = 0; i < vec.size(); i++) {
                if (Sum(set1) == a || Sum(set2) == a) {
                    break;
                }
                set2.push_back(element(vec));
                vec.pop_back();
                set1.push_back(element(vec));
                vec.pop_back();
            }

            if (Sum(set1) != a) {
                for (int i = 0; i < vec.size(); i++)
                    set1.push_back(vec[i]);
            }
            if (Sum(set2) != a) {
                for (int i = 0; i < vec.size(); i++)
                    set2.push_back(vec[i]);
            }
        } else {
            int turn = 1;
            int start = 1;
            int last = n;
            while (start < last) {
                if (turn) {
                    set1.push_back(start);
                    set1.push_back(last);
                    turn = 0;
                } else {
                    set2.push_back(start);
                    set2.push_back(last);
                    turn = 1;
                }
                start++;
                last--;
            }
        }
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for (int i = 0; i < set1.size(); i++)
            cout << set1[i] << " ";
        cout << endl;
        cout << set2.size() << endl;
        for (int i = 0; i < set2.size(); i++)
            cout << set2[i] << " ";
    }
    return 0;
}
void solve() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());

    int count = 0;
    int m = v[0];
    int *p;
    p = new int[m + 1];

    for (int i = 0; i < m + 1; i++)
        p[i] = 0;

    for (int i = 0; i < n; i++) {
        p[v[i]]++;
    }

    for (int i = 0; i < m + 1; i++) {
        if (p[i] != 0)
            count++;
    }
    cout << count << endl;
    delete[] p;
    return 0;
}
int main() {
    int n;
    cin >> n;
    int cont = 0;
    while (n--) {
        vector<int> v;
        int x;
        int a = 0;
        for (int i = 0; i < 3; i++) {
            cin >> x;
            v.push_back(x);
            a += x;
        }

        int sumOfElements = sum(v);
        if (sumOfElements >= 2)
            cont += 1;
    }
    cout << cont << std::endl;
    return 0;
}

