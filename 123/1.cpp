//
//  main.cpp
//  Codeforces_PS
//
//  Created by Harsh on 09/04/22.
//

// Bits ++

 #include <iostream>
 #include<set>
 #include<map>
 #include<stack>
 #include<queue>
 #include<vector>
 #include<cstdio>
 #include<string>
 #include<cstring>
 #include<cstdlib>
 #include<iostream>
 #include<algorithm>
 #include<cmath>
/*
using namespace::std;
int main()
{
   
    int n,X=0;
    
    cin >> n;

    string s1="++X",s2="X++",s3="--X",s4="X--";
    
    while (n--)
    {
        string s;

        cin >> s;
        
        if (s==s1 || s==s2)
        {
            X=X+1;
        }
        else if (s==s3 || s==s4)
        {
            X=X-1;
        }
        
    }
    
    cout << X << endl;
    
    return 0;
}
*/

//Beautiful Matrix
/*
#include <iostream>

using namespace::std;
int main()
{
    int i,j,count=0;
    int a[5][5];
    
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if (a[i][j]==1)
            {
                if (i==2 && j==2)
                {
                    count=0;
                }
                else if ((i+j==3 || i+j==5) && ((i-j==1) || (j-i==1)))
                {
                    count=1;
                }
                else if (i-j==2 || j-i==2 || (i+j==2*i && i!=0 && j!=0 && i!=4 && j!=4))
                {
                    count=2;
                }
                else if ((i+j==1 && (i==0 || j==0)) || (i+j==3 && (i==0 || j==0)) || (i+j==5 && (i==1 || j==1)) || (i+j==7 && (i==3 || j==3)))
                {
                    count=3;
                }
                else
                    count=4;
            }
        }
    }
    
    cout << count;
    
}
*/

//Stones on the Table
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i,count=0;
    
    cin >> n;
    
    char a[n];
    
    for (i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    for (i=0; i<n-1; i++)
    {
        if (a[i]==a[i+1])
        {
            count++;
        }
    }
    
        cout << count;
   
}
*/

//Bear and Big Brother
/*
#include <iostream>

using namespace::std;
int main()
{
    int a,b,count=0;
    
    cin >> a >> b;
    
year:
    if (a>=b)
    {
        count++;
        goto end;
    }
    else
    {
       a=3*a;
       b=2*b;
        
    if (a>b)
    {
        goto year;
    }
    else
    {
        count++;
        goto year;
    }
    }
end:

    cout << count;

}
*/

//Magnets
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i,count=0;
    
    cin >> n;
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    for (i=0; i<n-1; i++)
    {
        if (a[i]!=a[i+1])
        {
            count++;
        }
    }
    
    cout << count+1;
    
}
*/

//Games
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i,j,count=0;
    
    cin >> n;
    
    int a[n],b[n];
    
    for (i=0; i<n; i++)
    {
        int p,q;
        
        cin >> p >> q;
        
        a[i]=p;
        b[i]=q;
    }
    
    for (i=0; i<n ; i++)
    {
        for (j=0; j<n; j++)
        {
            if (a[i]==b[j] && i!=j)
            {
                count++;
            }
        }
    }
    
    cout << count;
    
}
*/

//Candies and Two Sisters
/*
#include <iostream>

using namespace::std;
int main()
{
    int m,t;
    
    long long int count=0;
    
    cin >> t;
    
    long long int ans[t];
    m=t;
    
    
    while (t--)
    {
        long long int n,a,b;
        
        cin >> n;
        
        a=(n+1)/2;
        
        ans[t]=a-1;
    
    }
    
    while (m--)
    {
        cout << ans[m] << endl;
    }
    
    
}
*/

// I_love_%username%
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i,count=1,b;
    
    cin >> n;
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    
    for (i=0; i<n-1; i++)
    {
        int temp=0;
        temp=a[i+1]-a[i];
        
        if (temp<0)
        {
            temp=-(temp);
        }
        
        
        
    }
}
*/
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i,count_min=0,count_max=0,b;
    
    cin >> n;
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    int max=a[0];
    int min=a[0];
    
    for (i=1; i<n; i++)
    {
        if (a[i]>max)
        {
            count_max++;
            max=a[i];
        }
        if (a[i]<min)
        {
            count_min++;
            min=a[i];
        }
    }
    
    cout << count_max + count_min;
}
*/
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i,count=0;
    
    cin >> n;
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    for (i=0; i<n; i++)
    {
        if (a[i]==1)
        {
            count++;
        }
    }
    
    string s1="EASY",s2="HARD";
    
    if (count==0)
    {
        cout << s1;
    }
    else
        cout << s2;
}
*/

//A. Police Recruits
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i;
    
    cin >> n;
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    int sum=0,count=0;
    
    for (i=0; i<n; i++)
    {
        sum=sum+a[i];
        
        if ((sum=0))
        {
            count=0;
        }
        else if ((sum<0))
        {
            count++;
        }
        
        if (sum<-1)
        {
            sum=-1;
            goto h;
        }
        else if (sum>1)
        {
            sum=1;
        }
        
    }
    
    cout << count;
    
   
}
*/
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i,sum=0,count=0;
    
    cin >> n;
    
    int a[n];
    
    for (i=0; i<n ; i++)
    {
        cin >> a[i];
    }
    
    for (i=0; i<n ; i++)
    {
        sum=sum+a[i];
        if (sum<0)
        {
            count++;
            sum=0;
        }
    }
    
    cout << count;
    
}
*/

//tram

/*

#include <iostream>

using namespace::std;
int main()
{
    int n,p=0,t;
    
    cin >> n;
    
    int ans[n];
    t=n;
    
    while (n--)
    {
        int a,b,c;
        
        cin >> a >> b;
        
        p=b-a;
        
        c=a+b;
        
        
        ans[n]=c;
    }
    
    int max=ans[0];
    
    while (t--)
    {
        if (ans[t]>max)
        {
            max=ans[t];
        }
    }
    
    cout << max-1;
}
*/
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i,sum=0;
    
    cin >> n;
    int c[n];
    
    int a[n],b[n];
    
    for (i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
    }
    
    for (i=0; i<n; i++)
    {
        sum=sum-a[i]+b[i];
        c[i]=sum;
    }
    
    int max=c[0];
    
    for (i=0; i<n; i++)
    {
        if (max<=c[i])
        {
            max=c[i];
        }
    }
    
    cout << max;
}
*/

//Vasya the Hipster
/*
#include <iostream>

using namespace::std;
int main()
{
    int a,b,c;
    
    cin >> a >> b;
    
    if (a<=b)
    {
        c=a;
        cout << c << " ";
    }
    else
    {
        c=b;
        cout << c << " ";
    }
    
    cout << (a+b-2*c)/2;
}
*/


//Sum of Round Numbers
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,k=0,r=0;
    
    cin >> n;
    
    int ans[n];
    
    while (n--)
    {
        int a;
        
        cin >> a;
        
        if (a%10==0)
        {
            k++;
            ans[n]=a;
        }
        else if (a%10!=0)
        {
            while (a!=0)
            {
                r=a%10;
                a=a/10;
                k++;
                

            }
            
            
        }
        
    }
}
*/
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,k=0,r=0,m;
    
    cin >> n;
    
    int ans[n];
    m=n;
    
    while (n--)
    {
        int a;
        
        cin >> a;
        
        if (a/10000!=0)
        {
            k++;
            ans[n]=(a/10000)*10000;
            n=n-ans[n];
        }
        else if (a/1000!=0)
        {
            k++;
            ans[n]=(a/1000)*1000;
            n=n-ans[n];
        }
        else if (a/100!=0)
        {
            k++;
            ans[n]=(a/100)*100;
            n=n-ans[n];
        }
        else if (a/10!=0)
        {
            k++;
            ans[n]=(a/10)*10;
            n=n-ans[n];
        }
    }
    while (m--)
    {
        cout << k << endl;
        cout << ans[m] << endl;
    }
}
*/

/*
 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, count = 0, i = 0;
        int a[4];

        cin >> n;

        if (n / 1000 != 0)
        {
            count++;
            a[i] = (n / 1000) * 1000;
            n -= a[i];
            i++;
        }
        if (n / 100 != 0)
        {
            count++;
            a[i] = (n / 100) * 100;
            n -= a[i];
            i++;
        }
        if (n / 10 != 0)
        {
            count++;
            a[i] = (n / 10) * 10;
            n -= a[i];
            i++;
        }
        if (n != 0)
        {
            count++;
            a[i] = n;
        }

        cout << count << endl;
        for (i = 0; i < count; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

//Drinks
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,i;
    float sum;
    
    cin >> n;
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    for (i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    
    cout << sum/n;
}
*/

//I Wanna Be the Guy
/*
#include <iostream>

using namespace::std;

int remove_duplicate_elements(int arr[], int n)
{

    if (n==0 || n==1)
        return n;

    int temp[n];

    int j = 0;
    int i;
    for (i=0; i<n-1; i++)
    {
        if (arr[i] != arr[i+1])
        {
            temp[j++] = arr[i];
            temp[j++] = arr[n-1];
        }
    }
    
    for (i=0; i<j; i++)
            arr[i] = temp[i];

return j;
}

int main()
{
    int n,i,j;
    
    cin >> n;
    
    int a,b;
    
    cin >> a;
    int x[a];
    for (i=0; i<a; i++)
    {
        cin >> x[i];
    }
    
    remove_duplicate_elements(&x[a], a);
    
    cin >> b;
    int y[b];
    for (i=0; i<b; i++)
    {
        cin >> y[i];
    }
    
    remove_duplicate_elements(&y[b], b);
    
    int count=n;
    
    for (i=0; i<a; i++)
    {
        for (j=0; j<n; j++)
        {
            if (x[i]==j)
            {
                count--;
            }
        }
    }
    
    for (i=0; i<b; i++)
    {
        for (j=0; j<n; j++)
        {
            if (y[i]==j)
            {
                count--;
            }
        }
    }
    
    if (count==0)
    {
        cout << "I become the guy.";
    }
    else
        cout << "Oh, my keyboard!";

}

*/

//Elephant
/*
#include <iostream>

using namespace::std;
int main()
{
    int n,a,count=0;
    
    cin >> n;
    
    a=n/5;
    
    if (n%5!=0)
    {
        a++;
    }
    
    cout << a;
    
}
*/

//Wrong Subtraction
/*
#include <iostream>

using namespace::std;
int main()
{
    long long int n;
    int k,i;
    
    cin >> n >> k;
    
    for (i=0; i<k; i++)
    {
        if (n%10==0)
        {
            n=n/10;
        }
        else if (n%10!=0)
        {
            n--;
        }
    }
    cout << n;
}
 */

/*
#include <iostream>

using namespace::std;
int main()
{
    long long int n;
    int count=0,r;
    
    cin >> n;
    
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        if (r==4 || r==7)
        {
            count++;
        }
    }
    
    if (count==4 || count==7 )
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
*/
/*
#include <iostream>

using namespace::std;
int main()
{
    long int i;
    long int a[9000],w,x,y,z,year[5000];
    
    for (i=1000; i<=9000; i++)
    {
        w=i%10;
        i=i/10;
        
        x=i%10;
        i=i/10;
        
        y=i%10;
        i=i/10;
        
        z=i%10;
        
        if (w==x || w==y ||  w==z || x==y || x==z || y==z)
        {
            year[i]=i;
        }
    }
    
    long int count=0;
    long int n;
    
    cin >> n;
    
    for (i=1000; i<=9000; i++)
    {
        if (n==year[i])
        {
            count=year[i];
        }
        else
            n++;
            continue;
    }
    
    cout << count;
}
*/

//The new year : meeting friends


/*
#include <iostream>

using namespace::std;
int main()
{
    int i,j,a[3];
    
    
    for (i=0; i<3; i++)
    {
        cin >> a[i];
    }
    
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            int temp;
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    for (i=0; i<3; i++)
    {
        if (a[i]<0)
        {
            a[i]=-(a[i]);
        }
    }
    
    int x=a[1]-a[0];
    int y=a[2]-a[1];
    
    if (x<0)
    {
        x=-(x);
    }
    else if (y<0)
    {
        y=-(y);
    }
    
    cout << x+y;
}
*/


//Add Odd or Subtract Even
/*
#include <iostream>

using namespace::std;
int main()
{
    
    int m,t;
    
    cin >> t;
    
    m=t;
    int ans[t];
    
    while (t--)
    {
        long long int a,b,c;
        
        cin >> a >> b;
        
        int count=0;
        
        if (a>b)
        {
            c=a-b;
            
            if (c%2==0)
            {
                count++;
            }
            else
                count+=2;
        }
        else if (a<b)
        {
            c=b-a;
            if (c%2==0)
            {
                count+=2;
            }
            else
                count++;
        }
        else
                count=0;
        
        ans[t]=count;
    }
    
    while (m--)
    {
        cout << ans[m] << endl;
    }
}
*/

//Spy Detected!
/*
#include <iostream>

using namespace::std;
int main()
{
    int t,m,i;
    
    cin >> t;
    
    m=t;
    int ans[t];
    
    while (t--)
    {
        int n;
        
        cin >> n;
        
        int a[n],count=0;
        
        for (i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        for (i=0; i<n-1; i++)
        {
            if (a[i]!=a[i+1] && i!=0)
            {
                count=i+1;
                break;
            }
            else if (a[i]!=a[i+1] && (i==0 || i==1))
            {
                count=i;
            }
                
        }
        
        ans[t]=count+1;
        
        
    }
    
    while (m--)
    {
        cout << ans[m] << endl;
    }
    
}
*/

/*
#include <iostream>

using namespace::std;
int main()
{
    int t,m,i;
    
    cin >> t;
    
    m=t;
    int ans[t];
    
    while (t--)
    {
        int n;
        
        cin >> n;
        
        int a[n],count=0;
        
        for (i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        for (i=0; i<n-1; i++)
        {
            if (a[i] != a[i + 1] && a[i + 1] != a[i + 2])
            {
                cout << i + 2 << endl;
                break;
            }
            if (a[i] != a[i + 1] && a[i + 1] == a[i + 2])
            {
                cout << i + 1 << endl;
                break;
            }
        }
        
        ans[t]=count+1;
        
        
    }
    
    while (m--)
    {
        cout << ans[m] << endl;
    }
    
}
*/

//Maximum GCD
/*
#include <iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>

using namespace::std;
int main()
{
    
    int t,m;
    
    cin >> t;
    
    m=t;
    long long int ans[t];
    
    while (t--)
    {
        long long int n;
        
        cin >> n;
        
        long long int x=n/2;
        
        ans[t]=x;
        
    }
    
    while (m--)
    {
        cout << ans[m] << endl;
    }
    
    
    
}
*/

//Black Square
/*
#include <iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>

using namespace::std;
int main()
{
    
    int i,a[4],sum=0,n;
    
    for (i=0; i<4; i++)
    {
        cin >> a[i];
    }
    
    string s;
    
    cin >> s;
    
    n=s.length();
    
    for (i=0; i<n; i++)
    {
        if (s[i]=='1')
        {
            sum=sum+a[0];
        }
        else if (s[i]=='2')
        {
            sum=sum+a[1];
        }
        else if (s[i]=='3')
        {
            sum=sum+a[2];
        }
        else if (s[i]=='4')
        {
            sum=sum+a[3];
        }
    }
    
    cout << sum;
    
    
}
*/

//. Phoenix and Balance
/*
#include <iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>

using namespace::std;
int main()
{
    int i,t;
    
    cin >> t;
    
    while (t--)
    {
        int n;
        
        cin >> n;
        
        long long int x = 0;
        
        for (i=0; i<=n; i++)
        {
            if (n==2)
            {
                x=2;
            }
            else if (n==i)
            {
                x=2*(i-1)-2;
            }
        }
        cout << x << endl;
    }

}
*/
/*
#include <iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace::std;
int main()
{
    int t,i,n;
    
    cin >> t;
    
    n=t;
    
    while (t--)
    {
        
        string s,s1;
        
        cin >> s;
        
        int a=s.length();
        
        if (a>10)
        {
            s1=s[0]+to_string(a-2)+s[a-1];
        }
        else if(a<=10)
        {
            s1=s;
        }
        
        cout << s1 << endl;
    }
}
*/
/*
#include <iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace::std;
int main()
{
    double n,m,a;
    
    cin >> n >> m >> a;
    
    cout << (long long)ceil(n/a)*(long long)ceil(m/a) << endl;
}
 
*/
//Petya and strings
/*
using namespace::std;
int main()
{
    string s1,s2;
    
    cin >> s1 >> s2 ;
    
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    int a=s1.compare(s2);
    
    if (a>0)
    {
        cout << "1";
    }
    else if (a<0)
    {
        cout << "-1";
    }
    else
        cout << "0";
}

*/

//

using namespace::std;
int main()
{
    int i,j;
    string s;
    
    cin >> s;
    
    int a=s.length();
    
    for (i=0; i<a-1; i++)
    {
        for (j=0; j<a-i-1; j++)
        {
            if (s[j]!='+')
            {
                if (s[j]>s[j+2])
                {
                    char temp;
                    temp=s[j];
                    s[j]=s[j+2];
                    s[j+2]=temp;
                }
            }
        }
    }
    
    cout << s;
    
    
}
//************************************************************** 
	                   // 37 : A. Oath of the Night's Watch
	int n, c = 0;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 1; i < n; i++)
	{
		if (v[i] > v[0] && v[n - 1] > v[i])
		{
			c++;
		}
	}
	cout << c << endl;
	//************************************************************** */





/*	//************************************************************** 
	                   // 36 : A. A Good Contest
	int n, after, before;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> after >> before;
		if ((after >= 2400) && (before > after))
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	//************************************************************** */





/*	//**************************************************************
	                  // 35 : A. Second Order Statistics
	int n, x;
	cin >> n;
	set <int> s;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
	set <int> ::iterator it = s.begin();
	it++;
	if (s.size() == 1)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << *it << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
	                 // 34 : A. Arpa’s hard exam and Mehrdad’s naive cheat
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << "1" << endl;
	}
	else if (n % 4 == 0)
	{
		cout << "6" << endl;
	}
	else if (n % 4 == 1)
	{
		cout << "8" << endl;
	}
	else if (n % 4 == 2)
	{
		cout << "4" << endl;
	}
	else if (n % 4 == 3)
	{
		cout << "2" << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
	                   // 33 : A. Brain's Photos
	int n, m, freq[26] = { 0 };
	char c;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> c;
			freq[c - 'A']++;
		}
	}
    //'C' (cyan)   'M' (magenta)    'Y' (yellow)     'W' (white)     'G' (grey)     'B' (black)
	if ((freq['C' - 'A']) || (freq['M' - 'A']) || (freq['Y' - 'A']))
	{
		cout << "#Color" << endl;
	}
	else
	{
		cout << "#Black&White" << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
	                  // 32 : A. Police Recruits
	int n, police = 0, crime = 0, c = 0;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] < 0)
		{
			crime++;
			if (police == 0)
			{
				c++;
			}
			else if (police && crime)
			{
				police--;
				crime--;
			}
		}
		else
		{
			police += v[i];
		}

	}
	cout << c << endl;
	//************************************************************** */





/*	//**************************************************************
	                 // 31 : A. Is it rated?
	int n;
	bool f1 = false, f2 = false;
	cin >> n;
	vector <int> v1(n), v2(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v1[i] >> v2[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (v1[i] != v2[i])
		{
			f1 = true;
			break;
		}
	}
	for (int i = 0; i < n-1; i++)
	{
		if (v1[i] < v1[i + 1])
		{
			f2 = true;
			break;
		}
	}
	if (f1)
	{
		cout << "rated" << endl;
	}
	else if (f2)
	{
		cout << "unrated" << endl;
	}
	else
	{
		cout << "maybe" << endl;
	}
	//************************************************************** */





/*	//**************************************************************
	                // 30 : A. Flag 
	int n, m;
	bool f = true;
	char c1 = '#', c2 = '@';
	cin >> n >> m;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (i % 2 == 0)
		{
			c1 = s[0];
		}
		else
		{
			c2 = s[0];
		}
		if (c1 == c2)
		{
			f = false;
		}
		for (int i = 0; i < s.size() -1; i++)
		{
			if ((s[i] != s[i + 1]))
			{
				cout << "NO" << endl;
				return 0;
			}
		}
		if (!f)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	//************************************************************** */





