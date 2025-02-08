#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    long long n, x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr+n);

    int l = 0;
    int t = 0;
    for(int i = 0; i < n; i++){
        t+= arr[i];
        if(t > x){
           break;
        }
        l++;
    }

    cout << l;
    return 0;
}