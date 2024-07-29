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
