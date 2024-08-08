void merge(int left, int right, int* array, int n) {

    int mid;

    if(left < right) {

        mid = (left + right) / 2;
        merge(left, mid, array, n);
        merge(mid + 1, right, array, n);
        mergeSort(left, mid, right, array, n);

    }
}

int main() {

    int devices, sockets, supply;

    scanf("%d %d %d", &supply, &devices, &sockets);
    int array[supply];

    for(int i = 0; i < supply; i++)
        scanf("%d", &array[i]);

    merge(0, supply - 1, array, supply);

    if(devices <= sockets)
        printf("0");
    else {

        int i = 0;
        while(sockets < devices && i < supply) {

            sockets += array[i] - 1;
            i++;

        }

        if(i != supply)
            printf("%d", i);
        else if(sockets >= devices)
            printf("%d", i);
        else
            printf("-1");
    }
    return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main() {

    int n, k;
    scanf("%d %d", &n, &k);

    int array[n + 1];
    int ct = 0;

    for(int i = 1; i <= n; i++) {

        scanf("%d", &array[i]);

        if(i <= k) {

            if(array[i] > 0)
                ct++;

        } else {

            if(array[i] >= array[k] && array[i] > 0)
                ct++;

        }

    }

    printf("%d", ct);

    return 0;

}
//Beautiful Matrix

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
//Magnets

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
//Games
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
// I_love_%username%
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
//A. Police Recruits
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
