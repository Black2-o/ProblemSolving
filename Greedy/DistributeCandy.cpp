#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

int main() {
    int total = 0;
    int add_l = 1;
    int add_r = 1;

    int n;
    cin >> n;
    int arr[n];


    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> v;
    v.insert(v.begin(), 1);
    int i = 1;
    while ((n/2)+1!=i)
    {
        if (arr[i] > arr[i-1]){
            // cout << arr[i] << endl;
            add_l += 1;
            // cout << "Add L is " <<add_l << endl;
            v[i] = add_l;
            // cout << i << " is I and V[i] is " << v[i] << endl;
        } else if(arr[i] == arr[i-1] || arr[i] < arr[i-1]){
            add_l = 1;
            v[i] = add_l;
        }


        if(arr[n-i-1] > arr[n-i]){
            add_r+=1;
            v[n-i-1] = add_r;
            // cout << n-i-1 << " Index is " << v[n-i-1] << endl;
        } else if (arr[n-i-1] == arr[n-i] || arr[n-i-1] < arr[n-i]){
            add_r = 1;
            v[n-i-1] = add_r;
        }
        i++;
        // for (int j = 0; j < n; j++) {
        //     cout << v[j] << " ";
        // }
        // cout << endl;
    }
    // v.push_back(1);
    

    
    for (int i = 0; i < n-1; i++) {
        total += v[i];
    }


    
    cout << total+1;

    return 0;
}



    // int total = 1;
    // int add = 1;

    // int n;
    // cin >> n;
    // int arr[n];

    // for(int i = 0; i<n; i++){
    //     cin >> arr[i];
    // }
    // sort(arr, arr+n);
    // for(int i = 1; i<n; i++){
    //     if(arr[i-1] < arr[i]){
    //         add += 1;
    //     }
    //     total += add;
    // }

    // cout << total;