/*	//**************************************************************
	                // 29 : A. Soldier and Bananas
	long long k, n, w, totalprice = 0;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++)
	{
		totalprice += i * k;
	}
	if (totalprice <= n)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << abs(totalprice - n) << endl;
	}
	//************************************************************** */





/*	//**************************************************************
	                // 28 : A. Elephant
	float x;
	cin >> x;
	cout << ceil(x / 5) << endl;
	//************************************************************** */





/*	//**************************************************************
	                // 27 : A. The New Year: Meeting Friends
	vector <int> v(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
	}
	cout << (*max_element(v.begin(), v.end())) - (*min_element(v.begin(), v.end()));
	//************************************************************** */





/*	//************************************************************** 
					// 26 : A. Greg's Workout
	int n, c = 1, chest = 0, biceps = 0, back = 0;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (c == 1)
		{
			chest += v[i];
			c++;
		}
		else if (c == 2)
		{
			biceps += v[i];
			c++;
		}
		else if (c == 3)
		{
			back += v[i];
			c = 1;
		}
	}
	if (max({ chest, biceps, back }) == chest)
	{
		cout << "chest" << endl;
	}
	else if (max({ chest, biceps, back }) == biceps)
	{
		cout << "biceps" << endl;
	}
	else
	{
		cout << "back" << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
	               // 25 : A. Colorful Stones (Simplified Edition)
	string s, t;
	cin >> s >> t;
	int pos = 0;
	for (int i = 0; i < t.size(); i++)
	{
		if (s[pos] == t[i])
		{
			pos++;
		}
	}
	cout << pos + 1 << endl;
	//************************************************************** */





/*	//**************************************************************
	               // 24 : B. Equal Candies
	long long t, n, sum, mn;
	cin >> t;
	while (t--)
	{
		sum = 0;
		cin >> n;
		vector <long long> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		mn = *min_element(v.begin(), v.end());
		for (int j = 0; j < n; j++)
		{
			v[j] -= mn;
			sum += v[j];
		}
		cout << sum << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
	                // 23 : A. Ultra-Fast Mathematician
	string s, t;
	cin >> s >> t;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != t[i])
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	//************************************************************** */





/*	//************************************************************** 
	               // 22 : A. Wrong Subtraction
	int n, k;
	cin >> n >> k;
	while (k--)
	{
		if (n % 10 == 0)
		{
			n /= 10;
		}
		else
		{
			n--;
		}
	}
	cout << n << endl;
	//************************************************************** */





/*	//************************************************************** 
	                // 21 : A. Pangram
	int n;
	cin >> n;
	if (n < 26)
	{
		cout << "NO" << endl;
		return 0;
	}
	set <char> s;
	char c;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (c >= 'A' && c <= 'Z')
		{
			c = c + 32;
		}
		s.insert(c);
	}
	if (s.size() == 26)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
	                // 20 : A. Sereja and Dima
	int n, Sereja = 0, Dima = 0;
	cin >> n;
	deque <int> d(n);
	for (int i = 0; i < n; i++)
	{
		cin >> d[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			if (d.back() > d.front())
			{
				Sereja += d.back();
				d.pop_back();
			}
			else
			{
				Sereja += d.front();
				d.pop_front();
			}
		}
		else
		{
			if (d.back() > d.front())
			{
				Dima += d.back();
				d.pop_back();
			}
			else
			{
				Dima += d.front();
				d.pop_front();
			}
		}
	}
	cout << Sereja << " " << Dima << endl;
	//************************************************************** */





/*	//************************************************************** 
	                // 19 : A. Games
	int n, c = 0;
	cin >> n;
	vector <int> v1(n), v2(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v1[i] >> v2[i];
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v1[i] == v2[j])
			{
				c++;
			}
		}
	}
	cout << c << endl;
	//************************************************************** */





/*	//************************************************************** 
	              // 18 : A. Young Physicist
	int n, x, y, z, sumx = 0, sumy = 0, sumz = 0;
	cin >> n;
	while (n--)
	{
		cin >> x >> y >> z;
		sumx += x;
		sumy += y;
		sumz += z;
	}
	if (sumx == 0 && sumy == 0 && sumz == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	//************************************************************** */





/*	//**************************************************************
	             // 17 : A. Juicer
	int n, b, d, c = 0;
	long long sum = 0;
	cin >> n >> b >> d;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] <= b)
		{
			sum += v[i];
		}
		if (sum > d)
		{
			c++;
			sum = 0;
		}
	}
	cout << c << endl;
	//************************************************************** */





/*	//************************************************************** 
	            // 16 : A. Free Ice Cream
	long long n, x, count = 0;
	char c;
	cin >> n >> x;
	long long sum = x;
	while (n--)
	{
		cin >> c >> x;
		if (c == '+')
		{
			sum += x;
		}
		else
		{
			if (sum - x < 0)
			{
				count++;
			}
			else
			{
				sum -= x;
			}
		}
	}
	cout << sum << " " << count << endl;
	//************************************************************** */





/*	//**************************************************************
	           // 15 : A. Is your horseshoe on the other hoof?
	int arr[4], c = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 4);
	for (int j = 0; j < 3; j++)
	{
		if (arr[j] == arr[j + 1])
		{
			c++;
		}
	}
	cout << c << endl;
	//************************************************************** */





/*	//************************************************************** 
	               // 14 : A. Boy or Girl
	string s;
	cin >> s;
	vector <int> freq(26);
	int c = 0;
	for (int i = 0; i < s.size(); i++)
	{
		freq[s[i] - 'a']++;
	}
	for (int j = 0; j < 26; j++)
	{
		if (freq[j])
		{
			c++;
		}
	}
	if (c % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!" << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
	               // 13 : A. Petya and Strings
	string s1, s2;
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if (s1 > s2)
	{
		cout << "1" << endl;
	}
	else if (s1 < s2)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
	             // 12 : A. Bear and Big Brother
	long long a, b, c = 0;
	cin >> a >> b;
	while (b > a || b==a)
	{
		a *= 3;
		b *= 2;
		c++;
	}
	cout << c << endl;
	//************************************************************** */





/*	//************************************************************** 
	             // 11 : A. Vanya and Fence
	int n, h, a, sum = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a <= h)
		{
			sum++;
		}
		else
		{
			sum += 2;
		}
	}
	cout << sum << endl;
	//************************************************************** */





/*	//************************************************************** 
	             // 10 : A. Stones on the Table
	int n, c = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			c++;
		}
	}
	cout << c << endl;
	//************************************************************** */

	
	
	
	
/*	//**************************************************************
	           // 9 : A. Buy a Shovel
	int k, r;
	cin >> k >> r;
	long long shovel;
	for (int i = 1; i <= 1000; i++)
	{
		shovel = i * k;
		if ((shovel % 10 == r)||(shovel % 10 == 0))
		{
			cout << i << endl;
			return 0;
		}
	}
	//************************************************************** */





/*	//************************************************************** 
	              // 8 : A. Good Number
	int n, k;
	long long c = 0;
	cin >> n >> k;
	while (n--)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		int freq[10] = { 0 };
		bool f = true;
		for (int i = 0; i < s.size(); i++)
		{
			freq[s[i] - '0']++;
		}
		for (int i = 0; i <= k; i++)
		{
			if (freq[i] == 0 && (i <= k))
			{
				f = false;
				break;
			}
		}
		if (f)
		{
			c++;
		}
	}
	cout << c << endl;
	//************************************************************** */





/*	//**************************************************************
	             // 7 : A. Black Square
	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;
	string s;
	cin >> s;
	long long calories = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] - '0' == 1)
		{
			calories += a1;
		}
		else if (s[i] - '0' == 2)
		{
			calories += a2;
		}
		else if (s[i] - '0' == 3)
		{
			calories += a3;
		}
		else
		{
			calories += a4;
		}
	}
	cout << calories << endl;
	//************************************************************** */





/*	//**************************************************************
	            // 6 : A. I Wanna Be the Guy
	int n, p, q;
	cin >> n;
	int frq[101] = { 0 };
	cin >> p;
	vector <int> v(p);
	for (int i = 0; i < p; i++)
	{
		cin >> v[i];
		frq[v[i]]++;
	}
	cin >> q;
	vector <int> v2(q);
	for (int i = 0; i < q; i++)
	{
		cin >> v2[i];
		frq[v2[i]]++;
	}
	bool f = true;
	for (int i = 1; i <= n; i++)
	{
		if (frq[i] == 0)
		{
			f = false;
			break;
		}
	}
	if (f)
	{
		cout << "I become the guy." << endl;
	}
	else
	{
		cout << "Oh, my keyboard!" << endl;
	}
	//************************************************************** */





/*	//************************************************************** 
     	               // 5 : A. Team
	int n, x, y, z, c = 0;
	cin >> n;
	while (n--)
	{
		cin >> x >> y >> z;
		if ((x + y + z) > 1)
		{
			c++;
		}
	}
	cout << c << endl;
	//************************************************************** */





/*	//************************************************************** 
	                // 4 : A. Helpful Maths
	string s, n, m;
	cin >> s;
	if (s.size() == 1)
	{
		cout << s << endl;
		return 0;
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '+')
		{
			m += s[i];
		}
		else
		{
			n += s[i];
		}
	}
	sort(n.begin(), n.end());
	for (int i = 0; i < n.size(); i++)
	{
		cout << n[i];
		if (i == n.size() - 1)
		{
			return 0;
		}
		else
		{
			cout << "+";
		}
	}
	//************************************************************** */





/*	//************************************************************** 
	              // 3 : A. Anton and Letters
    string s, t;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			t += s[i];
		}
	}
	sort(t.begin(), t.end());
	long long c = 0;
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i] != t[i + 1])
		{
			c++;
		}
	}
	cout << c << endl;
	//************************************************************** */
	
	
	
	
	
/*	//************************************************************** 
                // 2 : A. Anton and Polyhedrons
    long long n, c = 0;
	cin >> n;
	string s;
	while (n--)
	{
		cin >> s;
		if (s == "Tetrahedron")
		{
			c += 4;
		}
		else if (s == "Cube")
		{
			c += 6;
		}
		else if (s == "Octahedron")
		{
			c += 8;
		}
		else if (s == "Dodecahedron")
		{
			c += 12;
		}
		else if (s == "Icosahedron")
		{
			c += 20;
		}
	}
	cout << c << endl;
	//************************************************************** */





/*	//************************************************************** 
                // 1 : A. Magnets
    int n;
    cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	long long c = 1;
	for (int j = 0; j < v.size() - 1; j++)
	{
		if (v[j] != v[j + 1])
		{
			c++;
		}
	}
	cout << c << endl;
	//************************************************************** */
	return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1;
//    cin >> t;
    while(t--)
    {
        solve();
    }
}
#include <iostream>
 
using namespace std;
int main(int argc, char *argv[]) {
	long long int m , n , a;
	cin >> n >> m >> a ;
	long long int count = 0 , masahat = m * n;
	count = (( n + a - 1 ) / a )* (( m + a - 1 ) / a );
		cout << count;
}
---
long long x,y,z,x2,y2,z2,c;
   cin>>x>>y>>z;
   x2=x/z,y2=y/z,c=x2*y2;
   //if(x2==1&&y2==1) c=2;
   if(x%z) c+=y2;
   if(y%z) c+=x2;
   if(x%z&&y%z) c++;
   cout<<c;
        return 0;
}
-----
#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <iomanip>

using namespace std;

typedef long long ll;

#define P pair
typedef P<int, int> Pii;
typedef P<ll, ll> Pll;
#define mp make_pair
#define fi first
#define se second

#define V vector
typedef V<int> Vi;
typedef V<Pii> VPii;
typedef V<ll> Vll;
typedef V<Pll> VPll;

#define pb push_back
#define all(v) (v).begin(), (v).end()
#define forn(i, n, l) for (int i = l; i < n; i++)

typedef set<int> si;
typedef multiset<int> mi;
typedef map<int, int> mii;

void task20C() {
    int n, m;
    cin >> n >> m;
    V<VPii> graph(n + 1, VPii(n + 1));
    forn (k, m, 0) {
        int i, j, w;
        cin >> i >> j >> w;
        graph[i][j].fi = w;
        graph[i][j].se = j;
        graph[j][i].fi = w;
        graph[j][i].se = i;
    }
    Vll dist(n + 1, 1e18);
    Vi p(n + 1);
    dist[1] = 0;
    p[1] = 1;
    priority_queue<Pii, VPii, greater<Pii>> q;
    q.push(mp(0, 1));
    while (!q.empty()) {
        Pii u = q.top();
        q.pop();
        if (u.fi > dist[u.se]) continue;
        forn(i, n + 1, 1) {
            int v = graph[u.se][i].se, len = graph[u.se][i].fi;
            if (dist[v] > dist[u.se] + len) {
                p[v] = u.se;
                dist[v] = dist[u.se] + len;
                q.push(mp(dist[v], v));
            }
        }
    }
    if (dist[n] == 1e18) cout << -1;
    else {
        int i = n;
        string c;
        while (i != 1) {
            string pl = to_string(i);
            reverse(pl.begin(), pl.end());
            c += pl + " ";
            i = p[i];
        }
        cout << 1;
        for (int i = (int) c.size() - 1; i > -1; i--)
            cout << c[i];
    }
}

void task768_2_A() {
    int n, maxA = 0, maxB = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > maxA)
            maxA = a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        if (b[i] > maxB)
            maxB = b[i];
    }
    if (maxB > maxA)
        swap(a, b);

    for (int i = 0; i < n; ++i)
        if (a[i] < b[i])
            swap(a[i], b[i]);

    maxA = 0, maxB = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > maxA)
            maxA = a[i];
        if (b[i] > maxB)
            maxB = b[i];
    }
    cout << maxA * maxB;
}

void task764_3_A() {
    int n; cin >> n;
    int mx = 0, mn = 1e9 + 1;
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        if (num > mx)
            mx = num;
        if (num < mn)
            mn = num;
    }
    cout << mx - mn;
}

void task764_3_B() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((((a + c) % 2) == 0 && ((a + c) / 2) % b == 0) || (a <= b <= c && (b - (c - b) > 0) && (b - (c - b)) % a == 0) || (a <= b && (b + b - a) % c == 0))
        cout << "YES";
    else {
        swap(a, c);
        if ((((a + c) % 2) == 0 && ((a + c) / 2) % b == 0) || (a <= b <= c && (b - (c - b) > 0) && (b - (c - b)) % a == 0) || (a <= b && (b + b - a) % c == 0))
            cout << "YES";
        else
            cout << "NO";
    }
}

void task769_2_A() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n > 2 || s == "11" || s == "00")
        cout << "NO";
    else
        cout << "YES";
}

void task767_2_A() {
    int n, now; cin >> n >> now;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    multiset<pair<int, int>> pr;
    for (int i = 0; i < n; ++i)
        pr.insert(make_pair(a[i], b[i]));
    for (auto i : pr) {
        if (i.first > now)
            break;
        now += i.second;
    }
    cout << now;
}

void task767_2_B() {
    int l, r, k;
    cin >> l >> r >> k;
    if (l == r) {
        if (l == 1)
            cout << "NO";
        else
            cout << "YES";
        return;
    }
    if ((r - l + 1) - (r / 2 - (l - 1) / 2) <= k)
        cout << "YES";
    else
        cout << "NO";
}

void task122_Rated_2_A() {
    int n; cin >> n;
    if (n % 7 == 0)
        cout << n;
    else if (n % 10 > n % 7)
        cout << n - n % 7;
    else
        cout << n + 7 - n % 7;
}

void task122_Rated_2_B() {
    string s;
    cin >> s;
    int n = s.size();
//    vector<pair<int, int>> pref(n);
    int zero = 0, one = 0;
    for (int i = 0; i < n; ++i) {
//        pref[i] = make_pair(0, 0);
//        if (i != 0)
//            pref[i] = pref[i - 1];
//        pref[i].first += s[i] == '0';
//        pref[i].second += s[i] == '1';
        if (s[i] == '0')
            zero++;
        else
            one++;
    }
    if (zero != one)
        cout << min(zero, one);
    else {
        int first, second;
        if (s[n - 1] == '0')
            first = min(zero - 1, one);
        else
            first = min(zero, one - 1);

        if (s[0] == '0')
            second = min(zero - 1, one);
        else
            second = min(zero, one - 1);
        cout << max(first, second);
    }

}

void task122_Rated_2_C() {
    ll hc, dc, hm, dm, k, w, a;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
    for (ll i = 0; i <= k; ++i) {
        ll hc1 = hc + a * i;
        ll dc1 = dc + w * (k - i);
        ll numC = (hm + dc1 - 1) / dc1;
        ll numM = (hc1 + dm - 1) / dm;
        if (numC <= numM) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

void task122_Rated_2_D() {
    int n, k; cin >> n >> k;
    vector<int> c(n + 1), num(n + 1);
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        int f = log2(b);
        num[i + 1] += f;
        b -= (1 << f);
        while (b != 0) {
            int j = log2(b);
            num[i + 1]++;
            b -= (1 << j);
        }
    }
    for (int i = 0; i < n; ++i)
        cin >> c[i + 1];
    vector<vector<int>> dp(n + 1, vector<int>(k + 1));
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < k + 1; ++j) {
            if (j >= num[i])
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - num[i]] + c[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][k];
}

void task121_Rated_2_A() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> fs(30);
    for (int i = 0; i < n; ++i)
        fs[s[i] - 'a']++;
    for (int i = 0; i < 30; ++i)
        for (int j = 0; j < fs[i]; ++j)
            cout << (char)('a' + i);
}

void task121_Rated_2_B() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = n - 1, j = n - 2; j >= 0; --i, --j) {
        if (s[i] - '0' + s[j] - '0' > 10) {
            cout << s.substr(0, j) << s[i] + s[j] - '0' - '0' << s.substr(i + 1, n);
            return;
        }
    }
    cout << s[0] - '0' + s[1] - '0' << s.substr(2, n);
}

void task762_3_B() {
    int n; cin >> n;
    cout << ((int) cbrt(n)) + ((int) sqrt(n)) - ((int) sqrt(cbrt(n)));
}

void task762_3_C() {
    string a, s;
    cin >> a >> s;
    reverse(a.begin(), a.end());
    reverse(s.begin(), s.end());
    int sn = s.size(), an = a.size();
    string b;
    for (int i = 0, j = 0; i < an; ++i) {
        if (j < sn - 1 && s[j] < '9' && s[j + 1] == '1') {
            char c = (char) (10 - (a[i] - '0') + s[j]);
            if (c > '9')
                b += "01";
            else
                b += c;
            j++;
        } else
            b += (s[j] - a[i] + '0');
        j++;
    }
    reverse(b.begin(), b.end());
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] < '0' || b[i] > '9') {
            cout << -1;
            return;
        }
    }
    int i = 0;
    for (i; i < b.size(); ++i)
        if (b[i] != '0')
            break;
    cout << b.substr(i, b.size());
}

void taskHello2022_A() {
    int n, k;
    cin >> n >> k;
    if (k > (n + 1) / 2) {
        cout << -1 << '\n';
        return;
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i % 2 == 0 && j == i && count < k) {
                cout << 'R';
                count++;
            } else
                cout << '.';
        }
        cout << '\n';
    }
}

void taskHello2022_B() {
    int n;
    cin >> n;
    int mn = 1e9 + 2, mx = 0, cn = 0, forl = 0, forr = 0, ln = 0;
    for (int i = 0; i < n; ++i) {
        int l, r, c;
        cin >> l >> r >> c;
        if (l < mn)
            mn = l, forl = c;
        else if (l == mn && c < forl)
            forl = c;

        if (r > mx)
            mx = r, forr = c;
        else if (r == mx && c < forr)
            forr = c;

        if (ln < r - l + 1)
            ln = r - l + 1, cn = c;
        else if (ln == r - l + 1 && c < cn)
            cn = c;

        int best_now = forl + forr;
        if (ln == mx - mn + 1 && cn < best_now)
            best_now = cn;
        cout << best_now << '\n';
    }
}

void taskGoodBye2021_A() {
    int n; cin >> n;
    vector<int> a(101);
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        if (b < 0)
            b = -b;
        a[b]++;
    }
    int count = 0;
    for (int i = 0; i < 101; ++i) {
        if (a[i] >= 2 && i != 0)
            count += 2;
        else if (a[i])
            count++;
    }
    cout << count;
}

