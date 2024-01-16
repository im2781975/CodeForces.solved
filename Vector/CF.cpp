#include<bits/stdc++.h>
using namespace std;
void count()
{
    //counts consecutive zeros and outputs the length of the 
    //longest such consecutive zero sequence for each test case
    vector<int>vec;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        vec.erase(vec.begin(), vec.end());
        int tmp=0, tmp1=0;
        cin >>x;
        for(int j=0; j<x; j++)
        {
            int binary;
            cin >>binary;
            if(binary==0)
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
}
