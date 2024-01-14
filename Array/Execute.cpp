#include<bits/stdc++.h>
using namespace std;
void MinSumDiagonal()
{
    //find the minimum sum of diagonals in a 2D array
    cout<< "Enter row & column number: ";
    int n;
    cin >> n;
    int arr[n][n], result =0;
    int Max=0;
    int MAXROW=INT_MAX;
    cout<< "\nEnter elements: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }
    for(int i=0; i<n; i++)
    {
        Max=0;
        for(int j=0; j<n; j++)
        {
            Max+=arr[i+j][j];
        }
        MAXROW=min(MAXROW, Max);
    }
    cout<<MAXROW<<"\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            result=max(result, Max);
    }
    cout<< result;
}
void BeautifulMatrix()
{// https://codeforces.com/contest/1772/problem/B
    bool flag = false;
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];
    }
    if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
        cout << "YES\n";
    else
    {
        for (int i = 0; i < 4; i++)
        {
            int tmp1 = arr[1][0];
            int tmp2 = arr[1][1];
            int tmp3 = arr[0][0];
            int tmp4 = arr[0][1];
            arr[0][0] = tmp1;
            arr[0][1] = tmp3;
            arr[1][0] = tmp2;
            arr[1][1] = tmp4;
            if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
            {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag)
        cout << "NO\n";
    }
}
void ManhattanDistance()
{
    //Manhattan Distance misured by center of matrix
    long long a[5][5], c, b;
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1) 
            {
                b = i + 1;
                c = j + 1;
            }
        }
    }
    b = abs(3 - b);
    c = abs(3 - c);
    cout << c + b ;
}
void Manhattandistance()
{
    int a, ans;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> a;
            if(a == 1)
                ans = abs(2 - i) + abs(2 - j);
        }
        cout << ans ;
    }
}
void diffrence()
{
    //checks difference between the two largest elements 
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
        
    sort(arr, arr+n, greater<int>());
    if(n==1)
    {
        if(arr[0] > 1)
            cout <<"No";
        else
            cout<< "Yes";
    }
    else
    {
        if(arr[0]-arr[1]<=1)
            cout <<"Yes";
        else
            cout<< "No";
    }
}
void OrGate()
{
    int n, ans=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n; i++)
        ans=ans | arr[i];
    cout << ans;
}
void SortElements()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
    for(int i=0; i<n-1; i++)
    {
        int j=i+1;
        int mini=INT_MAX;
        int idx=-1;
        while(j < n)
        {
            if(arr[j] < arr[i] && arr[j] < mini)
            {
                mini=arr[j];
                idx=j;
            }
            j++;
        }
        if(mini!=INT_MAX)
        {
            reverse(arr+i, arr+idx+1);
                break;
        }
    }
    for(int i=0; i<n; i++)
        cout <<arr[i] <<" ";
}
void consecutive()
{
    //counts the consecutive zeros in the array between the 
    //first and last non-zero elements and prints the result
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int i=0, j=n-1, ans=0;
    while(arr[i]==0)
    {
        i++;
    }
    while(arr[j]==0)
    {
        j--;
    }
    while(i!=j)
    {
        if(arr[i]==0)
            ans++;
        i++;
    }
    cout <<ans;
}
