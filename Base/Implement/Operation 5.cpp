long long x = 0, z = 0, f = 0, ie = -1, io = -1, so = 0, se = 0;
cin >> x;
long long *e = new long long[x];
long long *o = new long long[x];

while (z++ < x)
{
    cin >> f;
    if (f % 2 == 0)
        e[++ie] = f;
    else
    {
        o[++io] = f;
    }
}

z = 0;
if (io > -1)
{
    cout << o[io];
    so++;
    while (io-- > 0)
    {
        cout << " " << o[io];
        so++;
    }
}
z = 0;
if (ie > -1)
{
    if (so > 0)
        cout << " ";
    cout << e[z];
    se++;
    while (z++ < ie)
    {
        cout << " " << e[z];
        se++;
    }
}
z = 0;
cout << endl;
----
    long double l = 0, r = 0, x = 0, y = 0;
cin >> l >> r;
if (l < 1 || r < 1)
    return 0;
x = l * l;
y = 0.5 * r * r;
if (x <= y)
    cout << "YES" << endl;
else
    cout << "NO" << endl;
-----
    int n = 0, x = 0, c = 0, s = 0;
char y[3];

cin >> n;

while (c++ < n) {
    cin >> y;
    s = 0;

    while (s++ < 2) {
        if (y[s - 1] == '+') {
            x++;
            break;
        }

        if (y[s - 1] == '-' || y[s - 1] == '�') {
            x--;
            break;
        }
    }
}

cout << x << endl;
-----
    int x;
	cout<<"enter no. of programs\n";
	cin>>x;
	float *arr=new float [x];
	float *bur=new float [x];
	float *burw=new float [x];
	bool *boo=new bool [x];
	float *fin=new float [x];
	int z=0;
	while(z++<x)
	{
		cout<<"enter the arrival time of p"<<z<<endl;
		cin>>arr[z-1];
		cout<<"and its burst time\n";
		cin>>bur[z-1];
	}
	cout<<"enter the fixed time:\n";
	int q=0;
	cin>>q;
	z=0;
	float sum=0;
	while(z++<x)
	{
		sum+=bur[z-1];
		burw[z-1]=bur[z-1];
		fin[z-1]=-1;
	}
	int c=0,min=0,mini=0;
	while(c<sum)
	{
		z=0;
		while(z++<x)
		{
			if(arr[z-1]<=c&&fin[z-1]==-1)
			{
				boo[z-1]==true;
			}
		}
		min=-1,z=0;
		while(z++<x)
		{
			if(min>bur[z-1]&&boo[z-1]==true)
			{
				mini=z-1;
				min=bur[z-1];
			}
		}
		if(bur[mini]>=q)
		{
			burw[mini]-=q;
		}
		else
		{
			burw[mini]=0;
		}
		if(bur[mini]==0)
		{
			fin[mini]=c;
		}
	}
	z=0;
	while(z++<x)
	{
		float fff=fin[z-1]-arr[z-1];
		cout<<"T(a) of p"<<z-1<<" = "<<fff;
		cout<<"\nT(w) of p"<<z-1<<" = "<<fff-bur[z-1]<<endl;
	}
--------
long long n,y,max=1,c=0;
    cin>>n>>y;
    long long x=n;
    while(x<=y)
    {
    	n=x;
    	c=1;
    	 while(n>1)
    	    {

    	    	if(n%2!=0) n=3*n+1;
    	    	else n=n/2;
    	    	c++;
    	    }
    	 if(c>max) max=c;
    	 x++;
    }
    cout<<max;
--------
int x,z=1,h=0,l=0,y,f;
    cin>>x;
    cin>>y;
    while(z++<x)
    {
    	cin>>f;
    	if(f>y) h++;
    	if(f<y) l++;
    	y=f;
    }
    cout<<h<<" "<<l;
--------

