class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[0]<target)
            {
            	if(nums[0]<target&&target<nums[mid])
				r=mid-1;
				else l=mid+1;
            }
            else
            {
            	if(nums[mid]>target&&taregt<=nums[n-1])
            		l=mid+1;
            	else r=mid-1;
            }
        }
        return -1;
    }
};
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
