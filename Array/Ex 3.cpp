//Candies and Two Sisters
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
//Sum of Round Numbers
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
//I Wanna Be the Guy
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
//The new year : meeting friends
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
//Add Odd or Subtract Even

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
//Spy Detected!

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
//Maximum GCD
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