void task770_2_C() {
    int n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << "YES" << '\n';
        for (int i = 1; i < n + 1; ++i)
            cout << i << '\n';
        return;
    } else {
        if (n * k % 2 == 1) {
            cout << "NO\n";
            return;
        }
        set<int> no, yes;
        for (int i = 1; i < n * k + 1; ++i) {
            if (i % 2 == 0)
                yes.insert(i);
            else
                no.insert(i);
        }
        auto forNo = no.begin(), forYes = yes.begin();
        if (no.size() % k != 0 || yes.size() % k != 0) {
            cout << "NO" << '\n';
            return;
        }
        cout << "YES" << '\n';
        for (int i = 0; i < no.size() / k; ++i) {
            for (int j = 0; j < k; ++j) {
                cout << *forNo << ' ';
                forNo++;
            }
            cout << '\n';
        }
        for (int i = 0; i < yes.size() / k; ++i) {
            for (int j = 0; j < k; ++j) {
                cout << *forYes << ' ';
                forYes++;
            }
            cout << '\n';
        }
    }
}

void task770_2_E() {
    int m;
    cin >> m;
    map<int, int> L, R;
    string ans;
    for (int i = 0; i < m; ++i) {
        int n;
        cin >> n;
        int countL = 0, countR = 0;
        for (int j = 0; j < n; ++j) {
            int a; cin >> a;
            if (!L.count(a))
                L[a] = 0;
            if (!R.count(a))
                R[a] = 0;
            if (countL == n / 2) {
                R[a]++;
                countR++;
                ans += 'R';
                continue;
            }
            if (countR == n / 2) {
                L[a]++;
                countL++;
                ans += 'L';
                continue;
            }
            if (L[a] < R[a]) {
                L[a]++;
                countL++;
                ans += 'L';
            } else {
                R[a]++;
                countR++;
                ans += 'R';
            }
        }
        ans += '\n';
    }
    for (auto i : L) {
        if (R[i.first] != i.second) {
            cout << "NO";
            return;
        }
    }
    cout << "YES\n" << ans;
}

void task764_3_C() {
    int n; cin >> n;
    vector<int> a(n);
    vector<bool> u(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        while (a[i] > n || (a[i] <= n && u[a[i]]))
            a[i] /= 2;
        if (a[i] == 0) {
            cout << "NO";
            return;
        }
        u[a[i]] = true;
    }
    cout << "YES";
}

void task764_3_D() {
    int n, k;
    cin >> n >> k;
    vector<int> count(26);
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        ++count[c - 'a'];
    }
    int p = 0, no = 0;
    for (int i = 0; i < 26; ++i) {
        p += count[i] / 2;
        no += count[i] % 2;
    }
    int cl = 2 * (p / k);
    no += 2 * (p % k);
    cl += (no / k) >= 1;
    cout << cl;
}

void task_Educ119_2_A() {
    string s;
    cin >> s;
    int count = 0;
    for (char i : s)
        if (i == 'E')
            count++;
    if (count == s.size() - 1)
        cout << "NO";
    else
        cout << "YES";
}

void task_Educ119_2_B() {
    ll w, h, ans = 0;
    cin >> w >> h;
    for (int j = 0; j < 4; ++j) {
        ll k; cin >> k;
        vector<int> points(k);
        for (int i = 0; i < k; ++i)
            cin >> points[i];
        if (j < 2)
            ans = max(ans, (points[k - 1] - points[0]) * h);
        else
            ans = max(ans, (points[k - 1] - points[0]) * w);
    }
    cout << ans;
}

void task_Educ119_2_C() {
    ll n, k, x;
    cin >> n >> k >> x;
    string s;
    cin >> s;
    vector<ll> count;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '*') {
            count.push_back(0);
            while (i < n - 1 && s[i + 1] == '*')
                i++, count[count.size() - 1]++;
        }
    }
    // think about it
}

void task763_2_A() {
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    vector<int> p;
    if (cd >= cb)
        p.push_back(cd - cb);
    if (rd >= rb)
        p.push_back(rd - rb);
    if (cd <= cb)
        p.push_back(2 * m - cd - cb);
    if (rd <= rb)
        p.push_back(2 * n - rd - rb);
    int Min = 1e9;
    for (int i = 0; i < p.size(); ++i)
        if (p[i] < Min)
            Min = p[i];
    cout << Min;
}

void taskEduc120_2_A() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || a + c == b || b + c == a || (a == b && c % 2 == 0) || (a == c && b % 2 == 0) || (b == c && a % 2 == 0))
        cout << "YES";
    else
        cout << "NO";
}

void task760_3_A() {
    int a[7];
    for (int i = 0; i < 7; ++i)
        cin >> a[i];
    cout << a[0] << ' ' << a[1] << ' ' << a[6] - a[1] - a[0];
}

void task760_3_B() {
    int n;
    cin >> n;
    string ans, last;
    bool flg = false;
    for (int i = 0; i < n - 2; ++i) {
        string nw;
        cin >> nw;
        if (i == 0 || flg || nw[0] == last[1]) {
            ans += nw[0];
            last = nw;
        } else {
            flg = true;
            ans += last[1];
            ans += nw[0];
        }
        if (i == n - 3)
            ans += nw[1];
    }
    if (!flg)
        ans += 'a';
    cout << ans;
}

void task766_2_A() {
    int n, m, r, c, count = 0;
    cin >> n >> m >> r >> c;
    --r, --c;
    bool flg = false, flg1 = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char k; cin >> k;
            if (flg)
                continue;
            count += (k == 'B');
            if (i == r && j == c && k =='B') {
                cout << 0;
                flg = true;
            } else if ((i == r || j == c) && k == 'B') {
                flg1 = true;
            }
        }
    }
    if (count == 0) {
        cout << -1;
        return;
    }
    if (flg1 && !flg)
        cout << 1;
    else if (!flg)
        cout << 2;
}

void task766_2_B() {
    int n, m;
    cin >> n >> m;
    vector<int> p;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            p.push_back(max(max(i + j, i + m - j - 1), max(j + n - i - 1, m - 1 - j + n - 1 - i)));
    sort(p.begin(), p.end());
    for (int i = 0; i < n * m; ++i)
        cout << p[i] << ' ';
}

void taskGlobal18_A() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        count += a;
    }
    cout << (count % n + n - 1) / n;
}

void task756_3_A() {
    string n; cin >> n;
    if ((n[n.length() - 1] - '0') % 2 == 0) {
        cout << 0;
        return;
    }
    if ((n[0] - '0') % 2 == 0) {
        cout << 1;
        return;
    }
    for (int i = 0; i < n.length(); ++i) {
        if ((n[i] - '0') % 2 == 0) {
            cout << 2;
            return;
        }
    }
    cout << -1;
}

void task756_3_B() {
    ll a, b;
    cin >> a >> b;
    cout << min(min(a, b), (a + b) / 4);
}

void task757_2_A() {
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> c(n);
    for (int i = 0; i < n; ++i)
        cin >> c[i];
    sort(c.begin(), c.end());
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (c[i] < l)
            continue;
        if (c[i] > r)
            break;
        if (k >= c[i]) {
            k -= c[i];
            count++;
        } else
            break;
    }
    cout << count;
}

void task757_2_B() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> h;
    for (ll i = 0; i < n; ++i) {
        int num; cin >> num;
        h.push_back(make_pair(num, i));
    }
    sort(h.begin(), h.end());
    reverse(h.begin(), h.end());
    ll now = 1, minus = 1;
    vector<ll> a(n), k(n);
    for (ll i = 0; i < n; ++i)
        a[h[i].second] = i;
    ll count = 0;
    for (auto i : h) {
        k[i.second] = minus * now;
        count += 2 * abs(now) * i.first;
        minus = -minus;
        if (minus == 1)
            now++;
    }
    cout << count << "\n0 ";
    for (ll i = 0; i < n; ++i) {
        cout << k[i] << ' ';
    }
}

void task756_3_C() {
    int n; cin >> n;
    vector<int> p(n);
    deque<int> ans;
    int l = 0, r = n - 1;
    for (int i = 0; i < n; ++i)
        cin >> p[i];
    if (n == 1) {
        cout << 1;
        return;
    }
    if (p[r] != n && p[0] != n) {
        cout << -1;
        return;
    }
    if (p[r] == n)
        --r;
    else
        ++l;
    ans.push_back(n);
    while (r != l) {
        if (min(p[l], p[r]) == p[l]) {
            ans.push_back(p[r]);
            --r;
        } else {
            ans.push_front(p[l]);
            ++l;
        }
    }
    ans.push_front(p[l]);
    for (int i : ans)
        cout << i << ' ';
}

void taskEduc118_Rated_2_A() {
    int x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    int l1 = log10(x1), l2 = log10(x2);
    if (l1 + p1 < l2 + p2) {
        cout << '<';
        return;
    } else if (l1 + p1 > l2 + p2) {
        cout << '>';
        return;
    }
    if (l1 == l2) {
        if (x1 < x2)
            cout << '<';
        else if (x1 > x2)
            cout << '>';
        else
            cout << '=';
        return;
    }
    bool swapped = false;
    if (l1 > l2) {
        swap(x1, x2);
        swap(l1, l2);
        swap(p1, p2);
        swapped = true;
    }
    int new1 = x1 * pow(10, l2 - l1);
    if (new1 < x2) {
        if (swapped)
            cout << '>';
        else
            cout << '<';
    } else if (new1 > x2) {
        if (swapped)
            cout << '<';
        else
            cout << '>';
    } else
        cout << '=';
}

void taskEduc118_Rated_2_B() {
    int n, mn = 1e6 + 7;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < mn)
            mn = a[i];
    }
    int count = 0;
    for (int i = 0; i < n && count < n / 2; ++i) {
        if (a[i] == mn)
            continue;
        cout << a[i] << ' ' << mn << '\n';
        count++;
    }
}

bool can(ll m, ll n, ll h, vector<int> &d) {
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        if (i == n - 1 || d[i] + m < d[i + 1])
            count += m;
        else
            count += d[i + 1] - d[i];
    }
    if (count >= h)
        return true;
    return false;
}

void taskEduc118_Rated_2_C() {
    ll n, h;
    cin >> n >> h;
    vector<int> d(n);
    for (int i = 0; i < n; ++i)
        cin >> d[i];
    ll l = 0, r = 1e18 + 4;
    while (r - l > 1) {
        ll k = (r + l) / 2;
        if (can(k, n, h, d))
            r = k;
        else
            l = k;
    }
    cout << r;
}

void taskEduc118_Rated_2_D() {
    int n; cin >> n;
    vector<int> a(n), dp(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {

    }
}

void taskGlobal19_A() {
    int n; cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
        cin >> p[i];
    for (int i = 0; i < n - 1; ++i) {
        if (*max_element(p.begin(), p.begin() + i + 1) > *min_element(p.begin() + i + 1, p.end())) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

void taskGlobal19_B() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        int last_zero_count = 0;
        for (int j = i; j < n; ++j) {
            int zero_count = last_zero_count + (a[j] == 0);
            count += j - i + 1 + zero_count;
            last_zero_count = zero_count;
        }
    }
    cout << count;
}

void taskGlobal19_C() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll count = 0, count_m = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        if (i != 0 && i != n - 1) {
            count_m += (a[i] + 1) / 2;
            count += a[i];
        }
    }
    if (count % 2 == 1) {
        if (n == 3) {
            cout << -1;
            return;
        }
    }
    if (count <= n - 2) {
        cout << -1;
        return;
    }
    cout << count_m;
}

void taskGlobal19_E() {
    int n, m;
    cin >> n >> m;
    map<int, int> count;
    multiset<int> a;
    for (int i = 0; i < n; ++i) {
        int k;
        if (count.count(k) == 0)
            count[k] = 1;
        else
            ++count[k];
        a.insert(k);
    }
    set<pair<int, int>> bad;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        bad.insert(make_pair(x, y));
        bad.insert(make_pair(y, x));
    }
    set<pair<int, int>> count_set;
    for (auto i : count)
        count_set.insert(make_pair(i.second, i.first));
    auto end1 = a.end();
    --end1;
    ll mx;
    while (end1 != a.begin()) {
        auto end2 = count_set.end();
        --end2;
        bool flg = false;
        while (end2 != count_set.begin()) {
            if (*end1 != (*end2).second && bad.count(make_pair(*end1, (*end2).second)) == 0) {
                mx = (count[*end1] + (*end2).first) * (*end1 + (*end2).second);
                flg = true;
                break;
            }
            --end2;
        }
        if (flg)
            break;
        --end1;
    }
    auto end2 = a.end();
    --end2;
    while (end2 != a.begin()) {
        auto end1 = count_set.end();
        --end1;
        bool flg = false;
        while (end1 != count_set.begin()) {
            if (*end2 != (*end1).second && bad.count(make_pair(*end2, (*end1).second)) == 0) {
                if (mx < (count[*end2] + (*end1).first) * (*end2 + (*end1).second))
                    mx = (count[*end2] + (*end1).first) * (*end2 + (*end1).second);
                flg = true;
                break;
            }
            --end1;
        }
        --end2;
        if (flg)
            break;
    }
    cout << mx;
}

void task761_2_A() {
    string s, t;
    cin >> s >> t;
    map<int, int> count;
    set<char> sym;
    for (int i = 'a'; i < 'z' + 1; ++i) {
        count[i] = 0;
    }
    for (auto i : s) {
        ++count[i];
        sym.insert(i);
    }
    if (t[0] != 'a' || t == "acb" || count['a'] == 0 || count['b'] == 0 || count['c'] == 0) {
        for (char i : sym) {
            for (int j = 0; j < count[i]; ++j) {
                cout << i;
            }
        }
    } else if (t == "abc") {
        for (char i : sym) {
            if (i == 'b') {
                for (int j = 0; j < count['c']; ++j)
                    cout << 'c';
            } else if (i == 'c') {
                if (count['b'])
                    continue;
                else
                    for (int j = 0; j < count['c']; ++j)
                        cout << 'c';
            }
            for (int j = 0; j < count[i]; ++j)
                cout << i;
        }
    }
}

void task761_2_B() {
    int n; cin >> n;
    if (n % 2 == 0)
        cout << n - 3 << ' ' << "2 1";
    else if (n % 4 == 1)
        cout << n / 2 - 1 << ' ' << n / 2 + 1 << " 1";
    else
        cout << n / 2 - 2 << ' ' << n / 2 + 2 << " 1";
}

void task761_2_C() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());

}

void task753_3_A() {
    map<char, int> keyboard;
    for (int i = 0; i < 26; ++i) {
        char key;
        cin >> key;
        keyboard[key] = i;
    }
    string s;
    cin >> s;
    int n = s.length();
    int now = -1, time = 0;
    for (int i = 0; i < n; ++i) {
        if (now != -1)
            time += abs(now - keyboard[s[i]]);
        now = keyboard[s[i]];
    }
    cout << time;
}

void task771_2_A() {
    int n; cin >> n;
    vector<int> p(n);
    int first = 1, lg = -2;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        if (first == i + 1 && p[i] == i + 1)
            ++first;
        else if (lg == -2)
            lg = i - 1;
    }
    for (int i = lg + 1; i < n; ++i) {
        if (p[i] == first) {
            reverse(p.begin() + lg + 1, p.begin() + i + 1);
            break;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << p[i] << ' ';
    }
}

void task771_2_B() {
    int n; cin >> n;
    vector<int> ne1(n), ne2(n), da1(n), da2(n);
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a % 2 == 0) {
            da1.push_back(a);
            da2.push_back(a);
        } else {
            ne1.push_back(a);
            ne2.push_back(a);
        }
    }
    sort(ne1.begin(), ne1.end());
    sort(da1.begin(), da1.end());
    if (ne1 == ne2 && da1 == da2)
        cout << "Yes";
    else
        cout << "No";
}

void task771_2_C() {
    int n;
    cin >> n;
    vector<int> p(n);
    int count = 0;
    set<pair<int, int>> mxs;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        mxs.insert(make_pair(p[i], i));
    }
    auto maxIt = mxs.end();
    --maxIt;
    int idx = -1, mn_last = n + 1, idx_min = n;
    for (int i = n - 1; i >= (*maxIt).second; --i)
        if (p[i] <= mn_last)
            mn_last = p[i];
    bool first = true;
    while ((*maxIt).second != 0) {
        idx = (*maxIt).second;
        if (first)
            ++count;
        while (maxIt != mxs.begin() && (*maxIt).second >= idx) {
            --maxIt;
        }
        if ((*maxIt).first <= mn_last)
            ++count;
        for (int i = idx_min - 1; i > (*maxIt).second; --i) {
            if (p[i] <= mn_last) {
                mn_last = p[i];
                idx_min = i;
            }
        }
        first = false;
    }
    cout << max(count, 1);
}

void task771_2_E() {
    int n, q;
    cin >> n >> q;
    int bad = sqrt(n);
    vector<int> a(n), color(n), will_do_clr, will_do_cnt;
    for (int i = 0; i < q; ++i) {
        string s; cin >> s;
        if (s == "Color") {
            int l, r, c;
            cin >> l >> r >> c;
//            will_do_clr.push_back()
        } else if (s == "Add") {

        } else {
            cout << ' ';
        }
    }
}

void task748_3_A() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(b, c) + 1 - a, 0) << ' ' << max(max(a, c) + 1 - b, 0) << ' ' << max(max(a, b) + 1 - c, 0);
}

void task748_3_B() {
    string n; cin >> n;
    int mn = 19;
    if (stoll(n) % 25 == 0) {
        cout << 0;
        return;
    }
    for (int i = 0; i < (int) n.length(); ++i) {
        if ((n[i] - '0') % 5 != 0)
            continue;
        for (int j = 0; j < i; ++j) {
            int dif = (int) n.length() - j - 2;
            if (((n[j] - '0') * 10 + n[i] - '0') % 25 == 0 && (((n[j] - '0') * 10 + n[i] - '0') != 0 || dif != n.length() - 2))
                if (dif < mn)
                    mn = dif;
        }
    }
    cout << mn;
}

bool will_live(int m, int n, int k, vector<int> &pref) {
    return pref[k - m] < n;
}

void task748_3_C() {
    int n, k; cin >> n >> k;
    vector<int> x(k), pref(k + 1);
    for (int i = 0; i < k; ++i)
        cin >> x[i];
    sort(x.begin(), x.end());
    pref[k] = 0;
    for (int i = k - 1; i >= 0; --i)
        pref[i] = n - x[i] + pref[i + 1];
    int l = 0, r = k + 2;
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (will_live(m, n, k, pref))
            l = m;
        else
            r = m;
    }
    cout << l;
}

void taskGlobal17_A() {
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
        cout << 0;
    else if (min(n, m) == 1)
        cout << 1;
    else
        cout << 2;
}

//bool can_invite(int m, int n, vector<pair<int, int>> &f) {
//
//}

void taskGlobal17_C() {
     int n;
     cin >> n;
     vector<pair<int, int>> f(n);
     for (int i = 0; i < n; ++i)
         cin >> f[i].first >> f[i].second;
     int l = 0, r = n + 1;
//     while (r - l > 1) {
//         if ()
//     }
}

void task759_2_B() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[n - i - 1];
    int mx = a[0], count = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] > mx) {
            ++count;
            mx = a[i];
        }
    }
    cout << count;
}

int calcR(int k, int n, multiset<int> &x) {
    int count = 0, last = 0, now = 0;
    for (int i : x) {
        ++now;
        count += abs(i - last);
        last = i;
        if (now == k) {
            last = 0;
            now = 0;
            count += abs(i);
        }
    }
    if (now != 0) {
        auto itEnd = x.end();
        count += *(--itEnd);
    }
    return count;
}

void task759_2_C() {
    int n, k, mx = 0;
    cin >> n >> k;
    multiset<int> l, r;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (abs(a) > mx)
            mx = abs(a);
        if (a < 0)
            l.insert(abs(a));
        else
            r.insert(a);
    }
    cout << calcR(k, n, r) + calcR(k, n, l) - mx;
}

void task758_1_2_A() {
    int n; cin >> n;
    for (int i = 2; i <= n + 1; ++i)
        cout << i << ' ';
}

