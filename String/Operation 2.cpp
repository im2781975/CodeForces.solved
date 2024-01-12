#include<bits/stdc++.h>
void solve_ballonIcpc()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int tmp = 0;
  char arr[50] = {0};
  for (int i = 0; i < n; i++)
  {
    if (arr[s[i]] == 0)
      tmp += 2;
    else
      tmp += 1;
    arr[s[i]]++;
  }
  cout << tmp << "\n";
}
void solveContest1790ProblemA()
  {
    string s = "314159265358979323846264338327";
    string ns;
    cin >> ns;
    int temp = 0;
    for (int i = 0; i < ns.length(); i++)
      if (ns[i] == s[i])
        temp++;
      else
        break;
    cout << temp << "\n";
  }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n ;
        cin>>n;
        string s ;
        cin>>s;
        int ans = 0 ;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(i+2<n){
                    if(s[i+1]=='0')ans+=2;
                    else if(s[i+2]=='0')ans++;
                }
                else if(i+1<n){
                    if(s[i+1]=='0')ans+=2;
                }
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t){
        int n ;
        cin>>n;
        int ans = 0 ;
        string res = "";
        int prev = 2 ;
        while(ans < n){
            if(prev == 2){
                prev =1 ;
            }
            else{
                prev = 2;
            }
            res+=to_string(prev);
            ans+=prev;
        }
        t--;
    }
    return 0;
}
