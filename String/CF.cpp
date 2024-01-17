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
void IsPalindrome
{
    int n, k;
    cin >>n >>k;
    string s;
    cin >> s;
    if( k==0)
        cout << 1 ;
        //If k is zero, it outputs 1 because no changes are needed
        //to make a string of any length a palindrome. 
    else
    {
        bool ans=true;
        for(int i=0; i< n/2; i++)
        {
            if(s[i]!= s[n - i- 1])
            {
                ans = false;
                break;
            }
        }
        if(ans || n==1)
            cout<< 1;
        else
            cout<<2;
    }
}
void SwitchPattern()
{
    char c;
    int x, y;
    while(cin >> c >> x >> y)
    {
        if(x < y)
            swap(x, y);
        switch(c)
        {
            case ('R'):
            {
                for(int i=0; i<y; i++)
                {
                    for(int j=0; j<x; j++)
                        cout<<"*";
                    cout<<"\n";
                }
                break;
            }
            case ('S'):
            {
                for(int i=0; i<y; i++)
                {
                    for(int j=0; j<x; j++)
                        cout<<"*";
                    cout<<"\n";
                }
                break;
            }
            case ('T'):
            {
                for(int i=0; i<x; i++)
                {
                    for(int j=0; j<=i; j++)
                        cout<<"*";
                    cout<<"\n";
                }
                break;
            }
        }
    }
}
void ChangeFormat()
{
    string s;
    cin >>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>= 65 && s[i]<=90)
            s[i]+=32;
        else if(s[i]>=92 && s[i]<=122)
            s[i]-=32;
    }
    for(int i=0; i<s.size(); i++)
        cout << s[i];
}
void unique()
{
    string s;
    cin >>s;
    int i=0, cnt=0, flag=0;
    while(i < s.size())
    {
        if(s[i] == s[i+1])
            cnt++;
        else
            cnt=0;
        if(cnt >=6)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 1)
        cout << "Yes";
    else
        cout << "No";
}
