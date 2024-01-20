#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, sf;
        cin >> s;
        sf = s.substr(0, 6);
        string home;

        int t = (s[0] - '0') * 10 + (s[1] - '0');

        if (t == 33)
            home = "zhejiang,";
        else if (t == 11)
            home = "beijing,";
        else if (t == 71)
            home = "Taiwan,";
        else if (t == 81)
            home = "Hong Kong,";
        else if (t == 82)
            home = "Macao,";
        else if (t == 54)
            home = "Tibet,";
        else if (t == 21)
            home = "Liaoning,";
        else if (t == 31)
            home = "shanghai,";

        cout << "He/She is from " << home;
        cout << "and his/her birthday is on "
             << s[10] << s[11] << "," << s[12] << s[13] << "," << s[6] << s[7] << s[8] << s[9]
             << " based on the table." << endl;
    }
}
int main()
{
    int n, t;
    string home, a;
    
    cin >> n;
    
    for (int k = 0; k < n; k++)
    {
        cin >> a;
        t = (a[0] - '0') * 10 + a[1] - '0';
        
        switch (t)
        {
            case 11: home = "Beijing"; break;
            case 31: home = "Shanghai"; break;
            case 21: home = "Liaoning"; break;
            case 33: home = "Zhejiang"; break;
            case 54: home = "Tibet"; break;
            case 71: home = "Taiwan"; break;
            case 81: home = "Hong Kong"; break;
            case 82: home = "Macao"; break;
            default: break;
        }
        
        cout << "He/She is from " << home << ", and his/her birthday is on "
             << a[10] << a[11] << "," << a[12] << a[13] << "," << a[6] << a[7] << a[8] << a[9]
             << " based on the table." << endl;
    }
    return 0;
}

