#include<iostream>
using namespace std;

struct edge {
    int x, y;
} edges[110];

int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> edges[i].x >> edges[i].y;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int max_y = 0, max_x = 0;
        for (int j = 0; j < n; j++) {
            if (edges[i].x == edges[j].x) 
                max_y = max(max_y, edges[j].y);
            if (edges[i].y == edges[j].y) 
                max_x = max(max_x, edges[j].x);
        }
        ans = max(ans, (max_x - edges[i].x) * (max_y - edges[i].y));
    }
    cout << ans;
    return 0;
}

