#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans = 0;

int q(int x, int y) {
    int n = 0;
    memset(b, 0, sizeof b);

    for (int i = x; i <= y; i++) {
        b[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (b[i] == 1) n++;
    }
    return n;
}

int main() {
    scanf("%s", a);
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        ans += q(i, i);
        for (int j = i + 1; j < len; j++) {
            ans += q(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}
void solve()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = 2021;

    int k;
    int ans = -1;

    for (int i = 1; i <= 100000; i++)
    {
        int x = i;
        while (x)
        {
            int k = x % 10;
            a[k]--;
            x /= 10;
            if (a[k] == -1)
            {
                ans = i;
                break;
            }
        }
        if (ans != -1)
            break;
    }
    cout << ans - 1 << endl;
}
void solve()
{
    string s[100];
    unsigned int a[100][50];
    for (int i = 0;i<100;i++){
        cin>>s[i];
    }
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            a[i][j] = s[i][j] - '0';
        }
    }

    cout<<endl<<endl;
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int t = 1;
    int ans[50];
    int prod = 0,carry = 0;;
    for (int i = 49;i>=0;i--){
            prod = 0;
        for (int j = 0;j<100;j++){
            prod += a[j][i];
        }
        prod += carry;
        ans[i] = prod%10;
        carry = prod/10;

        cout<<t<<"-"<<prod<<"-"<<carry<<endl;
        t++;
    }
    cout<<carry;
    for(int i = 0;i<50;i++){
        cout<<ans[i];
    }
}
void solve()
{
    string s;
    cin>>s;
    int a[1000];
    for (int i = 0;i<=999;i++){
        a[i] = s[i] - '0';
    }
    long long int maxi = 1,num = 1;
    for (int i = 0;i<=987;i++){
        num = 1;
        for(int j = i;j<=i+12;j++)
            num *= a[j];
            if (num>maxi)
                maxi = num;
}
cout<<maxi;
//cout<<a[0];
}
void solve()
{
    int main()
{
  code();
 
  // tc
    {
       string s, m[N] ;
       cin>>s;
       int cnt=0  , cnt2=0  , cnt3=0   ;
       for(int i = 0 ; i <s.size() ; i++)
       {
        if(s[i] == '1')
        {
            cnt++;
        }
        else if(s[i] == '2')
        {
           cnt2++;
        }
        else if(s[i] == '3')
        {
           cnt3++;
        }

       }
       int i =0;
       while (cnt--)
       {
       m[i]='1';
       m[i+1]='+';
       i+=2;
     }
     while(cnt2--){
     m[i]='2';
       m[i+1]='+';
       i+=2;
     }
     while(cnt3--){
        m[i]='3';
       m[i+1]='+';
       i+=2;
     }
     for(int j = 0 ; j <s.size() ; j++)
       cout<<m[j];
     }


}
