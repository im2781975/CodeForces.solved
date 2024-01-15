#include<bits/stdc++.h>
using namespace std;
void TrappedRainWater()
{
    //trapping rainwater using an array representing the heights of walls.
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = height.size();
    int left = 0, right = n - 1;
    int res = 0;
    int leftmax = 0, rightmax = 0;

    while (left <= right) {
        if (height[left] <= height[right]) {
            if (height[left] >= leftmax) {
                leftmax = height[left];
            } else {
                res += leftmax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightmax) {
                rightmax = height[right];
            } else {
                res += rightmax - height[right];
            }
            right--;
        }
    }
    cout<< res;
}
