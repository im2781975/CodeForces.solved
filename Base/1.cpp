int Factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}
main(){
    int n; cin >> n;
    cout << Factorial(n);
}

void CountDigit(){
    int n; cin >> n;
    int cnt = 0;
    while(n !='\0'){
        n /= 10; cnt++;
    }
    cout << cnt;
}

void Lucky(){
    int x; cin >> x;
    int arr[]{4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
    bool flag = false;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n && arr[i] <= x; i++){
        if(x % arr[i] == 0){
            flag = true;
            break;
        }
    }
    (flag)?cout << "Yes":cout << "No";
}

void Reverse(){
    int n; cin >> n;
    int rev = 0;
    while(n!='\0'){
        rev = rev * 10 + (n% 10);
        n/= 10;
    }
    cout << rev;
}

//Count 1's in Binary
int Binary(int x) {
    int cnt = 0;
    while(x > 0){
        if(x % 2 == 1)
            cnt++;
        x /= 2;
    }
    return cnt;
}
int hex(int n){
    int x = 0, cnt = 0;
    while(n > 0){
        x += (n % 10) * pow(16 ,  cnt++);
        n /= 10;
    }
    return Binary(x);
}
main(){
    int n; cin >> n;
    cout << "Total 1s is: " << hex(n);
}

//determine maximum, minimum & subarray sum
void SubArraySum(){
    int n; cin >> n;
    int arr[n + 2];
    int i = 1;
    while(i++ < n)
        cin >> arr[i -1];
    int query; cin >> query;
    while(query--){
        int x, y, sum = 0;
        cin >> x >> y;
        if(x > y)
            swap(x, y);
        int first = x - 1;
        int last = y - 1;
        int maxi = first, mini = first;
        for(int i = first; i <= last; i++) {
            sum += arr[i];
            if(arr[i] > arr[maxi])
                maxi = i;
            if(arr[i] < arr[mini])
                mini = i;
        }
        cout << arr[maxi] <<  " " << arr[mini] << " " << sum;
    }
}

// Convert Binary To Decimal
void BinaryToDeciaml(){
    int n, sum = 0, i = 0;
    cin >> n;
    while(n > 0) {
        sum += (n % 10) * pow(2, i++);
        n /= 10;
    }
    cout << sum;
}

//transform a given string into a palindrome with the minimum number of
//character changes & then output the number of changes
void Transform(){
    int n; cin >> n;
    char *arr = new char[n + 1];
    cin >> arr;
    int i = 0, cnt = 0, last = n -1;
    while(i++ < n /2){
        if(arr[i] != arr[last]){
            cnt++;
            if(arr[i] < arr[last])
                arr[last] = arr[i];
            else
                arr[i] = arr[last];
        }
        i++; last--;
    }
    cout << cnt <<  " " << arr;
    delete []arr;
}

//Subtract n among a & b.in which player n will be zero,He will 
//be win.If neg another player will be win
void Distribute(){
    int a, b, n;
    cin >> a >> b >> n;
    while(true) {
        if(n  >= __gcd(a, n))
            n -= __gcd(a, n);
        else {
            cout << "Second Player wins";
            break;
        }
        if(n == 0) {
            cout << "First Player wins";
            break;
        }
        if(n >= __gcd(b, n))
            n -= __gcd(b, n);
        else {
            cout << "First Player win";
            break;
        }
        if(n == 0) {
            cout << "Second Player Wins";
            break;
        }
    }
    return 0;
}

// Determine x can be written as the sum of two even numbers.
//If such a pair is found,print 'Yes' else 'No'.
void IsEven(){
    int x; cin >> x;
    for(int i = 2; i < x; i+= 2){
        if((x - i) % 2 == 0){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}

//Simulate two scheduling algorithms for process management in operating systems
//: First-Come, First-Served (FCFS) and Shortest Job First (SJF) non-preemptive.
void Simulate() {
    int num;
    // Represent the num of programs
    cin >> num;
    if (num <= 0) {
        cout << "Should be Greater than zero" << endl;
        return 1;
    }
    float *arrTime = new float[num];
    float *executeTime = new float[num];
    int i = 0;
    while (i < num) {
        cout << "\nArrival & Exit of programme " << i + 1 << " is: ";
        cin >> arrTime[i];
        cin >> executeTime[i];
        //execute time represent the finishing time while the code finished
        i++;
    }
    // FCFS -> First Come First Served
    // SJF -> Shortest Job First (non-preemptive)
    cout << "Enter 1 for FCFS or 2 for SJF-non preemptive: ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        float curTime = 0, turnTime = 0, waitTime = 0;
        float totalTurnTime = 0, totalWaitTime = 0;
        //curTime ->when the code finished for execution
        //arrTime ->when the code start for execution
        // TurnTime is the total time taken from arrival to completion.
        // WaitTime (T(w)) is the total time a program spends waiting in the ready queue.
        for (i = 0; i < num; i++) {
            if (curTime < arrTime[i]) {
                curTime = arrTime[i]; // Process starts at the arrival time if the CPU is idle
            }
            curTime += executeTime[i];
            turnTime = curTime - arrTime[i];
            waitTime = turnTime - executeTime[i];
            cout << "The Turnaround time (T(a)) of program " << i + 1 << " = " << turnTime << endl;
            cout << "The Waiting time (T(w)) of program " << i + 1 << " = " << waitTime << endl;
            totalTurnTime += turnTime;
            totalWaitTime += waitTime;
        }
        cout << "Average Turnaround time (T(a)) = " << totalTurnTime / num << endl;
        cout << "Average Waiting time (T(w)) = " << totalWaitTime / num << endl;
    } else if (choice == 2) {
        int curTime = 0;
        // store the time at which each process finishes execution. The index of the array corresponds to the process number.
        float *completionTime = new float[num];
        //array of booleans to keep track of whether each process has been processed or not.initially declared false
        bool *processed = new bool[num]();
        for (int i = 0; i < num; ++i) {
            int minIdx = -1;
            for (int j = 0; j < num; ++j) {
                if (!processed[j] && arrTime[j] <= curTime && 
                   (minIdx == -1 || executeTime[j] < executeTime[minIdx])) {
                    minIdx = j;
                }
            }
            if (minIdx != -1) {
                processed[minIdx] = true;
                curTime += executeTime[minIdx];
                completionTime[minIdx] = curTime;
            } else {
                // If no process is ready to execute, advance the current time to the next arrival time
                curTime++;
                i--; // Retry current iteration as no process was executed
            }
        }
        float totalTurnTime = 0, totalWaitTime = 0;
        for (int i = 0; i < num; ++i) {
            float turnTime = completionTime[i] - arrTime[i];
            float waitTime = turnTime - executeTime[i];
            cout << "The Turnaround time (T(a)) of program " << i + 1 << " = " << turnTime << endl;
            cout << "The Waiting time (T(w)) of program " << i + 1 << " = " << waitTime << endl;
            totalTurnTime += turnTime;
            totalWaitTime += waitTime;
        }
        cout << "Average Turnaround time (T(a)) = " << totalTurnTime / num << endl;
        cout << "Average Waiting time (T(w)) = " << totalWaitTime / num << endl;
        delete[] completionTime;
        delete[] processed;
    } else
        cout << "Invalid Choice";
    delete[] arrTime;
    delete[] executeTime;
    return 0;
}
