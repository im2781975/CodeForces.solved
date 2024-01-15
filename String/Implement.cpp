#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n , k ;
        cin>>n>>k;
        string s ;
        cin>>s;
        if(k==0){
            cout<<1<<endl;
        }
        else{
            bool ans = true ;
            for(int i=0;i<n/2;i++){
                if(s[i]!=s[n-i-1]){
                    ans = false; break;
                }
            }
            if(ans || n==1)cout<<1<<endl;
            else cout<<2<<endl;
        }
        t--;
    }
    return 0;
}
char c;
int x, y;
while (cin >> c >> x >> y) {
    if (x < y) swap(&x, &y);
    switch (c) {
        case ('R'): {
            for (int i = 0; i < y; i++) {
                for (int j = 0; j < x; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        }
        case ('S'): {
            for (int i = 0; i < y; i++) {
                for (int j = 0; j < x; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        }
        case ('T'): {
            for (int i = 0; i < x; i++) {
                for (int j = 0; j <= i; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        }
    }
}
-----
    int m,n,d=0;
     cin>>m>>n;
     string x,y,z,s,res[m*n];
     while(d++<m*n)
     {
    	 cin>>x>>y>>z;
    	 if(y=="0000000000"&&z=="0000000000") {
    		 if(d==1) cout<<x;
    		 else cout<<endl<<x;
    	 }
    	 else {if(z==s) cout<<x;
    	 if(z=="0000000000") cout<<endl<<x;
    	 }
    	 s=x;
     }
-----
    string s;
     getline(cin,s);
     unsigned int i;
     for(i=0;i<s.size();i++)
        	 s[i]=tolower(s[i]);
     for(i=0;i<s.size();i++)
     {
    	 if(s[i]<97||s[i]>122)
    	 {
    		 s.erase(i,1);
    		 i--;
    	 }
     }
     unsigned int z=0,c=0,f=s.size()-1;
     z=0;
     while(z++<s.size()/2)
     {
    	 if(s[z-1]!=s[f--])
    	 {
    		 c++;
    		 break;
    	 }
     }
     if(c==0) cout<<"I'll make the saddle";
     else cout<<"Alas, Jon, You failed my test";
-----
int x;
     string s;
     cin>>x>>s;

     if(s.size()<=x) cout<<s;
     else{
    	 cout<<s[0];
    	 if(s[0]==s[s.size()-1]&&s.size()-1>0)
    	 {
    		 cout<<s.size()-1;
    		 return 0;
    	 }
    	 else{
    		 if(s.size()-2>0) cout<<s.size()-2<<s[s.size()-1];
    		 else cout<<s[s.size()-1];
    	 }
     }
----
string s;
    cin>>s;
    unsigned long long sum=0,sumn=0,z=0;
    while(z++<s.size())
    	sum+=(s[z-1]-48);
    while(true){
    	if(sum<10) break;
    	else{
    		sumn=0;
    		while(sum>0)
    		{
    			sumn+=sum%10;
    			sum/=10;
    		}
    		sum=sumn;
    	}
    }
    cout<<sum;
-----
string x,y;
     cin>>x>>y;
     int z=0,c=0;
     while(z++<x.size())
    	 if(x[z-1]!=y[z-1])
    		 c++;
     cout<<c;
----
string s;
     int c=0,d=0,z=0;
     cin>>s;
    while(true)
    {
    	if(s[z]==s[++z]) c++;
    	else break;
    }
    while(z<s.size())
    {
    	d=0;
    	while(z<s.size())
    	{
    		if(s[z]==s[++z]) d++;
    		else break;
    	}
    	if(c!=d) {
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";
-----
int x,z=0,maxl=0,maxch=0,maxchi=0;
     cin>>x;
     string s[x];
     while(z++<x)
    	 cin>>s[z-1];
     z=0;
     while(z++<x)
     {
    	 if(s[z-1].size()>=s[maxl].size()) maxl=z-1;
    	 int y=0;
    	 long long sum=0;
    	 while(y++<s[z-1].size())
    		 sum+=(s[z-1][y-1]-64);
    	 if(sum>=maxch)
    	 {
    		 maxch=sum;
    		 maxchi=z-1;
    	 }
     }
     cout<<s[maxchi]<<endl<<s[maxl];
-----
string s,d;
      cin>>s;
      for(int i=0;i<s.size();i++)
    	  s[i]=tolower(s[i]);
      int z=0,f=0;

      while(z++<s.size())
      {
    	  if(s[z-1]!='a'&&s[z-1]!='u'&&s[z-1]!='o'&&s[z-1]!='i'&&s[z-1]!='e'&&s[z-1]!='y')
    	  {
    		  d[f]='.';
    		  d[f+1]=s[z-1];
    		  f+=2;
    	  }
      }
      z=0;
      while(z++<f) cout<<d[z-1];
----
