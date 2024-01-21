#include<iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
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
int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		
		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++) 
		{
			if(s[i]<0) ans++; 
		}
		cout<<ans/2<<endl;
	}
	return 0;
}
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;
		
	}
	
	return 0;
}
*

#include<iostream>
#include<stdio.h> 
#include<cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A'; 
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';	
		}
		cout<<s<<endl;
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			} 
		}
		cout<<endl;
	}
	return 0;
}



#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else 
				{
					cout<<"no"<<endl;
					break;
				}	
				if(c+1==l) 
				{
					cout<<"yes"<<endl;
				}
			}			
		}
		else cout<<"no"<<endl;
	}
	return 0;
}
#include<iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl; 
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
#include<iostream>
#include<sstream>
#include<string>
#include<set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
} 
*

#include<iostream>
#include<string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
int countstring(string s){
    if(s.length()==3){
        int a=countstring(s.substr(0,s.length()/2));
        int b=countstring(s.substr(s.length()/2,s.length()-s.length()/2));
        if(s[0]==s[1]){
            return a+b+1;
        }else{
            return a+b;
        }
    }
    if(s.length()==2){
        if(s[0]==s[1]){
            return 1;
        }else{
            return 0;
        }
    }
    if(s.length()==1){
        return 0;
    }
    int a=countstring(s.substr(0,s.length()/2));
    int b=countstring(s.substr(s.length()/2,s.length()-s.length()/2));
    
    return a+b;
}
