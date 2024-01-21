    vector<vector<int> > pos(200001,vector<int> (2));

 		int n,m;
 		cin>>n>>m;
 		vector<int> a(n);
 		vector<int> c(n,0);
 		vector<int> b(n+m+1,0);
 		for(int i=0;i<n;i++) cin>>a[i];
 		for(int i=1;i<=m;i++){
 			int x,y;
 			cin>>x>>y;
 			x--;
 			b[a[x]]+=i-c[x];
 			c[x]=i;
 			a[x]=y;
 		}
 		m++;
 		for(int i=0;i<n;i++) b[a[i]]+=m-c[i];
 		int ans=0;
 		for(int i=0;i<sz(b);i++){
 			ans+=((b[i]*(m-b[i]))+((b[i]*(b[i]-1))/2));
 		}
 		cout<<ans<<endl;
 	}
-----
int n,k;
	    cin>>n>>k;
	    vector<ll>vec(n);
	    for(ll i=0;i<n;i++)
	        cin >> vec[i];
	        
	    sort(all(vec));
	    reverse(all(vec));
	    ll val=vec[k-1];
	   ll i=0;
	   ll cnt=0;
	   if(val==0)
	   {
	       ll cap=0;
	       for(ll i=0;i<n;i++)
	       {
	           if(vec[i]>0)
	           cap++;
	       }
	       cout << cap << endl;
	   }
	   else{
	   while(vec[i]>=val &&  i<n){
	       i++;
	       cnt++;
	   }
	    cout << cnt << endl;
	   }
	    
	} 
    return 0;
}
