// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     for(int i = 0; i < t; i++){
//         long long n, k;
//         cin >> n >> k;
//         int result = 0;
//         while(n > 0){
          
//           if(n%k == 0){
//             result++;
//             n/=k;
//           }else{
//             // cout << n%k << endl << endl;
//             long long temp = n%k;
//             n -= temp;
//             result += temp; 
//           }
//           cout << result << " : " << n << endl;

//         }
//         cout << result << endl;
//     }
    

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long result = 0;
        while (n > 0) {
            if (k == 1) {
                result += n;
                break;
            }
            if (n < k) {
                result += n;
                break;
            }
            if (n % k != 0) {
                long long temp = n % k;
                result += temp;
                n -= temp;
            } else {
                n /= k;
                result++;
            }
        }
        cout << result << endl;
    }
    return 0;
}