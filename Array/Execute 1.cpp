#include <iostream>
using namespace std;
void Tic_tac_toe(){
    int n, flag= 0;
    //Flag to determine if there is a winner (1) or not (0).
    cout<<"Enter the number of turns: \n";
    cin >> n;
    char arr[3][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) 
                cin >> arr[j][k];
        }
        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '.') {
            flag= 1;
            cout << arr[0][0] << "\n";
        } else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '.') {
            flag= 1;
            cout << arr[0][2] << "\n";
        } else {
            // Check rows and columns
            for (int z = 0; z < 3; z++) {
                if (arr[z][0] == arr[z][1] && arr[z][2] == arr[z][1] && arr[z][1] != '.') {
                    flag= 1;
                    cout << arr[z][0] << "\n";
                    break;
                }
                if (arr[0][z] == arr[1][z] && arr[2][z] == arr[0][z] && arr[0][z] != '.') {
                    flag= 1;
                    cout << arr[0][z] << "\n";
                    break;
                }
            }
        }
        // Draw if no winner
        if (f == 0) {
            cout << "DRAW\n";
        }
    }
}
void FixedChar()
{
    int f = 0;
    char arr[8][8];
  
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][7] == 'R')
                f = i;
        }
    }
    if (f != 0 && arr[f][7] == 'R')
        cout << arr[f][7] ;
    else 
        cout << 'B' ;
}
void solve_wheelBag() {
    int n;
    cin >> n;
    //number of wheels
    int wheel[100];
  
    for (int i = 0; i < n; i++)
        cin >> wheel[i];
        //initial positions of wheels
    for (int i = 0; i < n; i++) {
        int count;
        cin >> count;
        //count of moves for the current wheel
    
        for (int j = 0; j < count; j++) {
            char move;
            cin >> move;
      
            if (move == 'U')
                wheel[i]--;
            else
                wheel[i]++;
        }
        if (wheel[i] < 0)
            wheel[i] += 10;
      
        if (wheel[i] >= 10)
            cout << wheel[i] % 10 << " ";
        else
            cout<< wheel[i] << " ";
    }
    cout << "\n";
}
void game() {
    int n;
    cin >> n;
    char arr[1000][3];
    char* ptr = new char[n];
    int flag = 0, gr = 0, pi = 0, green = 0, pink = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < n; i++) {
        int g = 0, rr = 0;
        if (pi == 5) {
            ptr[flag++] = 'g';
            i++;
            green++;
            pi = 0;
        }
        if (gr == 5) {
            ptr[flag++] = 'p';
            i++;
            pink++;
            gr = 0;
        }
        for (int c = 0; c < 3; c++) {
            if (arr[i][c] == 'G') {
                g++;
                break;
            }
            if (arr[i][c] == 'B') {
                rr++;
            }
        }
        if (g == 1) {
            ptr[flag++] = 'g';
            gr++;
            green++;
        }
        if (rr == 3) {
            ptr[flag++] = 'p';
            pi++;
            pink++;
        }
    }

    gr = 0;
    cout << pink * 3 << " " << green * 3 << endl;

    while (gr++ < n) {
        if (ptr[gr - 1] == 'g')
            cout << "Green" << "\n";
        if (ptr[gr - 1] == 'p')
            cout << "Pink" << endl;
    }
    delete[] ptr;
    return 0;
}
void MaxIdx()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
        
    int idx=0;
    bool check=true;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
            check=false;
        
        if(arr[i] > arr[idx])
            idx=i;
    }
    if(idx==0)
    {
        while(arr[idx+1]==arr[idx])
        {
            idx++;
        }
    }
    if(check) 
        cout << -1;
    else
        cout << idx;
}
void CompareLength()
{
    //compare between two length
    int n, k;
    cin >>n >>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
    if(n > k)
    {
        cout << "No";
            return 0;
    }
    int count=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[i+1])
            count+=2*arr[i] - arr[i+1];
    }
    if(count +n <=k)
        cout <<"Yes";
    else
        cout <<"No";
}
void CompareLength()
{
    int n, m, cnt=0;
    cin >>n >>m;
    int arr[n];
    if(n > m)
    {
        cout<< "No";
        return 0;
    }
    for(int i=0; i<n; i++)
        cin >>arr[i];
    
    sort(arr, arr+n);
    for(int i= 0; i< n-1; i++ )
    {
        cnt+= max(arr[i], arr[i+1]);
    }
    cnt+= max(arr[0], arr[n-1]);
    cnt+= n;
    cout<< cnt;
    if(cnt > m)
        cout<< "\nYes";
    else
        cout<< "\nNo";
}
