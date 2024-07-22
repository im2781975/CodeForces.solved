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
