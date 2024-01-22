#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include<iostream>
#include<stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0) 
	{
		f=0;
		n=-n;
	}
	string ans=""; 
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
int findSumstr(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}
void solve( int n , string red , vector<string> red_or_blue)
{
    for(ll i = 0 ; i < n ; i++)
    {
        if(red_or_blue[i] == red)
        {
            cout << "R" <<ed;
            return;
        }
    }

    cout<< "B" <<ed;
}
string s;
	cin>>s;
	int count=0;
	int best=0;
	int i=0;
	int j=0;
	//cout<<s.size()<<endl;
	while(i<(s.size()-1))
	{
		if(s[i]==s[i+1])
		{
			count+=1;
			best=(best>count)?best:count;
			i++;
		}
		else{
			count=1;
			best=(best>count)?best:count;
			i++;
		}
       j++;
 
	}
 
	cout<<best<<endl;
	*/
	/*string s;
	cin>>s;
	//cout<<s.size()<<endl;
	int n=s.size();
	int count=0;int best=0;
	int i=0;
	while(i<n)
	{
 
		if(s[i]==s[i+1])
		{
 
			count+=1;
			best=max(best,count);
			i+=1;
		}
		else{
            if(s[i]==s[i-1]){
            count+=1;
			best=max(best,count);
			i++;
            }
		}
	}
	cout<<best<<endl;
-----
string s;
    //getline(cin,s);
    cin>>s;
    cout<<s<<endl;
    int k=s.length();
    cout<<k<<endl;
 
    bool answer =true;
    int z=k-1;
    for(int i=0;i<(k/2);i++)
    {
        if(s[i]!=s[z-i])
            answer=false;
    }
    cout<<answer<<endl;
-----
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;

    scanf("%d", &n);

    char* string = malloc(101);
    char* string1 = malloc(10000);
    char* string2 = malloc(10000);

    for(int i = 0; i <= n; i++) {

        gets(string);
        strcat(string1, string);

    }

    strcpy(string2, string1);
    strrev(string2);

    if(strncmp(string1 + 1, string2, strlen(string2) - 2) == 0)
        printf("YES");
    else
        printf("NO");


    return 0;

}
