//calculate the sum of 5 integers , and determine if the sum can be evenly divided by 5
void DivisibleFive(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    a += b + c + d + e;
    (a % 5 == 0 && a / 5 != 0) ?cout << a / 5:cout << -1;
}
void VerifyCond(){
    int l, r, maxi, initial;
    int cnt = 0;
    cin >> maxi >> initial >> l >> r;
    if(l != 1)
        cnt++;
    if(r != maxi)
        cnt++;
    if(l != 1 && r != maxi)
        cnt += abs(l - r);
    if(l == 1 && r != maxi)
        cnt += abs(r - initial);
    else if(l != 1 && r == maxi)
        cnt += abs(l - initial);
    else if(l != 1 && r!= maxi)
        cnt += min(abs(initial - l), abs(initial - r));
    cout << cnt;
}
void Condition(){
    int maxi, adjust, curr;
    cin >> maxi >> adjust >> curr;
    while(adjust != 0){
        if(adjust < 0){
            adjust += 1;
            curr -= 1;
            if(curr == 0)
                curr = maxi;
        }
        else {
            adjust -= 1;
            curr += 1;
            if(curr > maxi)
                curr = 1;
        }
    }
    cout << curr << "\n";
}
//determine whether it is possible to perform a series of jumps between two integers
//a and b, using a fixed step size c, such that the total number of jumps is even.
void CountJump(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int j = abs(a - b);
    if(j % c != 0){
        cout << "No";
        continue;
    }
    j /= c;
    if(j % 2 == 0)
        cout << "Yes";
    else
        cout << "No";
}
//purpose of this program is to simply compare two numbers and output which one is larger, 
void CompareBetween(){
    int x = 0, y = 0;
    int a, b; cin >> a >> b;
    (a > b) ? x++: y++;
    if(x > y) cout << "A";
    else if(y > x) cout << "B";
    else
        cout << "Equal";
}
//decompose a given integer a into the smallest number of parts such that each part 
//is either the integer 2 or 3. It then prints the number of parts followed by the actual parts themselves
void divideIntoParts(){
    int n, j; 
    cin >> n;
    if(n % 2 == 0){
        cout << n / 2;
        j = n / 2;
        while(j--){
            cout << 2 << " ";
        }
    }
    else {
        cout << (a - 3)/2 + 1;
        j = (a - 3)/2;
        cout << 3 ;
        while(j--){
            cout << 2 << " ";
        }
    }
}
//How much steps we need for being two variable same
void Same(){
    int x, y;
    cin >> x >> y;
    if(x == y)
        cout << 0;
    else if(x > y)
        cout << x - y;
    else {
        int Operation = 0;
        while(y > x){
            if(y % 2 == 0)
                y /= 2;
            else
                y++;
            Operation++;
        }
        Operation += x - y;
        cout << Operation;
    }
}
void Compare(){
    int x, y;
    cin >> x >> y;
    if(y == 1){
        if(x == 0)
            cout << "Yes";
        else
            cout << "No";
        return 0;
    }
    y -= 1;
    x -= y;
    (x >= 0 && y >= 0 && x % 2 == 0) ? cout << "Yes": cout << "No";
}
//compute and print the minimum value from a set of given expressions 
void Calculate(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << min({a + b + c, 2 *(a + b), 2 * (b + c), 2 * (c + a)});
}
//compare two calculated values to determine which of two options is better, or if they are equivalent. 
void Compare(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    b *= a; b += 2 * d;
    c *= a; c += 2 * e;
    if(b > c)
        cout << "second";
    else if(c > b)
        cout << "First";
    else
        cout << "Friendship";
}
