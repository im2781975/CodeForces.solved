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
