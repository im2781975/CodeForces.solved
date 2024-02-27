void solve()
{
int a[15][15];
    for (int i =0;i<15;i++){
        for (int j= 0;j<15;j++){
                cin>>a[i][j];
        }
    }
    for (int i =0;i<15;i++){
        for (int j = 0;j<15;j++){
                if (a[i][j]!=0)
                    cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
void solve()
{
    unsigned long long int s = a[0][0],maxi = 1,z=0;
    for (int i = 0;i<=1;i++){
        for (int j = i;j<=2;j++){
            if (j>i+1)
                j = 3;
            for (int k = j;k<=3;k++){
                 //cout<<k<<" ";
                if (k>j+1)
                    k = 4;
                for (int l = k;l<=4;l++){
                    if (l>k+1)
                        l = 5;
                    for (int m =  l;m<=5;m++){
                        if (m>l+1)
                            m = 6;
                        for (int n=m;n<=6;n++){
                        if (n>m+1)
                            n=7;
                for (int o = n;o<=7;o++){
                    if (o>n+1)
                        o = 8;
                for (int p = o;p<=8;p++){
                    if (p>o+1)
                        p = 9;
                for (int q = p;q<=9;q++){
                    if (q>p+1)
                        q = 10;
                for (int r = q;r<=10;r++){
                    if (r>q+1)
                        r=11;
                for (int s = r;s<=11;s++){
                    if (s>r+1)
                        s = 12;
                for (int t = s;t<=12;t++){
                    if (t>s+1)
                        t=13;
                for (int u = t;u<=13;u++){
                    if (u>t+1)
                        u=14;
                for (int v = u;v<=14;v++){
                    if (v>u+1)
                        v=15;

                s =a[0][0]+a[1][i]+a[2][j]+a[3][k]+a[4][l]+a[5][m]+a[6][n]+a[7][o]+a[8][p]+a[9][q]+a[10][r]+a[11][s]+a[12][t]+a[13][u]+a[14][v];
                 if (s>maxi)
                        maxi = s;
                            z++;
                if (z>40000)
                {
                    cout<<maxi<<endl;
                    break;
                }
                //cout<<t<<endl;
                cout<<z<<"-"<<s<<endl;
                s = 0;
            }
            }
        }
        }
    }
    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<maxi;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
bool plin(int index)
{
    ll arr[N];
    int n;
    if(index == n)
    {
        return 1;
    }
    return (arr[index] == arr[n - index -1]) && plin(index + 1);
 
}
