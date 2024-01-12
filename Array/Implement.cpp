#include <iostream>
using namespace std;
void div3_b() {
    int n, f = 0;
    cin >> n;
    char arr[3][3];

    for (int i = 0; i < n; i++) {
        // Input
        for (int j = 0; j < 3; j++) {
            for (int z = 0; z < 3; z++) {
                cin >> arr[j][z];
            }
        }

        // Check diagonals
        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '.') {
            f = 1;
            cout << arr[0][0] << "\n";
        } else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '.') {
            f = 1;
            cout << arr[0][2] << "\n";
        } else {
            // Check rows and columns
            for (int z = 0; z < 3; z++) {
                if (arr[z][0] == arr[z][1] && arr[z][2] == arr[z][1] && arr[z][1] != '.') {
                    f = 1;
                    cout << arr[z][0] << "\n";
                    break;
                }
                if (arr[0][z] == arr[1][z] && arr[2][z] == arr[0][z] && arr[0][z] != '.') {
                    f = 1;
                    cout << arr[0][z] << "\n";
                    break;
                }
            }
        }
        // Draw if no winner
        if (f == 0) {
            cout << "DRAW" << "\n";
        }
    }
}
void s()
{
  int f = 0;
  char arr[8][8];
  
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> arr[i][j];
    }
  }
  
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (arr[i][7] == 'R') {
        f = i;
      }
    }
  }
  
  if (f != 0 && arr[f][7] == 'R') {
    cout << arr[f][7] << "\n";
  } else {
    cout << 'B' << "\n";
  }
}
void solve_wheelBag() {
  int n;
  cin >> n;
  int wheel[100];
  
  for (int i = 0; i < n; i++) {
    cin >> wheel[i];
  }
  
  for (int i = 0; i < n; i++) {
    int count;
    cin >> count;
    
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
      cout << wheel[i] << " ";
  }
  
  cout << "\n";
}

