#include<bits/stdc++.h>
using namespace std;

class compare {
public:
    bool operator()(pair<int, int> p, pair<int, int> q) {
        return p.second < q.second;
    }
};

int main() {
    int t;
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        map<int, int> m;
        for (auto i : arr) m[i]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
        for (auto i : m) {
            pq.push(i);
        }

        vector<int> ans;
        bool check = true;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            if (ans.empty() || ans.back() != top.first) {
                ans.push_back(top.first);
                if (top.second != 1) {
                    pq.push({top.first, top.second - 1});
                }
            } else {
                if (pq.empty()) {
                    check = false;
                    break;
                } else {
                    auto newtop = pq.top();
                    pq.pop();
                    ans.push_back(newtop.first);
                    if (newtop.second != 1) {
                        pq.push({newtop.first, newtop.second - 1});
                    }
                    pq.push({top.first, top.second});
                }
            }
        }

        map<int, queue<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]].push(i);
        }

        if (!check) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int x = mp[ans[0]].front();
            mp[ans[0]].pop();
            int y = mp[ans[1]].front();
            mp[ans[1]].pop();
            cout << x + 1 << " " << y + 1 << endl;

            for (int i = 2; i < ans.size(); i++) {
                cout << y + 1 << " " << mp[ans[i]].front() + 1 << endl;
                y = mp[ans[i]].front();
                mp[ans[i]].pop();
            }
        }
        t--;
    }
    return 0;
}

