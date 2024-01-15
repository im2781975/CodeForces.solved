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
#include<iostream>
using namespace std;

int main(){
    char c = 'A' + 9;
    string s;
    s += c;
    cout << s;
    return 0;
}
string x;
        string v="vaporeon",j="jolteon",f="flareon",e="espeon",u="umbreon",l="leafeon",g="glaceon",s="sylveon";
       cin>>x;
       int z=0,count[8]={0,0,0,0,0,0,0,0};
       while(z++<8)
       {
    	   if(x[0]!='.')
    	   {
    		                if(x[0]==v[0]) count[0]++;
    		                if(x[0]==j[0]) count[1]++;
    		                if(x[0]==f[0]) count[2]++;
    		                if(x[0]==e[0]) count[3]++;
    		                if(x[0]==u[0]) count[4]++;
    		                if(x[0]==l[0]) count[5]++;
    		                if(x[0]==g[0]) count[6]++;
    		                if(x[0]==s[0]) count[7]++;
    		                break;
    	   }
    	   if(x[z-1]!='.')
    	   {
    		   if(x[z-1]==v[z-1]) count[0]++;
    		   if(x[z-1]==j[z-1]) count[1]++;
    		   if(x[z-1]==f[z-1]) count[2]++;
    		   if(x[z-1]==e[z-1]) count[3]++;
    		   if(x[z-1]==u[z-1]) count[4]++;
    		   if(x[z-1]==l[z-1]) count[5]++;
    		   if(x[z-1]==g[z-1]) count[6]++;
    		   if(x[z-1]==s[z-1]) count[7]++;

    	   }
       }
       z=0;
       int max=0;
       while(z++<8)
    	   if(count[z-1]>count[max]) max=z-1;
       switch(max){
       case(0): {cout<<"vaporeon"; break;}
       case(1): {cout<<"jolteon"; break;}
       case(2): {cout<<"flareon"; break;}
       case(3): {cout<<"espeon"; break;}
       case(4): {cout<<"umbreon"; break;}
       case(5): {cout<<"leafeon"; break;}
       case(6): {cout<<"glaceon"; break;}
       case(7): {cout<<"sylveon"; break;}
       }
-----
#include<bits/stdc++.h>
using namespace std;
int t;
int n;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int ans=0;
		int i=0;
		while(i<s.size()-1)
		{
			if(s[i]=='0') 
			{
				if(s[i+1]=='0') ans+=2;
				else if(s[i+1]=='1'&&s[i+2]=='0') ans+=1;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
-----
#include<bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans=0;

int q(int x,int y)
{
	int n=0;
	memset(b,0,sizeof b);
	
	for(int i=x;i<=y;i++)
	{
		b[a[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]==1) n++;
	}
	return n;
}


int main()
{
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			ans+=q(i,j);
		} 
	}
	cout<<ans<<endl;
	return 0;
} 
-----
#include<bits/stdc++.h>
using namespace std;

int a[10];


int main()
{
	for(int i=0;i<10;i++) a[i]=2021; 
	int k;
	int ans=-1;
	for(int i=1;i<=100000;i++)
	{
		int x=i;
		while(x)
		{
			int k=x%10;
			a[k]--;
			x/=10;
			if(a[k]==-1)
			{
				ans=i;
				break;
			}
		}
		if(ans!=-1) 
		{
			break;
		} 
	}	
	cout<<ans-1<<endl;
	return 0;
}
------
