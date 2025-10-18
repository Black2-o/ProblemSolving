#include <iostream>
using namespace std;

int main() {
    int t;cin >> t;
    for(int j = 0; j < t; j++){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        if(n <= 1){
            cout << "Case #"<< j+1 << ": 0" << endl;
        }else{
            int max = 0;
            for(int i = 0; i < n-1; i++){
                if(abs(arr[i] - arr[i+1]) > max){
                    max = abs(arr[i] - arr[i+1]);
                }
            }
            cout << "Case #"<< j+1 << ": " << max << endl;
        }
    }

    return 0;
}