void taskDeltixAutumn2021_A() {
    int n;
    cin >> n;
    ll count = 0, maxEnd = 0, sumEnd = 0;
    for (int i = 0; i < n; ++i) {
        ll k; cin >> k;
        while (!(k & 1)) {
            k /= 2;
            ++count;
        }
        if (k > maxEnd)
            maxEnd = k;
        sumEnd += k;
    }
    cout << fixed << setprecision(0) << maxEnd * pow(2, count) + sumEnd - maxEnd;
}

void task117EducRated_2_A() {
    unsigned int x, y;
    cin >> x >> y;
    if (!((x + y) & 1)) {
        if (x >= y)
            cout << (x + y) / 2 - min(x, y) << ' ' << min(x, y);
        else
            cout << min(x, y) << ' ' << (x + y) / 2 - min(x, y);
    } else
        cout << "-1 -1";
}

void task117EducRated_2_B() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a > n / 2 + 1 || b < n / 2 || (b > n / 2 && a > n / 2) || (b <= n / 2 && a <= n / 2)) {
        cout << -1;
        return;
    }
    for (int i = b + 1; i <= n; ++i) {
        cout << i << ' ';
    }
    int cur = a;
    for (int i = 0; i < n / 2 - (n - b); ++i) {
        cout << cur << ' ';
        ++cur;
    }
    for (int i = cur; i <= b; ++i)
        cout << i << ' ';
    for (int i = 1; i < a; ++i)
        cout << i << ' ';
}

bool can_send(ll m, ll k, ll x) {
    ll count = 0;
    if (m <= k) {
        count = (m + 1) * m / 2;
        if (count - m < x)
            return true;
    } else {
        count = (k + 1) * k / 2 + (m - k) * (k - 1 + k - (m - k)) / 2;
        if (count - (k - (m - k)) < x)
            return true;
    }
    return false;
}

void task117EducRated_2_C() {
    ll k, x;
    cin >> k >> x;
    ll l = 0, r = 2 * k;
    while (r - l > 1) {
        ll m = (r + l) / 2;
        if (can_send(m, k, x))
            l = m;
        else
            r = m;
    }
    cout << l;
}

void task755_1_A() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] + 1 < b[i] || a[i] > b[i]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void task755_2_A() {
    ll x, y;
    cin >> x >> y;
    cout << -(x * x) << ' ' << y * y;
}

void task755_2_B() {
    int n, m;
    cin >> n >> m;
    cout << (n * m + 2) / 3;
}

void task754_2_A() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (((a1 + a3) - (2 * a2)) % 3 == 0)
        cout << 0;
    else
        cout << 1;
}

void task754_2_B() {
    int n; cin >> n;
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    int first = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1')
            ++cnt1;
        else
            ++cnt0;
    }
    vector<int> ans;
    for (int i = 0; i < n; ++i)
        if ((s[i] == '1' && i < cnt0) || (s[i] == '0' && i >= cnt0))
            ans.push_back(i + 1);
    if (!ans.empty())
        cout << "1\n";
    cout << ans.size();
    for (int i : ans)
        cout << ' ' << i;
}

void task754_2_C() {
    int n; cin >> n;
    string s;
    cin >> s;
    int beforeLast = -1, last = -1, now = -1, mn = 1e6 + 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a')
            beforeLast = last, last = now, now = i;
        else
            continue;
        if (last == -1)
            continue;
        if (beforeLast != -1 && now - beforeLast + 1 == 7) {
            int cntA = 0, cntB = 0, cntC = 0;
            for (int j = beforeLast; j <= now; ++j)
                cntA += (s[j] == 'a'), cntB += (s[j] == 'b'), cntC += (s[j] == 'c');
            if (cntA > cntB && cntA > cntC)
                if (7 < mn)
                    mn = 7;
        }
        if (now - last - 1 > 2)
            continue;
        if (now - last - 1 < 2 || (now - last - 1 == 2 && ((s[now - 1] == 'c' && s[now - 2] == 'b') || (s[now - 1] == 'b' && s[now - 2] == 'c'))))
            if (now - last + 1 < mn)
                mn = now - last + 1;
    }
    if (mn == 1e6 + 1)
        cout << -1;
    else
        cout << mn;
}

void task753_3_B() {
    ll x, n;
    cin >> x >> n;
    ll d;
    if (n % 4 == 1)
        d = -n;
    else if (n % 4 == 2)
        d = 1;
    else if (n % 4 == 3)
        d = n + 1;
    else
        d = 0;
    if (x % 2)
        cout << x - d;
    else
        cout << x + d;
}

void task753_3_C() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    ll count = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] - count <= 0 || a[i + 1] - a[i] >= a[i])
            count += (a[i] - count);
        else {
            cout << a[i] - count;
            return;
        }
    }
    cout << a[n - 1] - count;
}

void task753_3_D() {
    int n;
    cin >> n;
    vector<pair<int, char>> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i].first;
    for (int i = 0; i < n; ++i)
        cin >> a[i].second;
    for (int i = 0; i < n; ++i)
        b[i] = i + 1;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if ((a[i].second == 'R' && a[i].first > b[i]) || (a[i].second == 'B' && a[i].first < b[i])) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void task772_2_A() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (i != j)
                    a[i] -= (a[i] & a[j]);
    ll count = 0;
    for (int i = 0; i < n; ++i)
        count += a[i];
    cout << count;
}

void task772_2_B() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] > a[i + 1] && a[i] > a[i - 1]) {
            if (i < n - 2)
                a[i + 1] = max(a[i + 2], a[i]);
            else
                a[i + 1] = a[i];
            ++count;
        }
    }
    cout << count << '\n';
    for (int i = 0; i < n; ++i)
        cout << a[i] << ' ';
}

void task772_2_C() {
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (a[n - 2] > a[n - 1]) {
        cout << -1 << '\n';
        return;
    }
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] - a[i + 1] <= a[i]) {
            cout << i << '\n';
            for (int j = 0; j < i; ++j)
                cout << j + 1 << ' ' << i + 1 << ' ' << i + 1 + 1<< '\n';
            return;
        } else if (a[i] > a[i + 1]) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

void task772_2_D() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n), used2(1e9 + 1), used4(1e9 + 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (used2[a[i]])
            continue;

    }
}

void task752_2_A() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a - i - 1 - count > 0)
            count += (a - i - 1 - count);
    }
    cout << count;
}

void task726_2_A() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        sum += a;
    }
    if (sum == n)
        cout << 0;
    else if (sum < n)
        cout << 1;
    else
        cout << sum - n;
}

void task726_2_C() {
    int n;
    cin >> n;
    vector<int> h(n);
    unordered_set<int> help;
    set<int> more;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        if (help.count(h[i]))
            more.insert(h[i]);
        help.insert(h[i]);
    }
    sort(h.begin(), h.end());
    if (!more.empty()) {
        h.erase(find(h.begin(), h.end(), *(more.begin())));
        h.erase(find(h.begin(), h.end(), *(more.begin())));
        cout << *(more.begin()) << ' ';
        for (int i : h)
            cout << i << ' ';
        cout << *(more.begin()) << ' ';
    } else {
        cout << h[0] << ' ';
        for (int i = 2; i < n; ++i)
            cout << h[i] << ' ';
        cout << h[1];
    }
}

void taskEducRated112_2_A() {
    ll n; cin >> n;
    cout << max(6LL, n + 1) / 2 * 5;
}

void taskGoodBye2021_B() {
    int n; cin >> n;
    string s, ans, help;
    cin >> s;
    int i = 0;
    do {
        ans += s[i];
        ++i;
    } while (i < n && (i == 0 || s[i] < s[i - 1]));
    help = ans;
    reverse(help.begin(), help.end());
    cout << ans << help;
}

void taskEducRated123_2_A() {
    string s;
    cin >> s;
    set<char> here;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'r' || s[i] == 'b' || s[i] == 'g')
            here.insert(s[i]);
        if (s[i] == 'R' || s[i] == 'G' || s[i] == 'B') {
            if (s[i] == 'R') {
                if (!here.count('r')) {
                    cout << "NO";
                    return;
                }
            }
            if (s[i] == 'G') {
                if (!here.count('g')) {
                    cout << "NO";
                    return;
                }
            }
            if (s[i] == 'B') {
                if (!here.count('b')) {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    cout << "YES";
}

void taskEducRated123_2_B() {
    int n; cin >> n;
    deque<int> a(n);
    if (n != 3) {
        for (int i = 0; i < n; ++i) {
            if (i == 3)
                a[i] = i;
            else if (i != 2)
                a[i] = i + 1;
            else
                a[i] = i + 2;
        }
    } else {
        cout << "3 2 1\n1 3 2\n3 1 2";
        return;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << a[j] << ' ';
        cout << '\n';
        a.push_front(a[n - 1]);
        a.pop_back();
    }
}

void taskEducRated123_2_C() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    bool all_more = true;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 0)
            all_more = false;
    }
    if (all_more) {
        int sum = 0;
        for (int i = 0; i < n; ++i)
            sum += a[i];
        for (int k = 0; k <= n; ++k)
            cout << sum + x * k << ' ';
        return;
    }
    vector<int> pref(n + 1), max_sums(n + 1, -(1e9));
    max_sums[0] = 0;
    for (int i = 1; i < n + 1; ++i)
        pref[i] = pref[i - 1] + a[i - 1];
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            max_sums[j - i + 1] = max(max_sums[j - i + 1], pref[j + 1] - pref[i]);
    for (int k = 0; k <= n; ++k) {
        int best = 0;
        for (int i = 0; i <= n; ++i)
            best = max(best, (max_sums[i] + min(i, k) * x));
        cout << best << ' ';
    }
}

void taskEducRated123_2_E() {
    int n; cin >> n;
    int i_pos = 1, j_pos = 1;
    string s;
    cin >> s;
    bool d_f = true;
    int count_o = 0;
    for (auto i : s) {
        i_pos += (i == 'D');
        j_pos += (i == 'R');
        if (i_pos == 1)
            d_f = false;
        if (min(i_pos, j_pos) == 1)
            count_o = max(i_pos, j_pos);
    }
    int can_r = n - j_pos, can_d = n - i_pos;
    if (i_pos == 1)
        can_d = 0;
    if (j_pos == 1)
        can_r = 0;
    vector<bool> vert(n + 1), gor(n + 1);
    i_pos = 1, j_pos = 1;
//    for (int i = 0; i < s.size(); ++i) {
//        if (s[i] == 'D');
//    }
}

void task773_2_C() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    map<ll, ll> cnt;
    for (ll i : a)
        cnt[i] = 0;
    for (ll i : a)
        ++cnt[i];
    if (x == 0) {
        ll count = 0;
        for (ll i : a)
            if (i == 0)
                ++count;
        if (count * 2 == n || (count * 2 > n && !(n & 1)))
            cout << 0;
        else
            cout << (n - count * 2);
        return;
    } else if (x == 1) {
        ll count = 0;
        for (auto i : cnt)
            if (i.second & 1)
                ++count;
        cout << count;
        return;
    }
    ll count = 0;
    for (auto i : cnt) {
        if (i.second == 0)
            continue;
        ll count_of_num = 0;
        if (cnt.count(i.first * x))
            count_of_num = cnt[i.first * x];
        if (count_of_num == i.second) {
            cnt[i.first] = 0;
            cnt[i.first * x] = 0;
        } else if (count_of_num < i.second) {
            count += i.second - count_of_num;
            cnt[i.first] = 0;
            cnt[i.first * x] = 0;
        } else {
            cnt[i.first] = 0;
            cnt[i.first * x] = count_of_num - i.second;
        }
    }
    cout << count;
}

void task773_2_A() {
    vector<pair<double, double>> p(3);
    for (int i = 0; i < 3; ++i)
        cin >> p[i].second >> p[i].first;
    sort(p.begin(), p.end());
    if (p[1].first == p[2].first)
        cout << fixed << setprecision(10) << abs(p[2].second - p[1].second);
    else
        cout << 0;
}

void task773_2_B() {
    int n; cin >> n;
    set<int> a;
    for (int i = 0; i < n; ++i) {
        int c; cin >> c;
        a.insert(c);
    }
    for (int i = 1; i <= n; ++i)
        cout << max(i, (int) a.size()) << ' ';
}

void taskEducRated116_A() {
    string s;
    cin >> s;
    if (s[0] == s[s.length() - 1])
        cout << s;
    else {
        s[0] = s[s.length() - 1];
        cout << s;
    }
}

void taskEducRated116_B() {
    ll k, n, cur = 1, acts = 0;
    cin >> n >> k;
    while (cur < k) {
        cur *= 2;
        ++acts;
    }
    if (cur < n)
        acts += (n - cur + k - 1) / k;
    cout << acts;
}

void taskEducRated116_C() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), can(n), pref(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        if (i == n - 1)
            can[i] = 1e18 + 1;
        else
            can[i] = pow(10, a[i + 1] - a[i]) - 1;
    }
    for (int i = 1; i < n + 1; ++i)
        pref[i] = pref[i - 1] + can[i - 1];
    for (int i = 1; i < n + 1; ++i) {
        if (pref[i] > k) {
            ll ans = 0;
            for (int j = 0; j < i - 1; ++j)
                ans += pow(10, a[j]) * can[j];
            ll num = pow(10, a[i - 1]) * min(can[i - 1], k - pref[i - 1] + 1);
            ans += num;
            cout << fixed << setprecision(0) << ans;
            return;
        }
    }
}

void task751_1_A() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << 1 << ' ';
            continue;
        }
    }
}

void task751_2_B() {
    string s;
    cin >> s;
    int n = s.size(), idx = 0;
    char mn = s[0];
    for (int i = 1; i < n; ++i) {
        if (s[i] <= mn) {
            idx = i;
            mn = s[i];
        }
    }
    s.erase(s.begin() + idx);
    cout << mn << ' ' << s;
}

void task750_2_C() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(26);
    for (int c = 'a'; c <= 'z'; ++c) {
        int l = 0, r = n - 1;
        while (r - l >= 1) {
            if (s[l] != s[r]) {
                if (s[l] == c) {
                    ++a[c - 'a'];
                    ++l;
                } else if (s[r] == c) {
                    ++a[c - 'a'];
                    --r;
                } else {
                    a[c - 'a'] = -1;
                    break;
                }
            } else
                ++l, --r;
        }
    }
    int mn = 1e9 + 1;
    for (auto i : a)
        if (i < mn && i != -1)
            mn = i;
    if (mn == 1e9 + 1)
        cout << -1;
    else
        cout << mn;
}

void task774_2_A() {
    ll n, s;
    cin >> n >> s;
    if (s < n * n || (n != 1 && s <= n * n)) {
        cout << 0;
        return;
    }
}

void task775_2_A() {
    int n, count = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int last = -3, first = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    cout << last - first + 2;
}

void task775_2_B() {
    ll n, mx = -1, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
        if (a >= mx)
            mx = a;
    }
    if (sum == 0) {
        cout << 0;
        return;
    }
    sum -= mx;
    cout << max(1LL, mx - sum);
}

void task775_2_D() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), can(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
//    for (i)
}

//void task774_2_A() {
//    int n, s;
//    cin >> n >> s;
//    s -=
//}

void task732_2_A() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum1 += a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        sum2 += b[i];
    }
    string ans;
    int count = 0;
    if (sum1 != sum2) {
        cout << -1 << '\n';
        return;
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) {
                for (int j = 0; j < n; ++j) {
                    if (i == j)
                        continue;
                    while (a[j] > b[j] && a[i] < b[i]) {
                        ++a[i], --a[j];
                        ans += to_string(j + 1) + ' ' + to_string(i + 1) + '\n';
                        ++count;
                    }
                    if (a[i] == b[i])
                        break;
                }
            }
        }
    }
    cout << count << '\n' << ans;
}


