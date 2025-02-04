#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    sort(arr, arr+n);
    int taxi = 0;
    int _taxi = 0;
    int i = 0; int j = n-1;
// while(i+1!=j)
    while(i <= j){
        // cout << "I is " << i << " J is " << j << endl;
        if(arr[j] == 4){
            j--;
            taxi += 1;
        } else if(arr[j] + arr[i] <= 4){
            if(arr[j] + arr[i] + arr[i+1] <= 4){
                i++;
                // cout << "Hlo" << endl;
            }
            if(arr[j] + arr[i] + arr[i+1] + arr[i+2] <= 4){
                i++;
                // cout << "Hlo" << endl;
                
            }
            i++;
            j--;
            taxi+=1;

        }else{
            j--;
            taxi+=1;
        }
    }


    // cout << index;

    // for(int i = index; i < n; i++) taxi+=1;

    cout << taxi;
    return 0;
}