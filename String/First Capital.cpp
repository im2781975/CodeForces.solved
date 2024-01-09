#include<iostream>
#include<string>
using namespace std;
string caps(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else
            s[i] -= 32;
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    int z = 1;

    if(s[0] >= 97 && s[0] <= 122)
    {
        while(z++ < s.size())
            if(s[z - 1] >= 97 && s[z - 1] <= 122)
            {
                cout << s;
                return 0;
            }
        s = caps(s);
    }
    else
    {
        while(z++ < s.size())
            if(s[z - 1] >= 97 && s[z - 1] <= 122)
            {
                cout << s;
                return 0;
            }
        s = caps(s);
    }
    cout << s;
}
