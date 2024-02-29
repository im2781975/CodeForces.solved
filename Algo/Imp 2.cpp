 int n, m;
 cin>>n>>m;
 vector<int> v(m);
 for (int i = 0; i < m; i++)
 {
      if(i>3){
    swap(v[i], v[i-1]);}
    cin>>v[i];
 }
 cout<<"ME"<<endl;
   deque<int> deque1 {1, 2, 3, 4, 5};

 deque<int> dq;
 string s; cin>>s;

map<int, int> mp;
 int cnt = 1;
 for (int i = 1; i <= n; i++)
 {
     dq.push_back(i);
 }

for(int i = 0; i<v.size(); i++){
     bool og1 = false;

  deque<int>::iterator it;
  it = find(dq.begin(), dq.end(), 
              v[i]);
 deque<int>::iterator itr;
   itr = find(dq.begin(), dq.end(), v[i]);
   if(itr != dq.end())
   {
     cout << "Found";
   }
   else
   {
     cout << "Not Found";
   }

   if(it != dq.end())
  {
      cout<<"MElskjfdslfdsjflsdf";
    it = dq.begin() + *it;
     cout<<"Lolo";
     cout<<"i am it"<<*it<<endl;
      distance(v.begin(), itr);

    dq.erase(distance);
     dq.push_front(v[i]);
    continue;
   }
   else
  {
         dq.push_front(v[i]);
         int temp = dq.back();
    
     mp[temp] = cnt;
     dq.pop_back();
         cnt++;

  }
 int pos = binarySearch(dq, 0, dq.size(), v[i]);
     cout<<"pos is "<<pos<<endl;

if(pos == -1){

     dq.push_front(v[i]);
 }
 else {
     deque<int>::iterator it;
 
    it = dq.begin()+pos;
     dq.erase(it);
     dq.push_front(v[i]);
      dq.erase()
 }
     int temp = dq.back();
    if(mp.find(temp) != mp.end()){
         continue;
    }
    mp[temp] = cnt;
     dq.pop_back();
    
     cnt++;
-----

	int BinarySearch(vector<long long> v, int item)
	{
		int low = 0;
		int high = v.size() - 1;
		int mid = NULL;
		int count = 0;
		while (low <= high)
		{
			mid = (low + high) / 2;

			if (v[mid] == item)
			{
				return mid + 1;
			}
			if (v[mid] > item)
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
		return NULL;
	}

	

	

	

	
	
	

	string s = "987";

	long long counte = 0;
	
	bool b = true;
	vector<bool> used(1000, false);

	void recu(int ind,int length,int maxnum,vector<char> v,char arr[])
	{
		if (ind == length)
		{
			string a = "";
			for (int i = 0; i < length; i++)
				a += v[i];
			if (a == s)
			{
				cout << "Success";
				b = false;
			}
			return;
		}
		for (int i = 0; (i < maxnum)&&b; i++)
		{
			v[ind] = arr[i];
			recu(ind + 1, length, maxnum, v, arr);
		}
	}

	int k;
	vector<char> c;
	int q;
	int p;
	bool be = true;

	void Scobka(int ind, int bal) 
	{
		if (ind == k)
		{
			if (bal == 0)
			{
					string a;
					for (int i = 0; i < k; i++)
						a += c[i];
					cout << a << endl;
			}
			return;
		}
 		c[ind] = '(';
		Scobka(ind + 1, bal + 1);
		if (bal == 0)
			return ;
		c[ind] = ')';
		Scobka(ind + 1, bal - 1);
	}

	