void do_task() {
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

//    do_task();
//    task771_2_E();
//    task772_2_D();
    return 0;
}
/*
[8:30 pm, 19/01/2022] Pratik Suryawanshi: #include"bits/stdc++.h"
using namespace std;
void fastio() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define int ll
#define endl "\n"
 
signed main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        if(k==1){
            cout<<6<<endl;
            
        }
        else{
            ll x=3;
            for(ll i=0;i<k;i++){
                cout<<x<<" ";
                x+=2;
            }
        }
    }
    return 0;
}
[8:38 pm, 19/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
using namespace std;
 
#define ll          long long
#define vi          vector<int>
#define vll         vector<ll>
#define pll         pair<ll, ll>
#define pb          push_back
#define endl        '\n'
 
signed main(){
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    vll temp;
    for(int i = 0; i < 17; i++){
        for(int j = i+1; j < 18; j++){
            for(int k = j+1; k < 19; k++){
                for(int l = k+1; l < 20; l++){
                    ll val = (1<<l) + (1<<k) + (1<<j) + (1<<i);
                    temp.pb(val);
                }
                if(temp.size() == 1000){
                    break;
                }
            }
            if(temp.size…
[9:46 pm, 19/01/2022] Pratik Suryawanshi: 2C
 
#include <bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define endl        '\n'
 
 
signed main(){
 
 
 
    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {
 
        ll n;
        cin >> n;
 
        vector<int> arr;
        for(int i = 1; i <= n; i++){
            arr.pb(i);
        }
 
        if(n%2){
            cout << "YES" << endl;
            for(int i = 1; i <= (n/2); i++){
                cout << i << " ";
            }
            cout << n << " ";
            for(int i = n-1; i > (n/2); i--){
                cout << i << " ";
            }cout << endl;
        }else if(n != 2){
            cout << "YES" << endl;
            cout << (n/2) << " ";
            for(int i = 1; i < (n/2); i…
[7:59 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #e…
[8:00 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr);
    #en…
[8:01 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr);
    #en…
[8:02 pm, 21/01/2022] Pratik Suryawanshi: int main()
{
   // code here
   
   int t;
   cin >> t;
   while(t--)
   {
         int n,m;
    cin >> n>> m;
    int cnt=0;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }
    for(int j=0;j<m;j++)
    {
        cin >> arr2[j];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    
    for(int i=0, j=0; i<n && j<m;)
    {
        if(arr1[i] == arr2[j])
        {
            i++;
            j++;
            cnt++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
         j++;
        
    }
    if(cnt == (n/2) )
    {
        cout << "YES" << "\n";
    }
    else
    cout << "NO" << "\n";
   }
 
    return 0;
}
[8:07 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,char>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr);
    #…
[8:12 pm, 21/01/2022] Pratik Suryawanshi: #define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#define cube(x) ((x)(x)(x))
#define inf 1<<30
#define …
[8:14 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
#include<bits/stdc++.h>
using namespace std;
 
int n,m;
set<int> vacant_centres;
map<int,vector<int> > to_discharge;
 
void discharge_patients_untill_day(int day){
    …
[8:15 pm, 21/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
 
 
using namespace std;
 
 
#define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#…
[8:18 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #e…
[8:22 pm, 21/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
 
 
using namespace std;
 
 
#define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#…
[8:25 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #e…
[8:30 pm, 21/01/2022] Pratik Suryawanshi: #pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define vp vector<pair<ll,ll>>
#define sc ;
#define ss second
#define srt sort
#define endl '\n'
#define pb push_back
#define pp pop_back
#define mp make_pair
#define modulo 1e9+7
#define ll long long int
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define INF 1001001001
const long double pi = 3.141592653;
 
typedef unsigned int ui;
typedef unsigned long long int ul;
#include<bits/stdc++.h>
using namespace std;
 
int n,m;
set<int> vacant_centres;
map<int,vector<int> > to_discharge;
 
void discharge_patients_untill_day(int day){
    …
[8:34 pm, 21/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
 
 
using namespace std;
 
 
#define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#…
[8:47 pm, 21/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
 
 
using namespace std;
 
 
#define all(c) c.begin(),c.end()
#define gcd(a,b) __gcd(abs(a),abs(b))
#define lcm(a,b) (((a)/(__gcd(a,b)))*(b))
#define isodd(a) ((a)&1)
#define iseven(a) !((a)&1)
#define sync() ios_base::sync_with_stdio(false),cin.tie(nullptr)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define tr(it,c) for(auto & it : (c))
#define rtr(it,c) for(auto it = (c).rbegin(); it != (c).rend(); it++)
#define ll long long
#define endl "\n"
#define abs(x) (((x) < 0) ? -(x) : (x))
#define clr(x,y) memset((x),(y),sizeof(x))
#define popcount(x) __builtin_popcount(x)
#define fileout(x) freopen(x, "w", stdout)
#define filein(x) freopen(x, "r",stdin)
#define error(x) freopen(x,"w",stderr)
#define sqr(x) ((x)*(x))
#…
[8:16 pm, 22/01/2022] Pratik Suryawanshi: //CF_A_DIV_2
 
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ll long long
using namespace std;
 
int main() {
  int t=0;
  cin>>t;
  for(int _ = 0; _<t; _++){
      ll n, k;
      vector<pair<ll ,ll>> r;
      cin>>n>>k;
      ll a[n] , b[n];
      for(ll i=0; i<n;i++){
          cin>>a[i];
      }
      for(ll i=0; i<n;i++){
          cin>>b[i];
      }
      for(ll i=0; i<n;i++){
          r.push_back(make_pair(a[i] , b[i]));
      }
      
      sort(r.begin() , r.end());
      
      for(ll i=0; i<n; i++){
          if(r[i].first <= k){
              k+= r[i].second;
          }
          else{
              break;
          }
      }
      cout<<k<<endl;
      
  }
  return 0;
}
[8:51 pm, 22/01/2022] Pratik Suryawanshi: ll countOdd(ll L, ll R) 
{ 
    ll N = (R - L) / 2; 
    if (R % 2 != 0 || L % 2 != 0) 
        N += 1; 
    return N; 
} 
void solve() 
{ 
    ll l, r, k; 
    cin >> l >> r >> k; 
 
    if (l == r && l != 1) 
    { 
        cout << "YES\n"; 
        return; 
    } 
 
    ll o = countOdd(l, r); 
 
    if (o > k) 
        cout << "NO" << nl; 
    else 
        cout << "YES" << nl; 
} 
int main() 
{ 
    int t = 1; 
    cin >> t; 
    while (t--) 
        solve(); 
    return 0; 
}
[9:16 pm, 22/01/2022] Pratik Suryawanshi: class Solution { 
public: 
    int minimumCost(vector<int>& v) { 
    int sum=0; 
  
        sort(v.rbegin(),v.rend()); 
     for(int i=0;i<=v.size()-1;i++) 
    {  
         sum=sum+v[i]; 
    } 
    for(int i=2;i<v.size();i=i+3) 
    { 
            sum=sum-v[i]; 
    } 
    return sum; 
 
 
         
    } 
};
[9:21 pm, 22/01/2022] Pratik Suryawanshi: int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long mini=INT_MAX;
        long long maxi=INT_MIN;
        int ans=0;
        long long s=0;
        for(auto i:differences)
        {
            s+=i;
            mini=min(s,mini);
            maxi=max(s,maxi);
        }
        for(long long i=lower;i<=upper;i++)
        {
            if(i+mini<lower or i+maxi>upper)
                continue;
            else
                ans++;
        }
        return 1LL*ans;
    }
[9:35 pm, 22/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
 
 
using namespace std;
typedef long long ll;
 
 
 
 
 
 struct TrieNode{
 
    
    / Returns if the word is in the trie. 
    bool search(string word) {
        TrieNode *p=&root;
        for (auto c:word){
            if (p->m.find(c)==p->m.end()) return false;
            p=p->m[c];
        }
        return p->isWord;
    }
    
    / Returns if there is any word in the trie that starts with the given prefix. 
    bool startsWith(string prefix) {
        TrieNode *p=&root;
        for (auto c:prefix){
            if (p->m.find(c)==p->m.end()) return false;
            p=p->m[c];
        }
        return true;
    }
    TrieNode root;
};
 
 
void solve() {
    // USE TRIE ONLY WHEN YOU KNOW HOW TO USE IT
    int n;
    cin>>n;
    vect…
[9:58 pm, 22/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
 
 
using namespace std;
typedef long long ll;
 
 
 
 
 
 struct TrieNode{
        unordered_map<char, TrieNode*> m;
        char c;
        bool isWord;
        
        TrieNode() : c(0), isWord(true) {}
        TrieNode(char ch) : c(ch), isWord(false) {};
    };
class Trie {
public:
    / Initialize your data structure here. 
    Trie() {}
        
    / Inserts a word into the trie. 
    void insert(string word) {
        TrieNode *p=&root;
        int i=0;
        for (auto c:word){
            if (p->m.find(c)==p->m.end()){
                p->m[c]=new TrieNode(c);
            }
            p=p->m[c];
        }
        p->isWord=true;
    }
    
    / Returns if the word is in the trie. 
    bool search(string word) {
        Tri…
[10:02 pm, 22/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
 
using namespace std;
 
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #VA_ARGS << "):", dbg_out(VA_ARGS)
#else
#define dbg(...)
#endif
 
#define ar array
#define ll…
[8:14 pm, 23/01/2022] Pratik Suryawanshi: ll n;
  cin >> n;
  ll base = 97;
  for (int i = 0; i < n; ++i)
  {
    if (base > 122) {
      base = 97;
    }
    cout << char(base);
    base++;
  } cout << endl;
[8:41 pm, 23/01/2022] Pratik Suryawanshi: void solve()
{ 
 int n;
 cin>>n;
 vector<float> inp(n);
 fo(i,n){
   cin>>inp[i];
 }
 sort(inp.rbegin(),inp.rend());
 float sum=0;
 for(int i=1;i<n;i++)
 {
   sum+=inp[i];
 }
 float ans=sum/(n-1);
  ans+=inp[0];
 cout<<ans<<endl;
}
[8:45 pm, 23/01/2022] Pratik Suryawanshi: for _ in range(int(input())):
    n = int(input())
    a = sorted(list(map(int, input().split())), reverse = True)
    m1 = a[0]
    m2 = (sum(a) - m1) / (n - 1) 
    print(m1 + m2)
[8:49 pm, 23/01/2022] Pratik Suryawanshi: MSD, [23-01-2022 08:46 PM]
#include<bits/stdc++.h>
using namespace std;
 
 
#define all(cont) cont.begin(), cont.end()
#define ll long long
void solve()
{
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        sort(arr.rbegin(),arr.rend());
        int a = *arr.begin();
    
        int sm = accumulate(all(arr),0LL);
        double ans = double(sm-a)/(n-1);
        ans+=a;
        cout << setprecision(6) << fixed;
        cout << ans << '\n';
 
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
        }
    return 0;
}
[8:56 pm, 23/01/2022] Pratik Suryawanshi: ll lnds(vi &v)
    {
        vi d;
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (d.empty() or d.back() <= v[i])
            {
                d.push_back(v[i]);
                // cout<<"pushing "<<v[i]<<endl;
            }
            else
            {
                int ub = upper_bound(d.begin(), d.end(), v[i]) - d.begin();
                // cout<<"updating "<<d[ub]<<" to "<<v[i]<<endl;
 
                d[ub] = v[i];
            }
        }
 
        return d.size();
    }
[9:00 pm, 23/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
//Code uploded by T.I.H
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int tt=1;cin>>tt;
    while(tt--)
    {
        ll n;cin>>n;
        string a,b;cin>>a>>b;
        vector <ll>pref(n+1,0),pref1(n+1,0);
        ll dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            dp[i][j]=1e18;
        }
        dp[n][n]=0;
        for(int i=n-1;i>=0;i--)
        {
            pref[i]=pref[i+1]+(a[i]=='0');
            pref1[i]=pref1[i+1]+(b[i]=='0');
        }
        for(int i=n-1;i>=0;i--)
        {
            dp[n][i]=dp[n][i+1];
            if(b[i]=='1')
            dp[n][i]+=pref[n]+pref1[i];
…
[9:22 pm, 23/01/2022] Pratik Suryawanshi: int longestNonDecreasingSubsequence(vector<int> arr){ 
multiset < int > s; 
multiset < int > :: iterator it; 
int sizeOfarray = arr.size(); 
for(int i =0; i<sizeOfarray; i++) 
{ 
    s.insert(arr[i]); 
    it = s.upper_bound(arr[i]); 
    if(it != s.end()) 
        s.erase(it); 
} 
    return s.size(); 
} 
void solve(int tc) 
{ 
         
        int n,m; 
        cin >> n >> m; 
        vector<int> a(n); 
        vector<int> b(m); 
        cin >> a; 
        cin >> b; 
 
         
        cout << longestNonDecreasingSubsequence(a) + longestNonDecreasingSubsequence(b)<< '\n'; 
 
 
}
 
2c
[9:24 pm, 23/01/2022] Pratik Suryawanshi: int longestNonDecreasingSubsequence(vector<int> arr){
multiset < int > s;
multiset < int > :: iterator it;
int sizeOfarray = arr.size();
for(int i =0; i<sizeOfarray; i++)
{
    s.insert(arr[i]);
    it = s.upper_bound(arr[i]);
    if(it != s.end())
        s.erase(it);
}
    return s.size();
}
void solve(int tc)
{
        
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        cin >> a;
        cin >> b;
 
        
        cout << longestNonDecreasingSubsequence(a)  +   longestNonDecreasingSubsequence(b)<< '\n';
 
 
}
[9:24 pm, 23/01/2022] Pratik Suryawanshi: int longestNonDecreasingSubsequence(vector<int> arr){
multiset < int > s;
multiset < int > :: iterator it;
int sizeOfarray = arr.size();
for(int i =0; i<sizeOfarray; i++)
{
    s.insert(arr[i]);
    it = s.upper_bound(arr[i]);
    if(it != s.end())
        s.erase(it);
}
    return s.size();
}
void solve(int tc)
{
        
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        cin >> a;
        cin >> b;
 
        
        cout << longestNonDecreasingSubsequence(a)  +   longestNonDecreasingSubsequence(b)<< '\n';
 
 
}
[9:48 pm, 23/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int longestNonDecreasingSubsequence(vector<int> arr)
{
    multiset<int> s;
    multiset<int>::iterator it;
    int sizeOfarray = arr.size();
    for (int i = 0; i < sizeOfarray; i++)
    {
        s.insert(arr[i]);
        it = s.upper_bound(arr[i]);
        if (it != s.end())
            s.erase(it);
    }
    return s.size();
}
void solve()
{
 
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
 
    cout << longestNonDecreasingSubsequence(a) + longestNonDecreasingSubsequence(b) << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}     DIV 2 D
[9:59 pm, 23/01/2022] Pratik Suryawanshi: # Div 2 C (AC solution)
#include<bits/stdc++.h>
using namespace std;
#define xx long long
#define foi(xxxxx) for(xx yyyyy=0;yyyyy<xxxxx;yyyyy++)
typedef vector<xx>          vll;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    xx xxxxxxxxx; cin >> xxxxxxxxx;
    while (xxxxxxxxx--)
    {
        int yy;
        cin >> yy;
        int  yyy = 2;
        int   yyyy = 3;
        for (int yyyyy = 0; yyyyy < yy; yyyyy++) {
            cout << yyy << " ";
            if (yyyyy & 1) {
                yyy += 3;
            }
            else {
                yyy++;
            }
        }
        cout << endl;
    }
    return 0;
}
[10:24 pm, 23/01/2022] Pratik Suryawanshi: #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int gg;
  cin>>gg;
  while(gg--){
      int a,jjj;
      cin>>a;
      if(a>3){
        if(a%2==0){
          jjj=a+a/2;
          cout<<jjj<<endl;
        }
        else{
          jjj=a+(a-1)/2;
          cout<<jjj<<endl;
         }
      }
      else{
          cout<<"3"<<endl;
      }
  }
  return 0;
}
[10:29 pm, 23/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
#include<string>
#include <sstream>
using namespace std;
#include<bitset>
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define fox(i, a,b) for(i=a;i<=b;i++)
#define reps(i, a,b) for(int i=a;i<=b;i++)
#define repe(i, a,b) for(int i=a;i>=b;i--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n…
[10:29 pm, 23/01/2022] Pratik Suryawanshi: #include<bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;
 
//* BOOST BEG //
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt")
// BOOST END 
 
#define gc getchar_unlocked
#define ll long long int
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define fox(i, a,b) for(i=a;i<=b;i++)
#define reps(i, a,b) for(int i=a;i<=b;i++)
#define repe(i, a,b) for(int i=a;i>=b;i--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define…
[10:38 pm, 23/01/2022] Pratik Suryawanshi: from bisect import bisect_left as bl
a = []
 
 
def sieve(n):
 
    prime = [True for i in range(n + 1)]
    p = 2
    while p * p <= n:
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
 
    for p in range(2, n + 1):
        if prime[p]:
            a.append(p)
 
 
sieve(10**5)
 
for _ in range(int(input())):
    n = int(input())
 
    t = bl(a, n - 1)
 
    if t >= len(a) or a[t] > n - 1:
        t -= 1
 
    deg = a[t]
 
    if n % 2:
        print((deg * (n - 1) + 2) // 2)
    else:
 
        print((deg * n) // 2)
[8:39 pm, 29/01/2022] Pratik Suryawanshi: LL n,k;
        cin >> n >> k;
        if(n>1 && k==1)
        {
            cout << -1 << "\n";
        }
        else if( n== 1  && k==1)
        {
            cout << 1 << "\n";
        }
        else
        {
            
            for(int i=1;i<=k-1;i++)
            {
                cout << i << " ";
            }
            for(int i=n;i>=k;i--)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
[9:05 pm, 29/01/2022] Pratik Suryawanshi: ll cal(ll m, string s)
{
    ll add = 0;
    for(int i=m;i>=0;i--)
    {
        ll v = (int(s[i])-int('0')+add)%10;
        if(v==0)
            continue;
        add+=10-v;
    }
    return add;
}
 
int main()
{
    fast
        tc
    {
        ll n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        ll l=0,r=n-1,ans=0;
        while(l<=r)
        {
            ll m=(l+r)/2;
            if(cal(m,str)>k)
                r=m-1;
            else
            {
                ans = m+1;
                l=m+1;
            }
        }
        cout<<ans<<endl;
    }
}
[10:08 pm, 29/01/2022] Pratik Suryawanshi: #include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll flip(ll n){
    ll no = 0,cnt = 0;
    while(n){
        if(n%2 == 0) no += (1LL<<cnt);
        n /= 2,cnt++;
        if(n <= 0) break;
    }
    return no;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt=1; cin>>tt;
    while (tt--){
        ll n; cin>>n;
        ll ans = 0;
        while(n > 0)
        {
            ll a = flip(n);
            ll b = n;
            if((b&(b+1)) == 0) b--;
            ll val = ((b * (b+1)) / 2) - ((a * (a-1)) / 2);
            ans += (val*2);
            n = a-1;
        }
        cout<<ans<<"\n";
    }
}
*/
#include<bits/stdc++.h>
#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

// ------------------------------- Micros ------------------------------------------------

#define google(tc) cout<<"Case #"<<tc++<<": ";
#define FILE freopen("input.txt","r",stdin); freopen("output.txt","w", stdout);
#define GetSetBolt ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
#define ll long long int  
#define LD long double

#ifndef LOCAL
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#endif



#define max3(a,b,c) max(a,max(b,c)) 
#define min3(a,b,c) min(a,min(b,c)) 
#define FF first 
#define SS second 
#define PB push_back 
#define PF push_front 
#define PPB pop_back  
#define PPF pop_front  
#define Endl endl

#define in(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define in2(arr,n,m) for(int i=0;i<n;i++){ for(int j=0;j<m;j++) cin>>arr[i][j];}
#define dis(arr,n) for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
#define dis2(arr,n,m) for(int ii=0;ii<n;ii++){for(int j=0;j<m;j++)cout<<arr[ii][j]<<" ";cout<<endl;} 
#define tc int t=0;cin>>t; while(t--) 

#define For(n) for(ll i=0;i<n;i++)
#define For0(x,z) for(ll x=0;x<z;x++)
#define Forx(x,z) for(x;x<z;x++)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

#define toLower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define toUpperr(s) transform(s.begin(),s.end(),s.begin(),::toupper)

#define sortAD(arr,n) sort(arr,arr+n, greater<int>());
#define sortVD(v) sort(v.begin(), v.end(), greater<int>());
#define sortA(arr) sort(arr,arr+n);
#define sortV(v) sort(v.begin(),v.end());

#define mem0(X) memset((X), 0, sizeof((X)))
#define memx(X,x)  memset((X), x, sizeof((X)))
#define setbits(X)  __builtin_popcountll(X)
#define precise(X)  cout<<fixed << setprecision(X);
#define valid(x,y,row,col) (((x) >= 0 and (x) < row) and ((y) >= 0 and (y) < col))
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define timer(d) for(long blockTime=NULL;(blockTime==NULL?(blockTime=clock())!=NULL:false); debug("%s:%.4fs",d,(double)(clock()-blockTime)/CLOCKS_PER_SEC))
#define rsz resize
#define bk back()
#define ld long double

// #ifndef ONLINE_JUDGE
//     cerr<<"\ntime taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<"\n";
// #endif
typedef pair<int, int> PII; 
typedef pair<ll, ll> PLL;
typedef pair<double,double> PDD;
typedef pair<string, string> PSS; 
typedef pair<string, ll> PSL; 
typedef long double lld;

typedef vector<int> VI;  
typedef vector<ll> VL;  
typedef vector<double> VD;
typedef vector<string> VS; 
typedef vector<VI> VVI;  
typedef vector<VL> VVL; 
typedef vector<VS> VVS; 
typedef vector<PII> VPII; 
typedef vector<PLL> VPLL; 
typedef vector<PSS> VPSS; 
typedef vector<PSL> VPSL; 

typedef map<int,int> MII; 
typedef map<ll,ll> MLL;   
typedef map<char,ll> MCL;  
typedef map<char,int> MCI; 
typedef map<char,ll> MCL;   
typedef map<string,string> MSS;  
typedef map<string,int> MSI;  
typedef map<string,ll> MSL; 

typedef unordered_map<int,int> UMII; 
typedef unordered_map<ll,ll> UMLL;   
typedef unordered_map<char,ll> UMCL;  
typedef unordered_map<char,int> UMCI; 
typedef unordered_map<char,ll> UMCL;   
typedef unordered_map<string,string> UMSS;  
typedef unordered_map<string,int> UMSI;  
typedef unordered_map<string,ll> UMSL; 
typedef unsigned long long ull;

const int inf = (int)1e9 + 5;
const ll infl = (ll)1e18 + 5;
const ld PI = acos((ld)-1);
const int MOD = 1e9 + 7;
const int N = 2e5 + 10;
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};   // for every grid problem


//--------------------------------- Trace Functions --------------------------------------

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// ----------------------------- Functions -----------------------------------------------

ll lcm(ll a, ll b) 
{ return (a * (b / __gcd(a, b))); }

string intToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}
 
ll stringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

