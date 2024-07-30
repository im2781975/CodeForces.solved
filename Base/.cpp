// Count production Time
void CountTime(){
    int n = 10000, UMP = 600 / 60;
    //n->Initial Quantity, UMP->units per min
    int TotalTime = 0;
    while(n){
        if(n - 600 < 0){
            TotalTime += n / UMP;
            break;
        }
        else {
            n -= 300;
            TotalTime += 30;
        }
    }
    cout << TotalTime;
}

void CntMin(){
    int cnt = 0;
    for(int i = 1922; i <= 2020; i++){
        if((i % 4 == 0 && i % 100 !=0) || (i % 400 == 0))
            cnt += 366;
        else
            cnt += 365;
    }
    cout << cnt * 24 * 60;
}
