#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second; 
        }
        return a.first > b.first;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    unordered_map<int, int> freqMap;
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> minHeap;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int X;
            cin >> X;
            freqMap[X]++;
            minHeap.push({freqMap[X], X});
        } else if (type == 2) {
            if (freqMap.empty()) {
                cout << "empty\n";
            } else {
                while (!minHeap.empty() && freqMap[minHeap.top().second] != minHeap.top().first) {
                    minHeap.pop();
                }

                if (!minHeap.empty()) {
                    int minFreq = minHeap.top().first;
                    int num = minHeap.top().second;

                    cout << num << "\n";

                    int removeCount = minFreq / 2;
                    freqMap[num] -= removeCount;

                    if (freqMap[num] == 0) {
                        freqMap.erase(num);
                    }

                    minHeap.push({freqMap[num], num});
                }
            }
        }
    }

    return 0;
}