#include<bits/stdc++.h>
using namespace std;
int &maxe(int &a, int &b)
{
    return a > b ? a : b;
}
void hard_problem()
{
    int n, display = 0;
    cin >> n;
    map<string, int> result = {{"Bessie", 7}, {"Mildred", 7}, {"Elsie", 7}};
    int *temp = &result["Bessie"];
    int temp2 = 7;
    vector<pair<int, string>> cows(n);
    vector<pair<int, int>> changeAmt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i].first >> cows[i].second >> changeAmt[i].second;
        changeAmt[i].first = cows[i].first;
    }

    sort(cows.begin(), cows.end());
    sort(changeAmt.begin(), changeAmt.end());

    // cout << "a7a " << "\n";
    // for (int z = 0; z < n ; z++){
    //   cout << cows[z].first << " " << cows[z].second << " " << changeAmt[z].second << "\n";
    // }
    for (int j = 0; j < n; j++)
    {
        // temp = maxe(  result[cows[0].second] , maxe(result[cows[1].second] , result[cows[2].second] ) );
        result[cows[j].second] += changeAmt[j].second;

        if (&result[cows[j].second] == temp)
        {
            if (temp != &result[cows[j].second])
            {
                display++;
            }
            temp = &result[cows[j].second];
            temp2 = result[cows[j].second];
        }
        cout << cows[j].second << " display : " << display << " value -->  " << result[cows[j].second] << "\n";
    }
    cout << display;
}

