#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int minN = *std::min_element(arr, arr + n);


    int frequency = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == minN){
            frequency+=1;
        }
    }

    if(frequency%2 == 0){
        cout << "Unlucky";
    }else{
        cout << "Lucky";
    }

    return 0;
}