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
#include <iostream>
#include <math.h>
#include <vector>
#include <cmath>

using namespace std;
int multiply(int res[],int res_size);
void power2 (int n){
    int res[500],res_size = 1,s = 0;
    res[0] = 1;
    for (int i = 1;i<=n;i++){
        res_size =  multiply(res,res_size);
    }
    for (int i = res_size-1;i>=0;i--){
        cout<<res[i];
        s += res[i];
    }
    cout<<endl<<s;
}
int multiply(int res[],int res_size){
    int carry = 0;
    for (int i = 0;i<res_size;i++){
        int prod = res[i]*2 + carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        res[res_size] = carry%10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}
int sum (int fn_1[],int fn_2[],int res_size){

}
int d1[10]={0,3,3,5,4,4,3,5,5,4};
int d2[10]={3,6,6,8,8,7,7,9,8,8};
int d3[10]={0,3,6,6,6,5,5,7,6,6};
int d4[10]={0,10,10,12,11,11,10,12,12,11};
int letter_count(int n){
    if (n%100==10&&n>100)
        return (d4[n/100]+3+3);
    if (n<=9)
        return d1[n%10];
    if (n>9&&n<=19)
        return d2[n%10];
    if (n>19&&n<=99)
        return (d1[n%10]+d3[n/10]);
    if (n%100==0)
        return d4[n/100];
    if (n%100>10&&n%100<20)
        return (d4[n/100]+3+d2[n%10]);
    if (n>100 && n%100>0&&n%100<10)
        return (d4[n/100]+3+ d1[n%10]);
    if (n%100>19&& n%100<=99)
        return (d4[n/100]+3+d3[(n%100)/10] + d1[n%10]);

}
int main() {

    int n;
    string word;
    cin>>n;
    for (int i = 0;i<n;i++){
        cin>>word;
        if (word.size()>10){
            cout<<word[0]<<word.size()-2<<word[word.size()-1]<<endl;
        }else{cout<<word<<endl;}
    }

}
int main()
{
    bool mark[1000000];
    int primes[100000],t=1;
    mark [0] = 0,mark[1] = 0;
    for (int i = 2;i<1000000;i++){
        mark[i] = 1;
    }
    for (int i =0;i<1000000;i++){
        if (mark[i] == 1){
            primes[t] = i;
            t++;
            for (int j = i;j<=1000000;j+=i)
                mark[j] = 0;

        }
    }
    int s = 0;
    for (int i = 1;i<=24;i++){
        cout<<primes[i]<<endl;
        s+=primes[i];
    }
    cout<<s;

}
int main()
{
    
}
