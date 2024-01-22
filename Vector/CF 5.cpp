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
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec[i] = x;
    }

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