string to_binary(ll n)
{
    int bin[100];
     int i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    string s="";
    for(int j=i-1;j>=0;j--)
        s+=to_string(bin[j]);
    return s;
}
int linear_search(int arr[],int n, int x)
{
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
}
void leftrotatebyone(int arr[], int n)
{
    int temp=arr[0];
    for(int i=0;i<n;i++)
    arr[i]=arr[i+1];
    
    arr[n-1]=temp;
}
void leftrotate(int arr[], int d, int n)
{
    for(int i=0;i<d;i++)
    leftrotatebyone(arr,n);
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

ll gcd(ll a, ll b)
{
        if(a == 0)
            return b;
            
        if(b == 0)
            return a;
            
        if(a == b)
            return a;
            
        if(a>b)
            return gcd(a-b,b);
            
        else
        return gcd(a,b-a);
}

void reverrsestring(string& s)
{
        int n=s.size();
        For(n/2)
        {
                swap(s[i],s[n-i-1]);
        }
}
ll fpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%MOD;
        a = (a * a)%MOD;
        b >>= 1;
    }
    return res%MOD;
}
int gcdExtended(int a, int b, int* x, int* y)
{
    if (a == 0){
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}
void swap(ll &x,ll &y){
	ll temp = y;
	y = x;
	x = temp;
}
int factorirl(int n)
{
        int fact=1;
        for(int i=1;i<=n;i++)
        {
                fact*=i;
        }
        return fact;
}

bool isPerfectSquare(ll x)
{
	if (x >= 0)
	{
		ll sr = sqrt(x);
		return (sr * sr == x);
	}
	return false;
}
void printvec(VL vec, int i)
{
	for (int j = i; j < vec.size(); j++)
	{
		cout << vec[j] << " ";
	}
	cout << endl;
}
void frrrrramework(ll n, ll m)
{
        ll ss;
        for(int i=0,a=m+1;i<n;i++,a++)
        {
                ss=i+1;
                cout << ss << " ";
                for(int j=1;j<m;j++)
                {
                        cout << ss+a << " ";
                        ss+=a;
                }
                cout << "\n";
        }
}
void framework(ll n, ll m)
{
        For(m)
        {
                cout << i+1 << " ";
                cout << "\n";
        }
        int face=2+n;
        for(int i=1;i<n;i++)
        {
                int mm=face;
                cout << mm << " ";
        
        for(int j=1;j<m;j++)
        {
                cout << mm+i+1 << " ";
                mm+=i+1;
        }
        face+=n+1;
        cout << "\n";
        }
}
void ravan(int p[],int arr[],int s[],int n)
{
        p[0]=arr[0];
        for(int i=1;i<n;i++)
        {
                p[i] = gcd(p[i-1],arr[i]);
        }
        s[n-1]=arr[n-1];
        for( int i=n-2;i>=0;i--)
        {
                s[i]= gcd(s[i+1],arr[i]);
        }
}
int Pratik(int l, int r, int p[],int s[],int n)
{
        if(l==0)
        return s[r+1];
        
        if(r==n-1)
          return p[l-1];
          
        return  gcd(p[l-1],s[r+1]);
}

//////////////////////////////// Actual code start here /////////////////////////////////////

   
int main()
{
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errorf.txt" , "w" , stderr) ;
    #endif
            
            
    
}
// Bilangan pecahan : mikroskil cp 2014
 
/*int main()
{
    int a,b;
    cin >> a >> b;
    if(__gcd(a,b)>1)
    {
    cout << a/__gcd(a,b) << " " << b/__gcd(a,b);
    } else{cout << "Tidak";}
}*/
 
// Pola III : perulangan lanjut
 
/*int main()
{
    int n,x;
    x = 0;
    cin >> n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cout << x%10;
                x++;
            }
            cout << endl;
        }
}*/
 
// Menghtiung bola
 
/*int main()
{
    int q;
    cin >> q;
    int tmp=1;
    for(int i=0; i<q; i++)
    {
        int angka;
        cin >> angka;
        if(angka==tmp)
        {
            cout << "BENAR" << endl << flush;
            tmp++;
        } else
        {
            cout << "SALAH" << endl << flush;
            tmp = 1;
        }
    }
}*/
 
// Membeli mainan : Troc#3
 
/*int main()
{
    int x;
    cin >> x;
    int a[3];
    for(int i=0; i<3; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+3);
 
    int tmp = x/(a[0]+a[1]+a[2]);
 
    int ans = 3*tmp;
 
    int sisa = x-(tmp*a[0]+tmp*a[1]+tmp*a[2]);
 
    if(sisa-a[0] >= 0)
    {
        sisa -= a[0];
        ans++;
    }
    if(sisa-a[1] >= 0)
    {
        sisa -= a[1];
        ans++;
    }
    if(sisa-a[2] >= 0)
    {
        sisa -= a[2];
        ans++;
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int x[n+1];
    for(int i=1; i<=n; i++)
    {
        x[i] = i;
    }
 
    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin >> a >> b;
        swap(x[a],x[b]);
    }
 
    int q; cin >> q;
    for(int i=1; i<=q; i++)
    {
        int t;
        cin >> t;
        cout << x[t] << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    a[n];
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a[i];
        if(a[i]%n==0)
        {
            cout << 1;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if
        }
    }
 
}*/
 
//  Membangun menara :  gemastik 2016 -> greedy
 
/*int main()
{
    int n;
    cin >> n;
    int b[3];
    for(int i=0; i<n; i++)
    {
        int q;
        cin >> q;
        int mx=0,mn=0;
        for(int j=0; j<q; j++)
        {
            int x,y,z;
            cin >> x >> y >> z;
            mx += max(x,max(y,z));
            mn += min(x,min(y,z));
        }
        cout << mn << " " << mx << endl;
    }
}*/
 
// mex tahun baru : troc#18 c -> greedy
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    if(n==1)
    {
        cout << a[0];
    } else{
        sort(a,a+n);
        cout << a[0] << " ";
        for(int i=2; i<n; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[1];
    }
 
}*/
 
// segitiga tahun baru: troc#18 D -> geometry
 
/*int main()
{
    int n;
    cin >> n;
    if(n==2 || n==3 || n==5)
    {
        cout << 4;
    } else {cout << 3;}
}*/
 
// Pelajaran pangan : troc#16 B -> greedy
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
 
    int hasil = a[n] - a[1];
 
    for(int i=1; i<n; i++)
    {
        hasil = min(hasil,a[i]+m-a[i+1]);
    }
 
    cout << hasil;
}*/
 
// Pertahanan wifi : Troc 11 B -> Greedy
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+n);
    int ans = a[m-1] - a[0];
 
    for(int i=m-1; i<n; i++)
    {
        ans = min(ans, a[i] - a[i-m+1]);
    }
 
    cout << ans;
}*/
 
 
/*int main()
{
    ll n,tmp1=0;
    cin >> n;
    for(int i=0; i<=n; i++)
    {
        ll a;
        cin >> a;
        tmp1 += a*pow(2,i);
    }
 
 
    ll tmp2 = pow(2,n);
    if(tmp1%tmp2 != 0)
    {
        cout << -1;
    } else
    {
        cout << tmp1/tmp2;
    }
}*/
 
/*int main()
{
    int n,ans;
    cin >> n;
    int g1=0,g2=0,b1=0,b2=0,k1=0,k2=0;
    char x,y;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x=='G')
        {
            g1++;
        }
        if(x=='B')
        {
            b1++;
        }
        if(x=='K')
        {
            k1++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin >> y;
        if(y=='G')
        {
            g2++;
        }
        if(y=='B')
        {
            b2++;
        }
        if(y=='K')
        {
            k2++;
        }
    }
 
    ans = min(g1,k2) + min(k1,b2) + min(b1,g2);
    cout << ans;
} */
 
 
 
/*int main()
{
    int n,k,ans;
    cin >> n >> k;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(a,a+n);
 
    ll mn = 1e9;
 
    for(int i=0; i<=n-k; i++)
    {
        mn = min(mn, a[i+k-1] - a[i]);
        ans = mn;
    }
 
    cout << ans;
}*/
 
// Mengangkut bebek : OSP 2022
 
/*int main()
{
    ll k,n;
    cin >> k;
    ll a[k],b[k];
    pair <ll, ll> p[k];
    for(int i=0; i<k; i++)
    {
        cin >> p[i].second;
    }
    for(int i=0; i<k; i++)
    {
        cin >> p[i].first;
    }
    sort(p,p+k+1);
 
    cin >> n;
    ll c[n];
 
    for(int i=0; i<n; i++)
    {
        cin >> c[i];
    }
    sort(c,c+n,greater<ll>());
    ll ans=0;
    int j=0;
 
    for(int i=0; i<n; i++)
    {
        ans += p[j].first * c[i];
        p[j].second--;
        if(p[j].second == 0)
        {
            j++;
        }
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int tmp=0,cnt=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(tmp!=x)
        {
        while(cnt <= n && a[cnt] != x)
        {
            cnt++;
        }
        tmp = x;
        }
    }
 
    if(cnt <= n)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
}*/
 
/*int a,mn=1e4,mx=0;
 
int main()
{
    while(cin >> a)
    {
        if(a==0)
        {
            cout << mn << " " << mx << endl;
            mn = 1e4;
            mx = 0;
        } else
        {
            mx = max(mx,a);
            mn = min(mn,a);
        }
    }
    cout << mn << " " << mx;
 
}*/
 
/*int main()
{
    string s;
 
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
       // cin >> s[i];
        if(s[i] - 2 < 65 && s[i] != ' ')
        {
            s[i] = s[i] + 24;
            cout << s[i];
        }
        else if(s[i] != ' ')
        {
            s[i] -= 2;
            cout << s[i];
        }
        else{cout << s[i];}
    }
}*/
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin  >> a[i];
    }
 
    sort(a,a+n);
}*/
 
/*ll n,m,a[265000];
 
ll binser(ll m, ll r)
{
    ll l=0;
    ll ans=0;
    ll mid,jml;
    while(l<=r)
    {
    mid = (l+r)/2;
    jml = 0;
    for(int i=0; i<n; i++)
    {
        jml += mid/a[i];
    }
    if(jml<m)
    {
        l = mid+1;
    } else
    {
        ans = mid;
        r = mid-1;
    }
    }
    return ans;
}
 
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << binser(m+1, a[0]*m) - binser(m,a[0]*m);
}*/
 
/*int main()
{
    ll n;
    cin >> n;
    ll a[n];
    cin >> a[0];
    for(int i=1; i<n; i++)
    {
        cin >> a[i];
        a[i] += a[i-1];
    }
 
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int x;
        cin >> x;
        int ans = lower_bound(a,a+n,x)-a;
        cout << ans+1 << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n],b[n],mx=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
        mx = max(mx,a[i]*b[i]);
    }
 
    cout << mx;
}*/
 
/*ll n,m;
 
int main()
{
    cin >> n >> m;
    if(m==1)
    {
        cout << n-1;
    }
    else if(n==1)
    {
        cout << m-1;
    }
    else{
        cout << (m-1)*n;
    }
}*/
 
/*int main()
{
    ll t,a,b;
 
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        cout << a+b-1 << endl;
    }
}*/
 
/*string code;
ll n,b1=0,b2=0,b3=0;
char a;
 
int main()
{
    cin >> code >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a=='1')
        {
            b1 += 1;
        }
        if(a=='2')
        {
            b2 += b1;
        }
        if(a=='3')
        {
            b3 += b2;
        }
    }
    cout << b3 << endl;
}*/
 
/*int main()
{
    cout << "0" << " " << "9223372036854775808" << endl;
    cout << "9223372036854775808" << " " << "9223372036854775808" << endl;
}*/
 
/*int main()
{
    ll n,ans=0; cin >> n;
 
    for(int i=0; i<n; i++)
    {
        ll x; cin >> x;
        ans += x;
    }
    cout << ans/2;
}*/
 
/*ll k,n,v[502],w[502],dp[502][2001],arr[502];
 
void solve(ll i, ll k)
{
    for(int c = 0; c<= k; c++)
    {
        dp[0][c] = 0;
    }
    for(int i=1; i <= n; i++)
    {
        for(int c=0; c<=k; c++)
        {
            if(c >= w[i])
            {
                dp[i][c] =  max(dp[i-1][c], dp[i-1][c-w[i]]+v[i]);
            } else
            {
                dp[i][c] = dp[i-1][c];
            }
        }
    }
}
 
int main()
{
    cin >> k >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> w[i] >> v[i];
    }
 
    solve(n,k);
 
    ll l=n,r=k,x=0;
    while(l>0 && r>0)
    {
        while(dp[l][r] == dp[l][r-1])
        {
            r--;
        }
        while(dp[l][r] == dp[l-1][r])
        {
            l--;
        }
        arr[x] = l;
        x++;
        r -= w[l]; l--;
    }
    sort(arr,arr+x);
 
    for(int i=0; i<x; i++)
    {
        cout << arr[i] << endl;
    }
}*/
 
/*int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    while(n>0)
    {
            cout << "Anak ayam turunlah " << n << endl;
            if(n-1!=0)
            {
            cout << "Mati satu tinggallah " << n-1 << endl;
            } else{cout << "Mati satu tinggallah induknya" << endl;}
        n--;
    }
}*/
 
/*ll mod = 1e9+7;
 
ll t,n,k,a,b;
 
ll tambah(ll x, ll y)
{
    return ((x%mod) + (y%mod)) % mod;
}
 
ll kurang(ll x, ll y)
{
    return ((x%mod) - (y%mod)) % mod;
}
 
ll kali(ll x, ll y)
{
    return ((x%mod) * (y%mod)) % mod;
}
 
ll pang(ll x, ll y)
{
    if(y==0){return 1;}
        int ans = pang(x,y/2);
        ans = kali(ans,ans);
        if(y%2 == 1)
        {
            ans = kali(ans,x);
        }
    return ans;
}
 
ll bagi(ll x, ll y)
{
    return kali(x,pang(y,mod-2));
}
 
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        a = kali(n, kurang(pang(n,k),1));
        b = kurang(n,1);
        cout << bagi(a,b) << endl;
    }
    return 0;
}*/
 
/*ll pang(ll x, ll y)
{
    if(y==0)
    {
        return 1;
    }
    else{
        return x * pang(x, y-1);
    }
}
 
int main()
{
    int x,y;
    cin >> x >> y;
    cout << pang(x,y);
}*/
 
/*ll tmp[1001];
ll dp(ll x)
{
    if(x==1 || x==2)
    {
        return 1;
    }
    if(x==3)
    {
        return 2;
    }
    if(tmp[x] != 0)
    {
        return tmp[x];
    }
    tmp[x] = (dp(x-1) + dp(x-3)) % 1000000;
    return tmp[x];
}
 
int main()
{
    int n;
    cin >> n;
    cout << dp(n);
}*/
 
/*int x,a,b;
char y;
 
int main()
{
    for(int i=0; i<6; i++)
    {
        cin >> x >> y;
        if(y=='A')
        {
            a++;
        } else{b++;}
    }
    if(b>=3)
    {
        cout << 100;
    } else if(b==2)
    {
        cout << 70;
    } else{cout << 40;}
}*/
 
/*int main()
{
    string v;
    cin >> v;
 
    bool flag = false;
 
    if(v[0] != v[1])
    {
        if(v[0] != v[2])
        {
            cout << 1;
        }
        else{cout << 2;}
    }
 
    for(int i=2; i<v.length(); i++)
    {
        if(v[i] != v[i-1])
        {
            if(v[i] != v[i-2])
            {
                cout << i+1;
            }
        }
    }
 
}*/
 
/*int main()
{
    int n, tmp[100][100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp[0][i];
    }
 
    for(int j=1; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            tmp[j][i] = tmp[j-1][i+1] - tmp[j-1][i];
        }
    }
 
    for(int i=0; i<n; i++)
    {
        if(i<n)
        {
            cout << tmp[i][0] << " ";
        }
    }
 
}*/
 
/*int main()
{
    int a,b;
    cin >> a >> b;
    int x;
    cin >> x;
    vector <int> v;
    for(int i=0; i<a; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    for(int i=0; i<b; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
 
    sort(v.begin(), v.end());
 
    cout << v[x-1];
}*/
 
/*int main()
{
    string s;
    cin >> s;
    int tmp = ceil(sqrt(s.length()));
    for(int i=s.length(); i<tmp*tmp; i++)
    {
        s += ".";
    }
 
    for(int i=0; i<tmp; i++)
    {
        if(i%2==0)
        {
            for(int j=i*tmp; j<(i+1)*tmp; j++)
            {
                cout << s[j];
            }
        }
        else
        {
            for(int j = (i+1)*tmp-1; j>i*tmp-1; j--)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}*/
 
/*ll newnum(ll x)
{
    if(x%4==0) {return x;}
    if(x%4==1) {return 1;}
    if(x%4==2) {return x+1;}
    return 0;
}
 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;
        ll a = newnum(x-1); ll b = newnum(y);
        cout << (a^b) << endl;
    }
}*/
 
/*int main()
{
    ll n; cin >> n;
    vector<pair <ll, ll>> p(n);
    for(int i=0; i<n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.rbegin(), p.rend());
    ll mx = p[0].second;
    ll ans = 1;
    for(int i=1; i<n; i++)
    {
        if(p[i].second > mx)
        {
            mx = p[i].second;
            ans++;
        }
    }
    cout << ans;
}*/
 
// wildcard
 
/*int main()
{
    string s,a,b,t,c,d;
    int n,btg;
    cin >> s >> n;
    string tmp[n];
    btg = s.find("*");
    a = s.substr(0,btg);
    b = s.substr(btg+1);
    int pjg = b.length();
    for(int i=0; i<n; i++)
    {
        cin >> t;
        if(s.length()-1 > t.length())
        {
            continue;
        }
        c = t.substr(0,btg);
        d = t.substr(t.length()-pjg,pjg);
        if(a==c && b==d)
        {
            tmp[i] = t;
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << tmp[i] << endl;
    }
}*/
 
/*int main()
{
    string s;
    getline(cin,s);
    if(s.find("ideafuse") != -1)
    {
        cout << s.find("ideafuse") + 1;
    } else{cout << -1;}
}*/
 
/*int main()
{
    double n;
    cin >> n;
    double ans = (n-1)/2 * n/2;
    cout << fixed << setprecision(2) << ans;
}*/
 
/*int main()
{
    double n,k;
    cin >> n >> k;
    for(int i=0; i<k; i++)
    {
        int x;
        cin >> x;
    }
 
    cout << fixed << setprecision(5) << (1/n)*(n-k-1)/(n-1);
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=1; i<=n; i++)
    {
        cin >> s[i];
    }
 
}*/
 
// Pola string
 
/*int main()
{
    string s;
    cin >> s;
    int tmp = ceil(sqrt(s.length()));
    for(int i=s.length(); i<tmp*tmp; i++)
    {
        s += ".";
    }
 
    for(int i=0; i<tmp; i++)
    {
        if(i%2==0)
        {
            for(int j = i*tmp; j<(i+1)*tmp; j++)
            {
                cout << s[j];
            }
        }
        else
        {
            for(int j = (i+1)*tmp-1; j>(i*tmp)-1; j--)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}*/
 
// Angka 1
 
/*int main()
{
    int n;
    cin >> n;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans+=i;
        cout << ans << endl;
    }
}*/
 
// koin asing
/*int main()
{
    string s;
    cin >> s;
 
    if(s[0] != s[1])
    {
        if(s[0] != s[2])
        {
            cout << 1;
        } else{cout << 2;}
    }
 
    for(int i=2; i<s.length(); i++)
    {
        if(s[i] != s[i-1])
        {
            if(s[i] != s[i-2])
            {
                cout << i+1;
            }
        }
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
 
    if(n%2==1)
    {
        for(int i=1; i<=n/2; i++)
        {
            swap(s[i],s[n-i]);
        }
    } else
    {
        for(int i=1; i<n/2; i++)
        {
            swap(s[i],s[n-i]);
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << s[i] << endl;
    }
 
}*/
 
/*int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
 
    for(int i=0; i<n/2; i++)
    {
        cout << s[i] << endl << s[n-1-i] << endl;
    }
    if(n%2!=0)
    {
        cout << s[n/2];
    }
}*/
 
/*int main()
{
    ll n,k,ans=1,a=0,mx=0,x;
    cin >> n >> k;
    while(n--)
    {
        a++;
        cin >> x;
        mx = max(mx,x);
        if(a==k)
        {
            ans += mx+1;
            a = 0;
            mx = 0;
        }
    }
 
    if(a>0)
    {
        ans+=mx+1;
    }
 
    cout << ans;
 
}*/
 
/*int main()
{
	string k; //ma*
	ll n,x,y,c; // unsigned mulai dari 0 - 65535
	vector<string>vn; //mula, makan, minum, main, hama
	bool depan;
 
	cin >> k >> n; //k=ma*    n=5
	vn.resize(n);
 
	for(x=0; x<n; x++) {  cin >> vn[x]; }
	for(x=0; x<=0; x++)     { 	if(k[x]=='*') 	{ depan=1; } else { depan=0; }  }
 
 
	if(depan==0) //contoh ma*
	{
		for(x=0; x<vn.size(); x++)
		{
			c=0;
			for(y=0; y<k.length()-1; y++)
			{   if(k[y]==vn[x][y]) {  c++;   }  else { break; }	}
 
			if(c==k.length()-1) {  cout << vn[x]<< endl; }
		}
	}
	else if(depan==1) //contoh *ma
	{
		reverse(k.begin(),k.end()); //putar string k
		for(x=0; x<vn.size(); x++)
		{
			c=0;
			reverse(vn[x].begin(),vn[x].end()); //putar string dalam vektor vn
 
			for(y=0; y<k.length(); y++)
			{   if(k[y]==vn[x][y]) {  c++; } else { break; }     }
 
			if(c==k.length()-1)
			{
			      reverse(vn[x].begin(),vn[x].end());
			      cout << vn[x]<< endl;
			}
                              }
              }
	else
	{
   	          for(x=0; x<vn.size(); x++)  { cout << vn[x]<< endl;  }
              }
}*/
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll diskon,pajak,tmp;
    diskon = n*a/100;
    tmp = n-diskon;
    pajak = tmp*b/100;
    cout << tmp+pajak;
}*/
 
