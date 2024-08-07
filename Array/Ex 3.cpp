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
