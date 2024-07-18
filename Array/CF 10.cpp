#include<iostream>
using namespace std;
//finds the minimum element in an input array, moves it to the front of the array & print
void FindMinimum(){
    int n;
    while(cin >> n){
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int minIdx = 0, num = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] < num){
                minIdx = i;
                num = arr[i];
            }
        }
        swap(arr[minIdx], arr[0]);
        cout << "Minimum Element is: " << arr[0] << "\n";
        for(int i = 1; i < n; i++)
            cout << arr[i] << " ";
    }
}

//determine how many cells in a large grid fall within a certain 
//Manhattan distance from multiple specified points. 
const int N = 10000;
int arr[N][N];
void CountManhatten(){
    int cnt = 0;
    int x, y;
    // Set the values for the first point (2020, 2020)
    x = 2020; y = 2020;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(abs(i - x) + abs(y - j) <= 2020)
                arr[i][j] = 1;
        }
    }
    // Set the values for the 2nd point (4040, 2031)
    x = 4040; y = 2031;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(abs(i - x) + abs(y - j) <= 2020)
                arr[i][j] = 1;
        }
    }
    x = 2031; y = 2034;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(abs(i - x) + abs(y - j) <= 2020)
                arr[i][j] = 1;
        }
    }
    x = 4020; y = 4020;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(abs(i - x) + abs(y - j) <= 2020)
                arr[i][j] = 1;
        }
    }
    for(int i =0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i][j] == 1)
                cnt++;
        }
    }
    cout << cnt;
}

//0/1 knapsack
const int N = 1010;
int w, n;
int weight[N], item[N];
int dp[N][N];
void Knapsack(){
    cin >> w >> n;
    for(int i = 1; i <= n; i++)
        cin >> weight[i] << item[i];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= w; j++){
            dp[i][j] = dp[i - 1][j];
            if(j >= weight[j])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i] + item[i]]);
        }
    }
    cout << dp[n][w];
}
