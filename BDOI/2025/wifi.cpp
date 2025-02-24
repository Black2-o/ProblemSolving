#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        int A[n];
        int B[n];
        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 0; i < n; i++) cin >> B[i];
        sort(A, A+n);
        sort(B, B+n);
        if(n == 2){
            for(int i = 0; i < n; i++){
                if(A[i] == B[i]){

                }else{
                    cout << "NO" << endl;
                    break;
                }
            }
            cout << "YES -1" << endl;
        }
    
    }


    return 0;
}