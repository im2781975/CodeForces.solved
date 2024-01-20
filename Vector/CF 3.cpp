#include<bits/stdc++.h>
using namespace std;
void ArrayColoring()
{
    // https://codeforces.com/contest/1843/problem/A
    int size;
    cin >> size;
    vector<int> v(size);
    int subtracts = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (size % 2 == 0)
    {
        for (int j = size - 1, i = 0; j >= size / 2, i < size / 2; j--, i++)
                sum += v[j] - v[i];
    }
    else
    {
        for (int j = size - 1, i = 0; j > size / 2, i < size / 2; j--, i++)
                sum += v[j] - v[i];
    }
    cout << sum - subtracts << "\n";
}
void LongLong()
{
    //https://codeforces.com/contest/1843/problem/B
    int n;
    cin >> n;
    vector<int>vec(n);
    int sum=0, cnt=0, c=0;
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        cin >>vec[i];
        sum+=abs(vec[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(vec[i]==0)
            continue;
        for(int j=i; j<n; j++)
        {
            if(vec[j] < 0)
            {
                flag=false;
                i = j;
            }
            else  
                break;
        }
        if(!flag)
        {
            cnt++;
            flag=true;
            c++;
        }
    }
    cout << sum << " " << cnt;
}
void DifferentDifferences()
{
    //https://codeforces.com/contest/1772/problem/C
    int n, max;
    cin >> n >> max;
    int nmax = 1;
    int temp = 1;
    int sum = n;
    vector<int> v;
    while (nmax - 1 < max - n && n > 2)
    {
        v.push_back(nmax);
        temp++;
        nmax += temp;
        n--;
    }
    while (n > 0)
    {
        v.push_back(max);
        max--;
        n--;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] <<" ";
    
    cout << charac(v, v.size()) << "\n";
}
void solve5()
{
    // https://codeforces.com/contest/1714/problem/A
    int n, h, m, temp = 100;
    cin >> n >> h >> m;
    vector<pair<int, int>> v(n);
    vector<pair<int, int>> result(n);
    vector<int> sum;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        int AlarmTime = v[i].first * 60 + v[i].second;
        int BedTime = (h * 60) + m;
        int Total = abs(AlarmTime - BedTime) / 60;
        int Time_in_min = abs(BedTime - AlarmTime) - Total * 60;
        result[i].first = Total;
        result[i].second = Time_in_min;
        if (Total > 12)
        {
            Total = (((24 * 60) - BedTime) + AlarmTime) / 60;
            Time_in_min = abs((24 * 60 - (h * 60 + m) + AlarmTime) - Total * 60);
            result[i].first = (((24 * 60) - BedTime) + AlarmTime) / 60;
            result[i].second = abs((24 * 60 - (h * 60 + m) + AlarmTime) - Total * 60);
        }
        else if (v[i].first < h || h == v[i].first && m > v[i].second)
        {
            int anaT3bt = 24 * 60 - ((h * 60 + m) - (v[i].first * 60 + v[i].second));
            result[i].first = anaT3bt / 60;
            result[i].second = abs(60 - Time_in_min);
        }
    }
    sort(result.begin(), result.end());
    cout << result[0].first << " " << result[0].second << "\n";
}
void solve6()
{
    // https://codeforces.com/contest/1690/problem/B
    int n;
    cin >> n;
    int temp = 0;
    int count = 0;
    bool f = false;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first;
    for (int i = 0; i < n; i++)
      cin >> v[i].second;
      
    sort(v.begin(), v.end());
    temp = v[n - 1].first - v[n - 1].second;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second > v[i].first)
        {
            f = false;
            break;
        }
        if (v[i].first - temp < 0)
            v[i].first = 0;
        else
            v[i].first -= temp;
        if (v[i].first == v[i].second)
            f = true;
        else
        {
            f = false;
            break;
        }
    }
    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
}
void solve7()
{
    // https://codeforces.com/contest/1690/problem/C
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    vector<int> result(n);
    for (int i = 0; i < n; i++)
        cin >> start[i];
    for (int i = 0; i < n; i++)
        cin >> end[i];
    for (int j = 0; j < n; j++)
    {
        if (start[j] < end[j - 1] && j >= 1)
            result[j] = (end[j] - end[j - 1]);
        else
            result[j] = (end[j] - start[j]);
    }
    for(int i=0; i<result.size(); i++)
        cout << result[i] << " ";
}
int main(){
    int t;
    cin >> t;
    vector<long long int> fact(1001);
    fact[0] = 1;
    long long int mod = 998244353;
    
    for(int i = 1; i <= 1000; i++){
        fact[i] = (fact[i-1] * i) % mod;
    }
    
    while(t){
        int n;
        cin >> n; 
        
        if(n % 2 == 1) cout << 0 << endl;
        else{
            cout << (fact[n/2] * fact[n/2]) % mod << endl;
        }
        t--;
    }
    
    return 0;
}
