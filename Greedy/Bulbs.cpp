#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(count%2 == 0){
            if(arr[i] == 0){
                count++;
            }
        }else{
            if(arr[i] == 1){
                count++;
            }
        }
    }
    
    cout << "Count " << count << endl;

    return 0;
}