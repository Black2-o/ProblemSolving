#include <iostream>
#include <set>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;

    for(int i = 0; i < testcase; i++){



        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(arr[i]);
        }

        // for (int x : s) cout << x << " ";


        cout << n - s.size() << endl;

        
    
    
    }
    return 0;
}