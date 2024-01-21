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
