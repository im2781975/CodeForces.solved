//tram
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
//Drinks

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
