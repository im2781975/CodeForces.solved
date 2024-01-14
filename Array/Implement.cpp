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
int x;
      cin>>x;
      char y[1000][3];
      char *z=new char[x];
      int f=0,gr=0,pi=0,green=0,pink=0;
      for(int s=0;s<x;s++)
      {
          for(int ss=0;ss<3;ss++)
              cin>>y[s][ss];
      }
      for(int r=0;r<x;r++)
      {
          int g=0,rr=0;
          if(pi==5)
          {
              z[f++]='g';
              r++;
              green++;
              pi=0;
          }
          if(gr==5)
                  {
                      z[f++]='p';
                      r++;
                      pink++;
                      gr=0;
                  }
          for(int c=0;c<3;c++)
          {
              if(y[r][c]=='G')
              {
                  g++;
                  break;
              }
              if(y[r][c]=='B')
                          {
                              rr++;
                          }
          }
          if(g==1)
          {
              z[f++]='g';
              gr++;
              green++;
          }
          if(rr==3){
              z[f++]='p';
              pi++;
              pink++;
          }
      }
      gr=0;
      cout<<pink*3<<" "<<green*3<<endl;
      while(gr++<x)
      {
          if(z[gr-1]=='g') cout<<"Green"<<endl;
          if(z[gr-1]=='p') cout<<"Pink"<<endl;
      }