/*int main()
{
    string s = "halo dunia";
    string x;
    getline(cin,x);
    short i=10,ans=0;
    while(i--)
    {
        if(x[i] == s[i] || x[i] + 32 == s[i])
        {
            ans++;
        }
    }
    cout << ans;
}*/
 
/*int main()
{
    string s;
    getline(cin,s);
    ll ans=1;
    ll n = s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'e')
        {
            if(s[i+1] == 'u')
            {
                ans = (3*ans)%1000000007;
            } else{ans = (2*ans)%1000000007;}
        }
    }
    cout << ans;
}*/
 
/*void solve()
{
    string s;
    cin >> s;
    if(s=="PAS")
    {
         cout <<"var data:array[1..10000] of longint;" << endl;
         cout <<"   n,i,j,temp:longint;" << endl;
         cout <<"begin" <<endl;
         cout <<"  readln(n);"<< endl;
         cout <<"  for i:=1 to n do readln(data[i]);" << endl;
         cout <<"  for i:=1 to n-1 do" << endl;
         cout <<"     for j:=i+1 to n do"<< endl;
         cout <<"       if (data[i]>data[j]) then" << endl;
         cout <<"       begin" << endl;
         cout <<"         temp:=data[i];" << endl;
         cout <<"         data[i]:=data[j];" << endl;
         cout <<"         data[j]:=temp;"<< endl;
         cout <<"       end;" << endl;
         cout <<"  for i:=1 to n do writeln(data[i]);" << endl;
         cout <<"end." << endl;
    }
    else
    {
        cout <<"int data[10001];" << endl;
        cout <<"int n,i,j,temp;" << endl;
        cout <<"int main(){" << endl;
        cout <<"  scanf(\"%d\",&n);" << endl;
        cout <<"  for (i=1;i<=n;i++) scanf(\"%d\",data[i]);" << endl;
        cout <<"  for (i=1;i<=n-1;i++)" << endl;
        cout <<"    for (j=i+1;j<=n;j++)" << endl;
        cout <<"      if (data[i]>data[j]){" << endl;
        cout <<"        temp=data[i];" << endl;
        cout <<"        data[i]=data[j];" << endl;
        cout <<"        data[j]=temp;" << endl;
        cout <<"      }" << endl;
        cout <<"  for (i=1;i<=n;i++) printf(\"%d\\n\",data[i]);" << endl;
        cout <<"  return 0;" << endl;
        cout <<"}" << endl;
    }
}
 
int main()
{
    solve();
    return 0;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    if(n>=1000) {cout << 1000 << " " << n/1000 << endl; n%=1000;}
    if(n>=500) {cout << 500 << " " << n/500 << endl; n%=500;}
    if(n>=200) {cout << 200 << " " << n/200 << endl; n%=200;}
    if(n>=100) {cout << 100 << " " << n/100 << endl; n%=100;}
    if(n>=50) {cout << 50 << " " << n/50 << endl; n%=50;}
    if(n>=20) {cout << 20 << " " << n/20 << endl; n%=20;}
    if(n>=10) {cout << 10 << " " << n/10 << endl; n%=10;}
    if(n>=5) {cout << 5 << " " << n/5 << endl; n%=5;}
    if(n>=2) {cout << 2 << " " << n/2 << endl; n%=2;}
    if(n>=1) {cout << 1 << " " << n/1 << endl;}
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    int a,b; cin >> a >> b;
    int x1=(n/a)*(m/b);
    int x2=(n/b)*(m/a);
    cout << max(x1,x2);
}*/
 
/*int main()
{
    int x;
    cin >> x;
    for(int i=1; i<=x; i++)
    {
        if(i%3==0||i%5==0||i%7==0)
        {
            if(i%3==0)
            {
                cout << "Comp";
            }
            if(i%5==0)
            {
                cout << "Fest";
            }
            if(i%7==0)
            {
                cout << "Seven";
            }
            cout << " ";
        } else{cout << i << " ";}
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector <int> v;
    for(int i=0; i<n*2; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    int ans=0,tmp=n*2-1;
    for(int i=tmp; i>=n; i--)
    {
        ans+=v[i];
    }
    cout << ans;
}*/
 
/*int main()
{
    string s,t;
    cin >> s >> t;
    cout << s+t;
}*/
 
/*int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        for(intj=0; j<4; j++)
        {
            cin >> a[j];
        }
    }
}*/
 
/*int main()
{
    string x,y;
    cin >> x >> y;
    int n = x.find(y);
    if(n!=-1)
    {
        cout << "TIDAK";
    } else{cout << "YA" << endl << x+"bukansaitammar";}
}*/
 
/*int a,b,m,arr[2006],ans;
 
int main()
{
    cin >> a >> b >> m;
    for(int i=0; i<m*m; i++)
    {
        if(arr[a] == 0)
        {
            arr[a]++;
            ans++;
        }
        int tmp = (a+b)%m;
        a = b;
        b = tmp;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n+1];
    vector <int> v;
    for(int i=0; i<=n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            v.pb(a[i]);
        } else{
            if(a[i] != a[i-1])
            {
                v.pb(a[i]);
            }
        }
    }
 
    if(v.size()<n)
    {
        cout << 0;
    }
    else if(v.size()==n)
    {
        cout << 1;
    }
    else{cout << n+1;}
}*/
 
/*int main()
{
    int t,m,n;
    cin >>t;
    int id[t], x[n],s1[t][n],s2[t][n],s3[t][n];
    for(int i=0; i<t; i++)
    {
        cin >> n >> m;
        cin >> id[i];
        for(int j=0; j<n; j++)
        {
            cin >> x[j] >> s1[i][j] >> s2[i][j] >> s3[i][j];
        }
    }
 
    for(int i=0; i<t; i++)
    {
        int rang = n;
        for(int j=0; j<n; j++)
        {
            if(id[i] == x[j])
            {
                for(int k=0 && k!=j; k<n; k++)
                {
                    if(s3[i][j] > s3[i][k])
                    {
                        rang--;
                    }
                    else if(s3[i][j] == s3[i][k])
                    {
                        if(s2[i][j] > s2[i][k])
                        {
                            rang--;
                        }
                        else if (s2[i][j] == s2[i][k])
                            {
                                if(s1[i][j] > s1[i][k])
                                {
                                    rang--;
                                }
                            }
                        }
                }
            }
        }
        if(rang <= m)
        {
            cout << "YA";
        } else{cout << "TIDAK";}
    }
}*/
 
/*int main()
{
    string b1,b2,a1,a2;
    vector <short> a,b,c;
    short i,y,p1,p2,mx;
    short tmp;
 
    cin >> b1 >> b2;
    p1 = b1.length();
    p2 = b2.length();
    mx = max(p1,p2);
    a.resize(100000);
    b.resize(100000);
    c.resize(mx+1);
 
    for(i=0; i<p1; i++)
    {
        a1 = b1[i];
        a[p1-1-i] = stoi(a1);
    }
 
    for(int i=0; i<p2; i++)
    {
        a2 = b2[i];
        b[p2-1-i] = stoi(a2);
    }
    tmp = 0;
    for(i=0; i<=c.size(); i++)
    {
        c[i] = a[i] + b[i] + tmp;
        tmp = c[i]/10;
        c[i] = c[i]%10;
    }
    for(i=c.size()-1; i>=0; i--)
    {
        if(c[i]>0)
        {
            break;
        }
    }
 
    for(y=i; y>=0; y--)
    {
        cout << c[y];
    }
}*/
 
/*int n,d;
ll ans,a;
 
int main()
{
    cin >> n >> d >> a;
    ll cur = a; ans=1;
    for(int i=1; i<n; i++)
    {
        cin >> a;
        if(a-cur >= d)
        {
            ans++;
        }
        cur = a;
    }
    cout << ans;
}*/
 
// Dominasi sistem bintang
 
/*int main()
{
    int n,ans=0;
    cin >> n;
    pair <int, int> p[n];
    for(int i=0; i<n; i++)
    {
        cin >> p[i].first;
    }
    for(int i=0; i<n; i++)
    {
        cin >> p[i].second;
    }
    sort(p,p+n);
 
    int cur = n-2;
    for(int i=n-1; i>=0; i--)
    {
        if(i == cur) {cur--;}
        while(p[i].first == p[cur].first)
        {
            if(p[i].second > p[cur].second)
            {
                p[cur].first--;
            } else{p[i].first--;}
        }
    }
 
    for(int i=0; i<n; i++)
    {
        if(p[i].first !=0)
        {
            ans+=p[i].second;
        }
    }
    cout << ans;
}*/
 
/*ll ans=0,n;
ll p[100001];
vector<ll>tmp[100001];
 
int main()
{
    cin >> n;
    for(int i=0; i<n; i++) { cin >> p[i];}
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        tmp[p[i]].pb(x);
    }
 
    priority_queue <ll> pq;
    for(int i=100000; i>=1; i--)
    {
        for(ll j:tmp[i])
        {
            pq.push(j);
        }
        if(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
    }
 
    cout << ans;
}*/
 
// Bukit atau lembah
 
/*int main()
{
    ll x;
    cin >> x;
    ll bukit = x;
    ll lembah = x;
    ll prev = x;
    ll diff = 0;
    ll cur;
    while(cin >> x)
    {
        cur =  x;
        if(cur>prev)
        {
            bukit = cur;
           diff = max(diff, bukit-lembah);
        }
        else if(cur<prev)
        {
            lembah = cur;
            diff = max(diff, abs(lembah-bukit));
        }
        prev = cur;
    }
    cout << diff << endl;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n][10001];
    for(int i=0; i<n; i++)
    {
        cin >> a[0][i];
    }
 
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j] = a[i-1][j+1] - a[i-1][j];
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout << a[i][0] << " ";
    }
}*/
 
 
/*int main()
{
    int n;
    cin >> n;
    vector <int> v;
 
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
 
    for(int i=0; i<n/2; i++)
    {
        cout << v[i] << endl << v[n-1-i] << endl;
    }
    if(n%2!=0)
    {
        cout << v[n/2];
    }
}*/
 
/*int main()
{
    ll n,m;
    cin >> n >> m;
    ll mn,mx;
    mx = (n-m)/4;
    if(n>5*m || m>n)
    {
        cout << -1 << " " << -1;
    }
    else{
    if(n <= 4*m)
    {
        mn = 0;
    } else
    {
        mn = n-(4*m);
    }
    cout << mn << " " << mx;
    }
}*/
 
/*ll eu(ll a, ll b)
{
    if(b==0){return a;}
    else{return eu(b,a%b);}
}
 
int main()
{
    ll fpb,kpk; cin >> fpb >> kpk;
    if(kpk%fpb!=0)
    {
        cout << -1 << " " << -1;
        return 0;
    }
    ll x,y;
    ll tmp = kpk/fpb;
    for(int i=1; i<=sqrt(tmp); i++)
    {
        if(eu(i,tmp/i)==1 && tmp%i==0  )
        {
            x = i;
            y = tmp/i;
        }
    }
 
    cout << x*fpb << " " << y*fpb;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    string s; int tmp=1;
 
    n = n/2+1;
    s+="G";
    while(tmp++ < n)
    {
        s+="LG";
    }
 
    cout << s.size() << endl << s;
}*/
 
/*int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}*/
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll fpb = __gcd(a,b);
    ll kpk = a*b/fpb;
    cout << kpk/a+kpk/b;
}*/
 
/*ll f(ll x)
{
    if(x<=1)
    {
        return 1;
    } else{return f(x/2)*2+x;};
}
 
int main()
{
    cout << f(1048576);
}*/
/*int n,m,ans;
 
int main()
{
    cin >> n >> m;
    vector <int> v(100005, 0);
    vector <pair <int,int>> p;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        v[a]++;
    }
 
    for(int i=0; i<m; i++)
    {
        int l,r;
        cin >> l >> r;
        p.pb(make_pair(r,l));
    }
 
    sort(p.begin(),p.end());
 
    for(int i=0; i<m; i++)
    {
        int l = p[i].second;
        int r = p[i].first;
        for(int j=l; j<=r; j++)
        {
            if(v[j] > 0)
            {
                v[j]--;
                ans++;
                goto lewat;
            }
        }
        lewat:;
    }
    cout << ans;
}*/
 
// osp 2021 (Lampu hias warna-warni)
 
/*int main()
{
    int n; cin >> n;
    string x = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    vector <int> v(26, 0);
    string s; cin >> s;
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(s[i] == x[j])
            {
                v[j]++;
                break;
            }
        }
    }
 
    sort(v.begin(), v.end());
 
    int a = v[25], b = v[24], c = v[23];
 
    if(c==0)
    {
        cout << -1 << endl;
        return 0;
    }
 
    int hasil = 3*c;
    if(a>c)
    {
        hasil++;
    }
    if(b>c)
    {
        hasil++;
    }
    cout << hasil;
 
}*/
 
// OSP 2022 (mengangkut bebek)
 
/*int main()
{
    ll k; cin >> k;
    pair <ll,ll> p[k];
 
    ll t[k],c[k];
    for(ll i=0; i<k; i++)
    {
        cin >> p[i].second;
    }
    for(ll i=0; i<k; i++)
    {
        cin >> p[i].first;
    }
 
    ll n; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    sort(p,p+k);
    sort(a,a+n);
 
    ll z = n-1;
    ll ans = 0;
    ll i = 0;
 
    while(z>=0)
    {
        if(p[i].second > 0)
        {
            ans += p[i].first*a[z];
            z--;
            p[i].second--;
        }
        else{i++;}
    }
    cout << ans;
}*/
 
// OSP 2021 (buah)
 
/*int main()
{
    ll n,a,b;
    cin >> n >> a >> b;
    ll tmp = a*b/__gcd(a,b);
    ll ans = tmp/a + tmp/b;
    cout << ans;
}*/
 
// OSP 2021 (kartu)
/*int main()
{
    ll a,b; cin >> a >> b;
    ll mx = max(a,b);
    ll mn = min(a,b);
 
    while(mx%mn!=0)
    {
        ll tmp = mx-mn;
        mx = max(tmp,mn);
        mn = min(tmp,mn);
    }
 
    cout << mn;
}*/
 
// OSP 2022 (lampu hias)
 
/*int main()
{
    ll a,b,c; cin >> a >> b >> c;
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        if(x%a==0 && x%b==0 && x%c==0)
        {
            cout << "YA" << endl;
        } else{cout << "TIDAK" << endl;}
    }
}*/
 
// OSP 2020 (lari jauh)
 
/*int main()
{
    int n,k; cin >> n >> k;
    int a[n];
    cin >> a[0];
    for(int i=1; i<n; i++)
    {
        int x;
        cin >> x;
        a[i] = a[i-1]+x;
    }
 
    for(int i=0; i<k; i++)
    {
        int y;
        cin >> y;
        cout << upper_bound(a,a+n,y) - a << endl;
    }
 
}*/
 
/*int main()
{
    ll n,p,q; cin >> n >> p >> q;
    pair <int, int> a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
 
    sort(a+1,a+n+1);
 
    priority_queue<pair<int,int>>pq;
    vector <int> ans(n+1);
 
    for(int i=1,j=1; i<=n; i++)
    {
        while(a[j].first - a[i].first <= p && j<=n)
        {
            j++;
        }
        j--;
 
        pq.push({j-i+1,j});
        while(pq.top().second < i)
        {
            pq.pop();
        }
        ans[a[i].second] = pq.top().first;
    }
 
    for(int i=0; i<q; i++)
    {
        int x; cin >> x;
        cout << ans[x] << endl;
    }
}*/
 
/*int main()
{
    int n;
    cin >> n;
    multiset <int> paket;
    while(n--)
    {
        int x;
        cin >> x;
        if(paket.lower_bound(x) != paket.end())
        {
            paket.erase(paket.lower_bound(x));
        }
        paket.insert(x);
    }
    cout << paket.size();
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    if(n%m==0)
    {
        cout << "YA";
    } else{cout << "TIDAK";}
}*/
 
/*int main()
{
    int n; cin >> n;
    if(n%4==0)
    {
        cout << "YA";
    }
    else if(n%2==0)
    {
        cout << "TIDAK";
    }
    else
    {
        if((n-1)%4==0)
        {
            cout << "TIDAK";
        }
        else{cout << "YA";}
    }
}*/
 
/*int main()
{
    int n,q; cin >> n >> q;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr,arr+n);
 
    for(int i=0; i<q; i++)
    {
        ll x; cin >> x;
        bool flag = 0;
 
        int l=0,r=n-1;
 
        while(l<r)
        {
            ll sum = arr[l] + arr[r];
            if(sum==x)
            {
                flag = 1;
                break;
            }
            else if(sum<x)
            {
                l++;
            } else
            {
                r--;
            }
        }
        if(flag)
        {
            cout << "YA" << endl;;
        } else
        {
            cout << "TIDAK" << endl;
        }
    }
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(j%2==0)
            {
                cout << "W";
            } else
            {
                cout << "B";
            }
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    short n,m,x,y;
    cin >> n >> m >> x >> y;
    int cnt1=n-x;
    int cnt2=(m-y)*2;
    int hasil = cnt1+cnt2;
    if(hasil>25)
    {
        cout << "LOLOS";
    }
    else
    {
        cout << "TIDAK LOLOS";
    }
}*/
 
/*int main()
{
    ll m,a,b;
    cin >> m >> a >> b;
    if(a+b == 2*m)
    {
        if(a%2==1 && b%2==1)
        {
            cout << 1 << " ";
        } else
        {
            cout << 0 << " ";
        }
        cout << min(a,b);
    }
    else
    {
        cout << 0 << " " << min(a,b);
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    cout << (n%10==0?"Rep":"Neb");
}*/
 
/*int main()
{
    int n; cin >> n;
    ll cnt=1;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        cnt = cnt * x a% 998244353;
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    string s; cin >> s;
    short jml=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'O')
        {
            jml++;
        }
        if(jml>1)
        {
            break;
        }
    }
 
    if(jml == 1)
    {
        cout << "Ya";
    } else
    {
        cout << "Tidak";
    }
}*/
 
/*int main()
{
    int n,x,y; cin >> n >> x >> y;
    int a,b,c,d;
    int s = abs(x);
    int r = abs(y);
    int t = s+r;
    if(t>n)
    {
        cout << -1;
        return 0;
    }
 
    if((n-t)%2==0)
    {
        if(x>=0)
        {
            b=s+(n-t)/2;
            d=(n-t)/2;
            if(y>=0)
            {
                a=r;
                c=0;
            }
            else
            {
                a=0;
                c=r;
            }
        }
        else
        {
            b=(n-t)/2;
            d=s+(n-t)/2;
            if(y>=0)
            {
                a=r;
                c=0;
            }
            else
            {
                a=0;
                c=r;
            }
        }
    }
    else
    {
        cout << -1;
        return 0;
    }
 
    cout << a << " " << b << " " << c << " " << d;
}*/
 
/*int main()
{
    int n; cin >> n;
    double r,v; cin >> r >> v;
    int w[n];
 
    for(int i=0; i<n; i++)
    {
        cin >> w[i];
        if(w[i]==v)
        {
            cout << -1 << endl;
            return 0;
        }
    }
 
    double res=0;
 
    for(int i=0; i<n; i++)
    {
        res = max(res, r/abs(w[i]-v));
    }
 
    cout << setprecision(9) << res << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
 
    ll id=0;
 
    while(id < n && a[id]==1)
    {
        id++;
    }
 
    id%=n;
    ll i=id,res=0,cnt=0;
 
    do
    {
        if(a[i] == 1)
        {
            cnt++; res+=cnt;
        }
        else
        {
            cnt=0;
        }
        i = (i+1)%n;;
    } while(i!=id);
 
    cout << res << endl;
} */
 
