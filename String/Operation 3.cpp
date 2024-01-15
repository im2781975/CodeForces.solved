#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t){
        int n , r , b ;
        cin>>n>>r>>b; 
        int k=0 ;
        string ans = "";
        ans+='R';
        int cnt = ceil((float)r / (b+1));
        // cout<<cnt<<endl;
        while(k<n){
            for(int i=0;i<cnt && k<n;i++){
                ans+='R';
                k++;
            }
            if(k<n){
                ans+='B';
                k++;
            }
        }

        // int d = r / (b+1) ;
        // int remm = r%(b+1) ;

        // string ans ="";

        // for(int i=0;i<=b;i++){
        //     for(int i=0;i<d;i++){
        //         ans += 'R';
        //     }
        //     if(remm){
        //         ans+='R';
        //         remm--;
        //     }
        //     if(i!=b)ans+='B';
        // }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        string s;
        cin>>s;
        string ans = ""; 
        int index = 0 ;
        for(int i=0;i<s.length();i++){
            if(s.find(s[i], i+1)>=s.length()){
                index = i;
                break;
            }
        }       
        cout<<s.substr(index)<<endl;
        t--;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        string s;
        cin >> s;
        char prev = s[0]; 
        int ans = 1;
        bool res = true;
        if(s.length() == 1)
            res = false;
        for(int i = 1; i < s.length(); i++){
            if(s[i] == prev){
                ans++;
            }
            else{
                if(ans == 1){
                    res = false;
                    break;
                }
                else{
                    prev = s[i];
                    ans = 1;
                }
            }
        }
        if(res && ans != 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&(s[i+1]>'1'&&s[i+1]<='9'))
		{
			int n=s[i+1]-'0';
			for(int j=0;j<n;j++) cout<<s[i];
			i++;
		}
		else if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) cout<<s[i];
	}
	return 0;
}
string s;
       int x;
       cin>>s;
       cin>>x;
       int z=0;
       string k="Final";
       while(z++<x)
       {
    	   if(z==1){
    		   cout<<s<<endl;
    		  s+='-';
    		   continue;
    	   }
    	   s+=k;
    	   if(z==x){
    		   s+="Wallahy";
    	      	   }
    	  if(z==x) cout<<s;
    	  else cout<<s<<endl;
-----
int x,z=0;
      cin>>x;
      string y[x];
      while(z++<x) cin>>y[z-1];
      int f,m;
      cin>>f;
      string name[f],d;
      int scr[f];
      z=0;
      while(z++<f) scr[z-1]=0;
      z=0;
      while(z++<f)
      {
    	  cin>>name[z-1];
    	  cin>>m;
    	  int dd=0;
    	  while(dd++<m)
    	  {
    		  cin>>d;
    		  int r=0;
    		  while(r++<x)
    			  if(d==y[r-1])
    				  scr[z-1]++;
    	  }
      }
      int max=0;
      z=1;
      while(z++<f)
      {
    	  if(scr[z-1]>scr[max]) max=z-1;
    	  if(scr[z-1]==scr[max])
    		  if(name[z-1]<name[max])
    			  max=z-1;
      }
      cout<<name[max];
