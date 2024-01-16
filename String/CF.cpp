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
