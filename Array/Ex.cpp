int si = 0 , co = 0 , temp = 0 ;
 cin >> si ;
 int host [ si ] , guest [ si ] ;

  for(int  i = 0 ; i < si ; i++ )
      cin >> host [ i ] >> guest [ i ] ;


    for(int  i = 0 ; i < si ; i++ ){
        temp = guest [ i ] ;
        for(int j = 0 ; j < si ; j++)
        {

                if( temp == host [j] )
                    co += 1 ;
        }
    }


 cout <<co ;
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
void quicksort(int *mas, int first, int last)
	{
		int mid, count;
		int f = first, l = last;
		mid = mas[(f + l) / 2]; //���������� �������� ��������
		do
		{
			while (mas[f] < mid) f++;
			while (mas[l] > mid) l--;
			if (f <= l) //������������ ���������
			{
				count = mas[f];
				mas[f] = mas[l];
				mas[l] = count;
				f++;
				l--;
			}
		} while (f < l);
		if (first < l) quicksort(mas, first, l);
		if (f < last) quicksort(mas, f, last);
	}

	

	void sorte(int **arr, int size)
	{
		int temp;
		int temp2;
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (arr[j][0] > arr[j + 1][0]) {
					// ������ �������� �������
					temp = arr[j][0];
					temp2 = arr[j][1];
					arr[j][0] = arr[j + 1][0];
					arr[j][1] = arr[j + 1][1];
					arr[j + 1][0] = temp;
					arr[j + 1][1] = temp2;
				}
			}
		}
	}

	bool IsSortedArr(int arr[], int right)
	{
		int temp;
		for (int i = 0; i < right; i++) {
			for (int j = 0; j < right - i; j++) {
				if (arr[j] > arr[j + 1]) {
					return false;
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		return true;
	}

	
	bool arIsEmpty(int arr[], int n)
	{ 
		int a = arr[0];
		for (int i = 1; i < n; i++)
			if (arr[i] != a)
				return false;
		return true;
	}
void Swap(int arr[], int right, int left)
	{
		if (left != right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
bool IsZero(int arr[], int n)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] != 0)
				return false;
		}
		return true;
	}

const int n=1e7+10;
bool is_prime[n];
int prime[n/10],phi[n],from[n];
void init() {
	fill(&is_prime[0],&is_prime[0]+n,1);
	int cnt = 0;
	is_prime[1] = 0;
	phi[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) 
			prime[++cnt] = i,phi[i] = i - 1;
		for (int j = 1; j <= cnt && i * prime[j] <= n; j++){
			from[i*prime[j]]=prime[j];
			is_prime[i * prime[j]] = 0;
			if (i % prime[j])
				phi[i * prime[j]] = phi[i] * phi[prime[j]];
			else {
				phi[i * prime[j]] = phi[i] * prime[j];
				break;
			}
		}
	}
}
void change(Complex y[], int len) {
	int i, j, k;
	for (int i = 1, j = len / 2; i < len - 1; i++) {
		if (i < j) std::swap(y[i], y[j]);
		k = len / 2;
		while (j >= k) {
			j = j - k;
			k = k / 2;
		}

		if (j < k) j +
-----
void fft(Complex y[], int len, int on) {
	change(y, len);
	for (int h = 2; h <= len; h <<= 1) {
		Complex wn(cos(2 * PI / h), sin(on * 2 * PI / h));
		for (int j = 0; j < len; j += h) {
			Complex w(1, 0);
			for (int k = j; k < j + h / 2; k++) {
				Complex u = y[k];
				Complex t = w * y[k + h / 2];
				y[k] = u + t;
				y[k + h / 2] = u - t;
				w = w * wn;
			}
		}
	}
	if (on == -1) {
		for (int i = 0; i < len; i++) {
			y[i].x /= len;
		}
	}
}
ll r[N],a[N],b[N],c[N];
void ntt(ll *x, ll lim, ll opt) {
	ll i, j, k, m, gn, g, tmp;
	for (i = 0; i < lim; ++i)
		if (r[i] < i) swap(x[i], x[r[i]]);
	for (m = 2; m <= lim; m <<= 1) {
	    k = m >> 1;
		gn = qpow(3, (P - 1) / m);
		for (i = 0; i < lim; i += m) {
			g = 1;
			for (j = 0; j < k; ++j, g = 1ll * g * gn % P) {
				tmp = 1ll * x[i + j + k] * g % P;
				x[i + j + k] = (x[i + j] - tmp + P) % P;
				x[i + j] = (x[i + j] + tmp) % P;
			}
		}
	}
	if (opt == -1) {
		reverse(x + 1, x + lim);
		ll inv = qpow(lim, P - 2);
		for (i = 0; i < lim; ++i) x[i] = 1ll * x[i] * inv % P;
	}
}
