#include <iostream>
using namespace std;


void NumberFindBasicWay(){

    // Arr[n] is the Array and K is the number of element which should search 
    // Then The Big O is O(n*k)
    // Here Now I sue k = 1 (one things only) So Big O is O(n*1) = O(n) 

    // Final BigO can be Big O(n) But In wrost Case It can be Huge  

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];


    int k = 1;
    int x = 0;

    for(int i = 0; i < n; i++){
        if(x == arr[i]){
            x++;
        }

    }

    cout << x << endl;
}

void WhyHashing(){
    // Hasing is like preStored And Fetching when it want in O(1) time 
    // So It takes time O(n+k) Which We Can Told O(n)
    // So It Is Faster Way 
}

void HasingPrecomputation(){
    int n;cin >> n;
    int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i];

    int q; cin >> q;
    int query[q]; for(int i = 0; i < q; i++) cin >> query[i];

    // PreStoring 
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1; 
    }

    // Checking All The Hash 
    // for(int i = 0; i < 13;i++){
    //     cout << hash[i] << endl;
    // }

    for(int i = 0; i < q; i++){
        cout << query[i] << " " << hash[query[i]] << endl;
    }

}


int main() {

    HasingPrecomputation();

    return 0;
}
