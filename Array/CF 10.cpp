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
