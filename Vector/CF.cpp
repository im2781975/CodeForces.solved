#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void CountConsecutive()
{
    //counts consecutive zeros and outputs the length of the 
    //longest such consecutive zero sequence for each test case
    int n, x, tmp=0;
    cin >> n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin >>x;
        vec.erase(vec.begin(), vec.end());
        if(x==0)
        {
            tmp++;
            vec.push_back(tmp);
        }
        else
        {
            vec.push_back(tmp);
            tmp=0;
        }
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] <<" ";
}
void Forbidden_Integer() 
{
    //takes three integer inputs (n, k, and x) and performs some operations to determine
    //if it's possible to represent n as a sum of distinct integers from 1 to k excluding the integer x
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(k);
    vector<int> res;
    if (n < 0 || k < 2 || x < 1 || x > k)
    {
        cout << "Invalid inputs\n";
        return;
    }
    for (int i = 0; i < k; i++) 
        v[i] = i + 1;
    sort(v.begin(), v.end());
    for (int j = k - 1; j >= 0; j--) {
        while (n >= v[j] && v[j] != x) {
            n -= v[j];
            res.push_back(v[j]);
        }
    }
    if (n == 0) {
        cout << "YES\n" ;
        cout << res.size() << "\n";

    for(int i=0; i<res.size(); i++)
        cout<< res[i] <<" ";
    }
    else
        cout << "\nNO" ;
}
void MaxDiffrence()
{
    //calculates the difference between the sum of the maximum elements
    // and the sum of the minimum elements in each vector.
    int n;
    cin >>n;
    int x=n/2;
    vector<int>vec(x);
    vector<int>cev(x);
    if(n %2 ==0)
    {
        for(int i=0; i<n/2; i++)
            cin >> vec[i];
        for(int i=0; i<n/2; i++)
            cin >> cev[i];
    }
    else
    {
        for(int i=0; i<n/2; i++)
            cin >> vec[i];
        for(int i=0; i<n/2; i++)
            cin >> cev[i];
    }
    sort(vec.begin(), vec.end());
    sort(cev.begin(), cev.end());
    cout<< vec[x-1] + cev[x-1]-(vec[0] + cev[0]);
}
void BasedCondition() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) 
        cin >> vec[i];
    
    sort(vec.begin(), vec.end());
    if (vec[n - 1] * vec[n - 2] >= vec[0] * vec[1])
        cout << vec[n - 1] * vec[n - 2] ;
    else
        cout << vec[0] * vec[1] ;
}
void solve_div4c()
{
    int n, temp1, temp2, a=0, b=0, f, t, t2;
    cin >> n;
    vector<pair<int, string>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    sort(vec.begin(), vec.end());

    bool first = true;
    bool second = true;
    for (int i = 0; i < n; i++)
    {
        if (vec[i].second == "11")
        {
            a++;
            b++;
            temp1 = vec[i].first;
        }
        else
        {
            if (vec[i].second == "01" && second)
            {
                a++;
                t = vec[i].first;
                second = false;
            }
            if (vec[i].second == "10" && first)
            {
                b++;
                t2 = vec[j].first;
                first = false;
            }
            temp1 = t + t2;
        }
        temp2 = min(temp2, temp1);
    }
    if (c1 > 0 && c2 > 0)
        cout << temp2 << "\n";
    else
        cout << -1 << "\n";
}
void solve()
{
    int n, tmp, tp, cnt=0;
    cin >>n;
    vector<int>vec(n);
    vector<int>cev(n);
    for(int i=0; i<n; i++)
        cin >>vec[i];
    for(int i=0; i<n; i++)
        cin >>cev[i];
    for(int i=0; i<n; i++)
    {
        tmp=vec[i];
        tp=cev[i];
        for(int j=0; j<n; j++)
        {
            if(vec[j]==tmp && cev[j]!=tp)
                cnt++;
        }
    }
    if(cnt > 0)
        cout <<"No";
    else
        cout <<"Yes";
}
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> check(n - 1);
    
    bool a = false;
    bool b = false;
    bool c = false;
    bool d = false;
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    for (int i = 0; i < n; i++)
    {
        if (vec[i] > 0)
        {
            if (vec[i] % 2 != 0)
                b = true;
            else
                a = true;
        }
    }
    for (int i = 0; i < n - 1; i++)
        check[i] = abs(vec[i] - vec[i + 1]);

    for (int i = 0; i < n - 1; i++)
    {
        if (check[i] > 0)
        {
            if (check[i] % 2 != 0)
                c = true;
            else
                d = true;
        }
    }
    if (a || b || c || d)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