/*int main()
{
    ll n,m; cin >> n >> m;
    ll x=1,w=0;
    for(ll i=0; i<n; i++)
    {
        ll l,r;
        cin >> l >> r;
 
        if(x < l)
        {
            w += abs(x-l);
            x = l;
        }
        else if(x > r)
        {
            w += abs(x-r);
            x = r;
        }
    }
    cout << w << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int a,b; cin >> a >> b;
        cout << 2*min(a,b) << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    int odd=0,even=0;
 
    for(int i=0; i<n; i++)
    {
        ll x,y;
        cin >> x >> y;
        if((x+y)%2==0)
        {
            even++;
        } else
        {
            odd++;
        }
    }
 
    if(even==0|| odd==0)
    {
        cout << "NO" << endl;
    } else
    {
        cout << "YES" << endl;
    }
}*/
 
/*int main()
{
    int n,m,res=0;
    cin >> n >> m;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        a[i] = 0;
    }
 
    for(int i=0; i<m; i++)
    {
        int x; cin >> x;
        a[x] = (a[x]+1)%4;
    }
 
    for(int i=1; i<=n; i++)
    {
        if(a[i] == 2 || a[i] == 3)
        {
            res++;
        }
    }
    cout << res << endl;
}*/
 
/*int main()
{
    ll n; cin >> n;
    ll cnt=0;
    ll tmp=2;
 
    while(tmp<=n)
    {
        tmp*=2;
    }
 
    cout << tmp-n;
}*/
 
/*int main()
{
    ll x,y; cin >> x >> y;
    ll mn = min(x,y);
    ll mx = max(x,y);
    cout << (mn-1)*mx;
}*/
 
/*int main()
{
    ll a,b; cin >> a >> b;
    ll arr[a][b];
    ll x,y=0,z=0;
    for(ll i=0; i<a; i++)
    {
        for(ll j=0; j<b; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == -1)
            {
                x=(i+j)%2;
            }
            else if((i+j)%2 == 0)
            {
                y+=arr[i][j];
            }
            else
            {
                z+=arr[i][j];
            }
        }
    }
 
    if(x==0)
    {
        if(y>z)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl << z-y;
        }
    }
    else
    {
        if(y<z)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl << y-z;
        }
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    ll s1=0,s2=0;
 
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin >> x;
        if(n>2)
        {
            s1+=(x*pow(-1,i%2));
            s2+=(x*pow(-1,(i+1)%2));
        }
        else
        {
            s2+=(x*pow(-1,(i+1)%2));
            s1 = INT_MIN;
        }
    }
 
    cout << max(s1,s2);
}*/
 
/*int main()
{
    ll n; cin >> n;
    if(n>=100)
    {
        cout << 9;
    }
    else if(n >= 19 && n <= 99)
    {
        string s = to_string(n);
        if(s[1] == '9')
        {
            cout << n/10;
        }
        else
        {
            cout << n/10-1;
        }
    }
    else
    {
        cout << 0;
    }
}*/
 
/*int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin >> x >> y;
    }
 
    int ans=n+(n-3)-m;
 
    cout << ans;
}*/
 
/*int main()
{
    ll n,m,mod=998244353,ans=1; cin >> n >> m;
 
    for(int i=1; i<=n*m-1;i++)
    {
        ans*=2;
        ans%=mod;
    }
 
    cout << ans;
}*/
 
/*int main()
{
    int n; cin >> n;
    int arr[n];
    bool eq=0,ni=0,nd=0;
 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] < arr[i-1] && i != 0)
        {
            ni = 1;
        } else if(arr[i] > arr[i-1] && i!=0)
        {
            nd = 1;
        }
        else
        {
            eq = 1;
        }
    }
 
    if(ni && nd)
    {
        cout << "NONE";
    }
    else if(eq)
    {
        if(ni)
        {
            cout << "NONINCREASING";
        }
        else if(nd)
        {
            cout << "NONDECREASING";
        }
        else
        {
            cout << "EQUAL";
        }
    }
    else if(nd)
    {
        cout << "NONDECREASING";
    }
    else if(ni)
    {
        cout << "NONINCREASING";
    }
    else
    {
        cout << "NONE";
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    for(int i=n; i>0; i--)
    {
        int tmp=0;
        for(int j=n; j>0; j--)
        {
            for(int k=n; k>0; k--)
            {
                if(k*k + j*j == i*i)
                {
                    tmp++;
                }
            }
        }
        if(tmp == 2)
        {
            cout << i;
            return 0;
        }
    }
 
    cout << -1;
}*/
 
/*int main()
{
    int a,b,c; cin >> a >> b >> c;
    int mx = max(a,max(b,c));
    for(int i=mx; i<=100; i++)
    {
        if(i%a!=0 && i%b!=0 && i%c!=0)
        {
            cout << i << endl;
            break;
        }
    }
}*/
 
/*int main()
{
    double n; cin >> n;
    cout << fixed << setprecision(1) << (n+1)/2;
}*/
 
/*int main()
{
    int n,m,r; cin >> n >> m >> r;
    int mn=min(n,m);
    cout << (mn-1)/(2*r+1)+1;
}*/
 
/*int main()
{
    int p,q,r,s,t; cin >> p >> q >> r >> s >> t;
    int x = sqrt(p*q*r*s*t);
    cout << x/(q*s) << " " << x/(r*t) << " " << x/(p*s) << " " << x/(q*t) << " " << x/(p*r);
}*/
 
/*int main()
{
    string s; cin >> s;
    int b=0,o=0,n=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'b')
        {
            b++;
        }
        else if(s[i] == 'o')
        {
            o++;
        }
        else if(s[i] == 'n')
        {
            n++;
        }
    }
 
    if(b<2||o<2||n<2)
    {
        cout << 0;
    }
    else
    {
        cout << min(b,min(o,n))-1;
    }
}*/
 
/*int main()
{
    string s,t; cin >> s >> t;
    bool flag = true;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 97)
        {
            s[i] -= 32;
        }
        if(t[i] >= 97)
        {
            t[i] -= 32;
        }
        if(s[i] != t[i])
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout << "20/20";
    } else
    {
        cout << "x_x";
    }
}*/
 
/*int main()
{
    ll a[3]; cin >> a[0] >> a[1] >> a[2];
 
    sort(a,a+3);
        if(a[0] == a[2]-1 && a[1] == a[2]-1 && a[0]+a[1] > a[2])
        {
            cout << "Ya";
        }
        else
        {
            cout << "Tidak";
        }
}*/
 
/*int main()
{
    int n; cin >> n;
    int a,b;
    if(n==1)
    {
        a = 0;
    }
    else if(n%2==0)
    {
        a = n/2;
    }
    else if(n%3==0)
    {
        a = n/3;
    }
    else if(n%5==0)
    {
        a = n/5;
    }
    else if(n%7==0)
    {
        a = n/7;
    }
    else
    {
        a = 1;
    }
 
    cout << a << " " << n-a;
}*/
 
/*int main()
{
    cout << "CHEKHOVSGUN";
}*/
 
/*int main()
{
    int a; cin >> a;
    for(int i=0; i<a*a; i++)
    {
        for(int j=0; j<a*a; j++)
        {
            int b; cin >> b;
        }
    }
 
    cout << (a*a)*(a*a+1)/2 << endl;
}*/
 
/*int main()
{
    ll a,b,c; cin >> a >> b >> c;
    ll d,e,f; cin >> d >> e >> f;
 
    bool c1=(a+d)%2;
    bool c2=(b+e)%2;
    bool c3=(c+f)%2;
 
    if(c1 && c2 && c3)
    {
        cout << 0;
    }
    else if(!c1 && !c2 && !c3)
    {
        cout << 0;
    } else
    {
        cout << 1;
    }
}*/
 
// 8 OSN 2007 Sesi 2 (pecahan biasa ke campuran)
/*int main()
{
    string s; cin >> s;
    int f = s.find('/');
    int t1 = stoi(s);
    s.erase(0,f+1);
    int t2 = stoi(s);
    int fpb = __gcd(t1,t2);
    t1 = t1/fpb;
    t2 = t2/fpb;
    if(t1/t2 <=0)
    {
        cout << t1 << "/" << t2;
    }
    else
    {
        cout << t1/t2 << " " << t1-(t1/t2)*t2 << "/" << t2;
    }
}*/
 
// kartu 2
/*int main()
{
    int n; cin >> n;
    int k; cin >> k;
    int ans=1,a[k];
 
    for(int i=0; i<k; i++)
    {
        string s; cin >> s;
        a[i] = stoi(s);
    }
 
    for(int i=1; i<k; i++)
    {
        if(a[i] < a[i-1])
        {
            ans++;
            break;
        }
        ans++;
    }
    cout << ans;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2==0 && j%2==0)
            {
                cout << "#";
            }
            else if(i%2==1 && j%2==1)
            {
                cout << "*";
            }
            else
            {
                cout << "$";
            }
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    int maju,mundur,kanan,kiri;
    maju = mundur = kanan = kiri = 0;
    int mx1,mx2,p=0,l=0,mn1,mn2;
    mx1 = mx2 = INT_MIN;
    mn1 = mn2 = INT_MAX;
    for(int i=0; i<n; i++)
    {
        string s; cin >> s;
        int x; cin >> x;
        if(s=="maju")
        {
            p+=x;
            mx1 = max(mx1,p);
            mn1 = min(mn1,p);
        }
        if(s=="mundur")
        {
            p-=x;
            mx1 = max(mx1,p);
            mn1 = min(mn1,p);
        }
        if(s=="kanan")
        {
            l+=x;
            mx2 = max(mx2,l);
            mn2 = min(mn2,l);
        }
        if(s=="kiri")
        {
            l-=x;
            mx2 = max(mx2,l);
            mn2 = min(mn2,l);
        }
    }
 
    p=0;
    l=0;
    if(mx1>0)
    {
        p+=mx1;
    }
    if(mn1<0)
    {
        p+=abs(mn1);
    }
    if(mx2>0)
    {
        l+=mx2;
    }
    if(mn2<0)
    {
        l+=abs(mn2);
    }
 
 
    if(p>l)
    {
        cout << p << " " << l;
    }
    else
    {
        cout << l << " " << p;
    }
}*/
 
/*int main()
{
    int w,h; cin >> w >> h;
    int n; cin >> n;
    int arr[h+1][w+1];
    memset(arr,0,sizeof(arr));
    for(int i=0; i<n; i++)
    {
        int a,b,c,d,k; cin >> a >> b >> c >> d >> k;
        for(int x=b; x<=d; x++)
        {
            for(int y=a; y<=c; y++)
            {
                arr[x][y] = k;
            }
        }
    }
 
    for(int x=1; x<=h; x++)
    {
        for(int y=1; y<=w; y++)
        {
            cout << arr[x][y];
        }
        cout << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,m,k,v; cin >> n >> m >> k >> v;
        int h[n],ans=0;
        for(int i=0; i<n; i++)
        {
            cin >> h[i];
            if(v!=h[i] && abs(v-h[i])%k == 0 && abs(v-h[i])/k < m)
            {
                ans++;
            }
        }
        cout << ans << endl;
 
    }
}*/
 
/*int main()
{
    ll n,ans=0; cin >> n;
    ll a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        ans+=n*a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        ans+=n*b[i];
    }
 
    cout << ans << endl;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    if(n%4==0 && m%4==0)
    {
        cout << "Yes" << endl;
    } else
    {
        cout << "No" << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int a; cin >> a;
        s.insert(a);
    }
    if(s.size()==1)
    {
        cout << 1;
    }
    else if(s.size() == n)
    {
        cout << n;
    } else{cout << n-1;}
}*/
 
/*int main()
{
    start;
    cin.tie(0);cout.tie(0);
 
    string s; int x; cin >> s >> x;
    int n,k,q; cin >> n >> k >> q;
    vector <int> v;
    if(k==2)
    {
        string resp;
        for(int i=1; i<=n; i++)
        {
            cout << 2 << " " << i << " " << n+1 << endl;
            cin >> resp;
            if(resp=="bisajadi"){v.push_back(i);}
        }
        cout << v.size() << " ";
        for(int i: v){cout << i << " ";};
        cout << endl;
        cin >> resp;
        if(resp=="ya"){return 0;}
    }
    if(q>=n+1)
    {
        string resp;
        for(int i=1; i<=n; i++)
        {
            cout << 1 << " " << i << endl;
            cin >> resp;
            if(resp=="ya"){cout << 1 << " " << i << endl; return 0;}
            else if(resp=="bisajadi"){v.push_back(i);}
        }
        cout << v.size() << " ";
        for(int i: v) {cout << i << " ";}
        cout << endl;
        cin >> resp;
        if(resp=="ya"){return 0;}
    }
 
    int l=1,r=n,ans=-1;
    string resp;
    while(l<=r)
    {
        int m = (l+r)/2;
        cout << 1 << " " << m << endl;
        cin >> resp;
        if(resp=="bisajadi")
        {
            ans = m;
            l = m+1;
        }
        else if(resp=="tidak")
        {
            r = m-1;
        }
        else
        {
            return 0;
        }
    }
    cout << ans << " ";
    for(int i=1; i<=ans; i++){cout << i << " ";}
    cout << endl;
    cin >> resp;
    if(resp == "ya"){return 0;}
 
    return 0;
}*/
 
/*int main()
{
    ll n,q; cin >> n >> q;
    ll awal=0,akhir=0;
    while(q--)
    {
        ll x,y,z; cin >> x >> y >> z;
        if(x==1)
        {
            if(y==n)
            {
                awal+=z;
                akhir+=z;
            }
            else
            {
                awal+=z;
            }
        }
        else if(x==2)
        {
            if(y==n)
            {
                awal-=z;
                akhir-=z;
            }
            else
            {
                akhir-=z;
            }
        }
    }
 
    cout << max(abs(awal),abs(akhir)) << endl;
}*/
 
/*int main()
{
    int n,m; cin >> n >> m;
    bool flag=0;
 
    for(int i=0; i<n; i++)
    {
        for(int i=0; i<m; i++)
        {
            int x; cin >> x;
            if(x==1)
            {
                flag = 1;
            }
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    pair <int,int> p[n];
    for(int i=0; i<n; i++)
    {
        int x,y; cin >> x >> y;
        p[i] = {x+y,x};
    }
 
    sort(p,p+n);
 
    int cnt=0;
    int startTime=0;
    for(int i=0; i<n; i++)
    {
        if(p[i].second >= startTime)
        {
            cnt++;
            startTime = p[i].first;
        }
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    int n; cin >> n;
    string s1,s2; cin >> s1 >> s2;
    int cnt=0;
    bool flag=0;
    for(int i=0; i<n; i++)
    {
        if(s1[i] > s2[i])
        {
            if(flag == 0)
            {
                cnt++;
                flag = 1;
            }
 
        }
        else if(s1[i] < s2[i])
        {
            flag = 0;
        }
    }
    cout << cnt << endl;
}*/
 
/*int main()
{
    string sub; cin >> sub;
    int z; cin >> z;
    int n; cin >> n;
    int idx[1001];
    int ans[n+1];
    pair <int,int> p[n+1];
    for(int i=1; i<=n; i++)
    {
        int t,a,b; cin >> t >> a >> b;
        idx[t] = i;
        p[i] = {t,a+1};
    }
    sort(p,p+n+1);
    for(int i=1; i<=n; i++)
    {
        ans[i] = p[i].fi;
        int j = i;
        while(p[i].se != j)
        {
            swap(ans[j], ans[j-1]);
            j--;
        }
    }
 
    for(int i=1; i<=n; i++)
    {
        cout << idx[ans[i]] << " ";
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++){cin >> v[i];}
 
    int acc=(accumulate(v.begin(),v.end(),0)+1)/2;
    int cur=0,x;
    for(int i=n-1; i>=0; i--)
    {
        cur+=v[i];
        if(cur>acc)
        {
            x = v[i];
            break;
        }
    }
    cout << (x<acc ? "YES" : "NO") << endl;
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        char c; cin >> c;
        if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='r'||c=='s')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    bool flag=0;
    int x=0,y=0;
    while(t--)
    {
        int n; cin >> n;
        for(int i=0; i<n; i++)
        {
            char c; cin >> c;
            if(c=='U')
            {
                y++;
            }
            if(c=='D')
            {
                y--;
            }
            if(c=='R')
            {
                x++;
            }
            if(c=='L')
            {
                x--;
            }
            if(x==1 && y==1)
            {
                flag = 1;
            }
        }
            if(flag)
            {
            cout << "YES" << endl;
            }
            else
            {
            cout << "NO" << endl;
            }
            x=0;
            y=0;
            flag = 0;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int i=0,z=n-1,cnt=0;
        int p1=s[i];
        int p2=s[z];
        bool flag = 0;
        while(p1!=p2)
        {
            i++;
            z--;
            p1=s[i];
            p2=s[z];
            cnt+=2;
            if(cnt>=n)
            {
                flag = 1;
            }
        }
        if(flag)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n-cnt << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        ll sum=0,cnt=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            if(v[i] < 0)
            {
                v[i] = -v[i];
                cnt++;
            }
            sum+=v[i];
        }
 
        sort(v.begin(),v.end());
        if(cnt%2==1)
        {
            sum -= 2*v[0];
        }
 
        cout << sum << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b,c; cin >> a >> b >> c;
        if(a+b==c)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int m=0,b=0;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            if(x%2==0)
            {
                m+=x;
            }
            else
            {
                b+=x;
            }
        }
        if(m>b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(s.length()==1)
        {
            cout << "YES" << endl;
            continue;
        }
        bool flag = 1;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[i] == s[j])
                {
                    if((i+j)%2==1)
                    {
                        flag = 0;
                    }
                }
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n,q; cin >> n >> q;
        ll arr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<q; i++)
        {
            ll x,y,k; cin >> x >> y >> k;
            ll sum=0;
            for(int i=1; i<=n; i++)
            {
                if(i>=x && i<=y)
                {
                    sum+=k;
                }
                else
                {
                    sum+=arr[i];
                }
            }
            if(sum%2==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}*/
 
/*int main()
{
    int n; cin >> n;
    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        int a,b; cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    ll prev=0,ans=0;
 
    for(int i=0; i<v.size(); i++)
    {
        prev = v[i].second;
        int j=i+1;
        while(v[j].first <= prev)
        {
            j++;
        }
        i=j-1;
        ans++;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int n; cin >> n;
    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        ll a,b; cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
 
    ll prev=0,mx=INT_MIN,ans=0;
    for(int i=0; i<n; i++)
    {
        prev = v[i].second;
        ll tmp=0;
        ll j=i;
        while(v[j].first<=prev && j<n)
        {
            j++;
            tmp++;
        }
        if(tmp>mx)
        {
            ans = v[i].first;
            mx = tmp;
        }
        i=j-1;
    }
    cout << ans << endl;
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int ans=0;
        string c = {"codeforces"};
        for(int i=0; i<10; i++)
            {
                if(s[i]!=c[i])
                {
                    ans++;
                }
            }
            cout << ans << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector <int> v(n);
        int mx=0,tmp=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                tmp++;
                mx = max(mx,tmp);
            }
            else
            {
                tmp=0;
            }
        }
        cout << mx << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll mn1=2e10+10,mn2=2e10+10,mn3=2e10+10;
        for(int i=0; i<n; i++)
        {
            ll a; cin >> a;
            string b; cin >> b;
            if(b=="11")
            {
                mn3 = min(mn3,a);
            }
            else if(b=="01")
            {
                mn1 = min(mn1,a);
            }
            else if(b=="10")
            {
                mn2 = min(mn2,a);
            }
        }
        ll ans = min(mn3,mn2+mn1);
        if(ans >=2e10+10)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n][n];
        int mx=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i=n; i>=1; i--)
        {
            for(int j=1; j<=i-1; j++)
            {
                a[i-1][j] = max(a[i-1][j]+a[i][j],a[i-1][j]+a[i][j+1]);
            }
        }
        cout << a[1][1] << endl;
    }
}*/
 
/*int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int neg=0,ans=1;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            ans*=a[i];
            if(a[i] < 0)
            {
                neg++;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(abs(a[i])>abs(a[j]))
                {
                    swap(a[i],a[j]);
                }
            }
        }
        if(n==5)
        {
            cout << ans << endl;
        }
        else
        {
            if(neg%2==0)
            {
                ans = 1;
                for(int i=n-1; i>=n-5; n--)
                {
                    ans*=a[i];
                }
            }
            else
            {
                ans = 1;
 
            }
        }
    }
}*/
