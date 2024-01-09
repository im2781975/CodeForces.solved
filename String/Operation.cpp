#include<iostream>
#include<string>
using namespace std;
string caps(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else if(s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }
    return s;
}
void MakeCapital(string s)
{
    if(s[0] >= 97 && s[0] <= 122)
    {
        int z = 1;
        while(z < s.size())
        {
            if(s[z] >= 97 && s[z] <= 122)
            {
                cout << caps(s);
                return;
            }
            z++;
        }
        cout << caps(s);
    }
    else
    {
        int z = 1;
        while(z < s.size())
        {
            if(s[z] >= 97 && s[z] <= 122)
            {
                cout << caps(s);
                return;
            }
            z++;
        }
        cout << caps(s);
    }
}
string unique(string s)
{
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

int main()
{
    string s;
    cin >> s;
    //MakeCapital(s);
    // cout<<caps(s);
    unique(s);
    return 0;
}
