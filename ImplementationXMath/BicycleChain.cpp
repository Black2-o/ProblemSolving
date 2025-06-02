#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;
    float a[n];
    for(int i = 0;i < n;i++) cin >> a[i];
    int m;
    cin >> m;
    float b[m];
    for(int i = 0;i < m; i++) cin >> b[i];

    // int highest = 0;
    int high = 0;

    for(int i = 0;i < n;i++){
        for(int k = i+1; k < n; k++){
            float now = b[i] / a[k-1];

            for(int j = 0; j < m; j++){
                float temp = (b[j] / a[k]);
                cout << "A[k]: " << a[k] << " B[i] " << b[i] << " B[j] " << b[j] << endl;
                cout << "Now: " << now << " Temp: " << temp << endl;
                if(temp == now){
                    // cout << temp << endl;
                    high++;
                    cout << "a[k] is " << a[k] << " b[j] is " << b[j] << " b[i] is " << b[i] << endl;
                }

            }
        }

    }

    cout << high+1 << endl;

    
    return 0;
}