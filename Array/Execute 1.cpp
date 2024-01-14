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
