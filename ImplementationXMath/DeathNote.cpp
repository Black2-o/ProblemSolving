#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    if(m == 1){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        return 0;
    }

    int temp = m;
    for(int i = 0; i < n;i++){
        long long result = 0;
        if(temp > arr[i]){
            temp -= arr[i];
            cout << result << " ";

        }else{
            while(arr[i] > 0){
                // cout << "ARR[i] is " << arr[i] << " Temp: " << temp << " Result: " << result << endl;

                if(arr[i] % temp == 0 and temp > arr[i]){
                    cout << "Hello " << endl;
                    result += arr[i] / temp;
                    arr[i] /= temp;
                    temp = m;
                }else{
                    arr[i] -= temp;
                    if(arr[i] >= 0){
                        result++;
                        temp = m;
                    }else{
                        temp = abs(arr[i]);
                    }
                }

            }
            cout << result << " ";

        }
    }



    return 0;
}