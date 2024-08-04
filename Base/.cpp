//calculates the minimum cost of traveling a given number of units, 
//given the cost of single tickets and special tickets. The special tickets cover 
//multiple units at a potentially reduced cost
void CountTravelCost(){
//n ->Total units of travel required. m -> Number of units covered by the special ticket.
//a is the Cost of a single ticket. and b is the Cost of the special ticket.
    int n, m, a, b;
    cout << n << m << a << b;
    int price = 0;
    // Cost of 'm' single tickets
    int CostSingleTicket = a * m;
    if(CostSingleTicket <= b)
        price = a * n;
    else {
        int SpecialTickets = n/m
        int RemainingUnit = n % m;

        int x = (SpecialTickets + 1) * b;
        int y = SpecialTickets * b + RemainingUnit * a;
        price = min(x, y);
    }
    cout << price;
}
//check if there is at least one item where the price does not match the quality. 
void checkQuality(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int price, quality;
        cin >> price >> quality;
        if(price != quality)
            cout << "Happy";
        return 0;
    }
    cout << "Poor";
    return 0;
}
void verify(){
    int n, k; cin >> n >> k;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        if(k >= y){
            if(x > maxi)
                maxi = x;
        }
        else {
            if((x - (y - k)) > maxi)
                maxi = x - (y - k);
        }
    }
    cout << maxi;
}
//output the position of the unique number (either odd or even) in a sequence of integers. 
void FindUnique(){
    int n, x;
    cin >> n;
    int even = 0, odd = 0, pos1 = -1, pos2 = -1;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x % 2 == 0){
            even++; pos1 = i + 1;
        }
        else {
            odd++; pos2 = i + 2;
        }
    }
    (odd == 1) ? cout << pos2 :cout << cout << pos1;
}
void SnakePattern(){
    int row, col; cin >> row >> col;
    for(int i = 0; i < row; i++){
        if(i % 2 == 0){
            for(int j = 0; j < col; j++)
                cout << "#";
        }
        else {
            if((i / 2) % 2 == 0){
                for(int j = 0; j < col - 1; j++)
                    cout << ".";
                cout << "#";
            }
            else {
                cout << "#";
                for(int j = 1; j < col; j++)
                    cout << ".";
            }
        }
        cout << "\n";
    }
}
//Count How much Five will be exits
void CountFive(){
    int n, x = 0, y = 0, a;
    cin >> n;
    while(n--){
        cin >> a;
        (a == 5) ? x++ : y++;
    }
    if( y == 0)
        cout << -1 << "\n";
    else{
        if(x < 9)
            cout << 0 << "\n";
        else{
            int Five = (x / 9) *9;
            for(int i = 0; i < Five; i++)
                cout << 5 << " ";
            for(int i = 0; i < y; i++)
                cout << 0 << " ";
            cout << "\n";
        }
    }
}
//Find Integer between range
void FindInteger(){
    int n, m; cin >> n >> m;
    int cnt = (n + 1) / 2;
    int ans = ((cnt + m - 1) / m)*m;
    if(ans > n)
        cout << - 1;
    cout << ans;
}
//determines and outputs the coordinates of the other two points required to complete a square. 
void CompleteSquare(){
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    if(abs(x1 - x2) == abs(y1 - y2))
        cout << x1 << " " << x2 << " " << y1 << " " << y2;
    //if these points are horizontal
    else if(x1 == x2){
        int length = abs(y2 - y1);
        cout << x1 + length << " " << y1 << " " << x1 + length << " " << y2;
    }
    else if(y1 == y2){
        int length = abs(x2 - x1);
        cout << x1 << " " << y1 + length << " " << x2 << " " << y2 + length;
    }
    else 
        cout << -1;
}
void Calculate(){
    int sum; cin >> sum;
    if(sum >= 0)
        cout << sum;
    else {
        int a = -sum / 10 % 10;
        int b = sum % 10;
        cout << (a > b? sum/100 * 10 - b: sum / 10);
    }
}
//determine the maximum value based on certain conditions applied to a list of pairs of integers
void FindMax(){
    int a, b, maxi = -1;
    int n, x; cin >> n >> x;
    while(n--){
        cin >> a >> b;
        if(a < x){
            if(b !=0)
                maxi = max(maxi, 100 - b);
            else
                maxi = max(maxi, 0);
        }
        else if(a == x){
            if(b == 0)
                maxi = max(maxi, 0);
        }
    }
    cout << maxi;
}
void verify(){
    int a, b, maxi = -1;
    int n, x; cin >> n >> x;
    while(n--){
        cin >> a >> b;
        if(a < x){
            if(b !=0)
                maxi = max(maxi, 100 - b);
            else
                maxi = max(maxi, 0);
        }
        else if(a == x){
            if(b == 0)
                maxi = max(maxi, 0);
        }
    }
    cout << maxi;
}
void Verify(){
    int a,  b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    b *= c; b /= g;
    d *= e; f /= h;
    cout << min({b, f, d})/ a;
}
//you need to divide a resource c into chunks of size equal to the LCM of two other quantities a & b
void Verify(){
    int a, b, c;
    cin >> a >> b >> c;
    b = (a * b)/__gcd(a, b);//LCM
    cout << c/b
}
//purpose of the program is to count how many of the n integers are greater than the threshold value j. 
void Greater(){
    int n, j; cin >> n >> j;
    int x = n;
    while(n--){
        int i; cin >> i;
        if(i > j)
            x++;
    }
    cout << x;
}

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
