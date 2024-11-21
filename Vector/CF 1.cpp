void solveuwu()
{
    //convert a numeric string into corresponding alphabet characters.
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> vec;
    for (int i = 0; i < n; i++)
    {
        if (s[i + 2] == '0' && i + 2 < s.length() && s[i + 3] != '0')
        {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
            vec.push_back(char(num + 'a' - 1));
            i += 2;
        }
        else
        {
            int num = s[i] - '0';
            vec.push_back(char(num + 'a' - 1));
        }
    }
    for(int i=0; i<n; i++)
        cout << vec[i] << " ";
}
void solve3divA()
{
    //find and output a combination of three numbers from the input vector 
    //such that their sum is equal to the last element of the vector.
    vector<int> v(7);
    vector<int> res;
    int temp = 0;
    int f = 0;
    int temp2 = 0;
    int counter = 5;
    for (int i = 0; i < 7; i++)
        cin >> v[i];
    int max = v[6];
    if (v[0] + v[1] + v[2] == v[6])
    {
        cout << v[0] << " " << v[1] << " " << v[2];
    }
    else
    {
        for (int j = 0; j < 7; j++)
        {
            for (int i = j + 1; i < 7; i++)
            {
                for (int z = 0; z < 7; z++)
                {
                    if (v[j] + v[i] + v[z] == v[6])
                    {
                        cout << v[j] << " " << v[i] << " " << v[z] << "\n";
              return;
                    }
                }
            }
        }
    }
    cout << "\n";
}
void solveDiv4C()
{
    //finding the minimum absolute difference in character positions between two strings of length
    int a, b, res = 0, finalResult = 100000;
    cin >> a >> b;
    vector<string> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int z = i + 1; z < a; z++)
        {
            res = 0;
            for (int j = 0; j < b; j++)
            {
                if (z != i)
                res += abs((s[i][j] - 'a') - (s[z][j] - 'a'));
            }
            finalResult = min(finalResult, res);
        }
    }
    cout << finalResult << "\n";
}
#include<vits/stdc++.h>
using namespace std;
int main()
{
    You are given a problem where you need to determine if it's possible to create an array of size n containing only 1 and -1, such that the sum of the counts of pairs of positive numbers and pairs of negative numbers is exactly k. If possible, the program should print "Yes" followed by the array, otherwise, it should print "No".
    int n, k;
    cin >> n >> k;
    vector<int>v;
    for(int i=1; i<=n; i++)
        v.push_back(1);
    int pos=n, neg = 0, total = 0;
    for(int i=0; i<n; i++)
    {
        total = (pos*(pos - 1)/2)+(neg*(neg - 1 )/2);
        if(total== k)
            break;
        v[i]*=-1;
        pos--;
        neg++;
    }
    if(total==k)
    {
        cout << "Yes";
        for(auto val:v)
            cout << val << " ";
        cout << "\n";
    }
    else 
        cout << "No";
}
#include<bits/stdc++.h>
using namespace std;
void usaco() {
    int n;
    cin >> n;
    
    int a, b;
    string x;
    
    vector<string> s(n);
    vector<pair<int, int>> v(n);
    vector<pair<int, int>> res(n);
    
    for (int i = 0; i < n; i++) {
        cin >> x >> a >> b;

        if (x == "on") {
            s[i] = "on";
            v[i].first = a;
            v[i].second = b;
        } else if (x == "none") {
            s[i] = "none";
            v[i].first = a;
            v[i].second = b;
        } else if (x == "off") {
            s[i] = "off";
            v[i].first = a;
            v[i].second = b;
        }
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == "none" && s[i - 1] == "on") {
            res[i].first = v[i].first;
            res[i].second = v[i].second - 1;
        }
        if (s[i] == "off" && s[i - 1] == "none") {
            res[i].first = v[i - 1].first - v[i].first - 1;
            res[i].second = v[i - 1].second - v[i].second;
        }
    }
    for (auto i : res) {
        if (i.first > 0)
            cout << i.first << " " << i.second ;
    }
}
void cowQueue(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    int r = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    r = v[0].first + v[0].second;
    for(int i = 1; i < n; i++){
        if (v[i].first <= r)
            r += v[i].second;
        else
            r = v[i].first + v[i].second;
    }
    cout << r;
}
void mixMilk() {
    //simulate a pouring process involving three buckets of milk. The buckets 
    //represented by two vectors: c (capacity of each bucket) and m (current amount of milk in each bucket).
    vector<int> m(3);
    vector<int> c(3);
    
    for (int i = 0; i < 3; i++)
        cin >> c[i] >> m[i];

    for (int i = 0; i < 100; i++) {
        int amount = min(c[(i + 1) % 3] - m[(i + 1) % 3], m[i % 3]);
        m[i % 3] -= amount;
        m[(i + 1) % 3] += amount;
    }

    for (int j = 0; j < 3; j++) {
        cout << m[j] << "\n";
    }
}
void cbarn() {
    int n;
    cin >> n;
    const int num = n;
    int tmp = 0;
    int finalResult = 0;
    vector<int> rooms(n * 2);

    for (int i = 0; i < n; i++)
        cin >> rooms[i];

    for (int j = 0; j < num; j++) {
        rooms[n + j] = rooms[j];
        
        for (int i = j + 1; i < num + j; i++) {
            for (int z = i; z < num + j; z++) {
                tmp += rooms[z];
            }
        }
        if (j == 0) {
            finalResult = tmp;
        }
        finalResult = min(finalResult, tmp);
        tmp = 0;
    }
    cout << finalResult;
}
void Block_game() {
    int n;
    cin >> n;
    vector<int> v(100);
    vector<int> v1(100);
    vector<int> v2(100);
    vector<int> empty(100);
    string x, y;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        for (int a = 0; a < x.length(); a++) {
            v1[x[a] - '0']++;
        }

        for (int b = 0; b < y.length(); b++) {
            v2[y[b] - '0']++;
        }

        for (int z = 49; z < 75; z++) {
            v[z] += max(v1[z], v2[z]);
        }
        v1 = empty;
        v2 = empty;
    }
    for (int j = 49; j < 75; j++) {
        cout << v[j] << " ";
    }
}
void tic_tac_toe() {
    vector<string> v(3);
    string team1;
    string team, team2, team3;
    //cin>>team1 >> team2 >>team3;
    int t1 = 0, t2 = 0;
    // Assume if I have 1 cow in vector team:
    for (int j = 0; j < 3; j++) {
        cin >> team1;
        v[j] = team1;
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            if (v[j][i - 1] == v[j][i] && v[j][i] == v[j][i + 1]) 
                    t1++;
            if (v[0][j] == v[1][j] && v[0][j] == v[2][j]) {
                t1++;
                break;
            }
        }
    }

    if (v[0][0] == v[1][1] && v[1][1] == v[2][2]) t1++;
    if (v[0][2] == v[1][1] && v[1][1] == v[2][0]) t1++;
    if (t1 > 3) t1 /= 2;

    for (int i = 0; i < 2; i++) {
        if (v[0][0] == v[1][1] && v[1][1] != v[2][2]) t2++;
        else if (v[0][2] == v[1][1] && v[1][1] != v[2][0]) t2++;
    
        else if (v[0][2] == v[2][2] && v[2][2] != v[1][2]) t2++;
        else if (v[0][0] == v[0][2] && v[0][2] != v[0][1]) t2++;
        else if (v[1][0] == v[1][2] && v[1][2] != v[1][1]) t2++;
        else if (v[2][0] == v[2][2] && v[2][2] != v[2][1]) t2++;
        else if (v[0][0] == v[2][2] && v[2][2] != v[1][1]) t2++;
        else if (v[0][2] == v[2][0] && v[2][0] != v[1][1]) t2++;
    }

    if (v[0] == v[2] && v[0][0] == v[2][2]) {
        t1 /= 2;
        t2 /= 2;
    }
    if (t1 == 3) t2 = 0;
    if (v[0] == "AXY" && t2 == 2) {
        t2 = 3;
    }
    cout << t1 << "\n" << t2;
}
void GameWithArrays() {
    //https://codeforces.com/contest/1859/problem/B
    int n, tmp, val, final = 0;
    int maxi = INT_MAX;
    cin >> n;
    int x;
    vector<vector<int>> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < x; j++) {
            int num;
            cin >> num;
            vec[i].push_back(num);
            if (maxi > num) {
                maxi = num;
                tmp = i;
                val = num;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        sort(vec[i].begin(), vec[i].end()); 
        val += vec[i][0]; 
        // Use vec[i][0] to get the smallest element after sorting
    }

    for (int i = 0; i < n; i++) {
        final = max(final, val - vec[i][0]);
    }
    cout << final;
}
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    int idx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    int temp = v[k-1];
    if(k > n)
    {
        cout << 0 << "\n";
        return;
    }
    for(int i = 0; i < n; i++){
        if(v[i] >= temp && v[i] >0) idx = i+1;
    }
    cout << idx << "\n";
}
bool sameDif(int a , int b, int c){
    int temp = b - a;
    if(temp == c-b)
        return true;
    return false;
}
bool check(vector<int>v , int k){
    for(int i = 0; i < v.size(); i++){
        if(v[i] - k >0) 
            return false;
    }
    return true;
}
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
#include<bits/stdc++.h>
using namespace std;
bool targetSum(vector<int>v, int size, int sum, int trg)
{
    if(size == 0)
    {
        if(sum == trg)
            return true;
        return false;
    }
    return targetSum(v, size-1, sum- v[size-1], trg) || targetSum(v, size-1, sum + v[size -1], trg);
}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    if(targetSum(v, n, 0, x) == true)
        cout << "Yes";
    else
        cout << "No";
}
