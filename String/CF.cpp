#include<bits/stdc++.h>
using namespace std;
void occurance()
{
    int n, flag=0;
    cin >> n;
    string s="ibrahim";
    for(int i=0; i<n; i++)
    {
        char x;
        cin >> x;
        if(x==s[i])
            flag=1;
        //if at least one char match,it will print 'YES'.
    }
    if(flag==1)
        cout<<"Yes";
    else
        cout<< "No";
    return 0;
}
void ASCI()
{
    int n;
    cin >> n;
    vector<char>vec(n);
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
        vec[i] = s[i];
    cout<< static_cast<int>(vec[n-1]);
}
void MakePattern()
{
    int n;
    cin >> n;
    char arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j]; 
    }
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++) 
        {
            if(arr[i][j]==arr[i-1][j-1] && arr[i][j]==arr[i+1][j+1] && arr[i][j]==arr[i+1][j-1] && arr[i][j]==arr[i-1][j+1] && arr[i][j]=='#')
            {
                cout << i+1 << " " << j+1 ;
                return 0; 
            }
        }
    }
    cout << "Pattern not found";
    return 0;
}
void UniqueChar()
{
    int n;
    cin >> n;
    vector<char>vec;
    string s;
    cin >> s;
    int i=1, cur=0;
    while(i <= n)
    {
        if(s[cur] == s[i])
        {
            vec.push_back(s[i]);
            cur=i+1;
            i++;
        }
        i++;
    }
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] <<" ";
}
