#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    int sum = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> v;
    for (int i = 0; i < n; i++){
        if (arr[i] == 'x'){
            v.insert(v.end() ,i);
        }
    }  
    int mid = v[v.size()/2];

    int i = v.size()/2, j = v.size()/2;
    while(i >= 1){ 
        if(v[i] - v[i-1] != 0){
            // cout << "V[i] is "<< v[i] << " V[i-1] is " << v[i-1] << " V[i-2] is " << v[i-2] << endl;
            sum += v[i] - v[i-1] - 1;
            v[i-1] = v[i] - 1;
        }
        i--;
    }

    while(j <= v.size()-2){
        if(v[j+1] - v[j] != 0){
            // cout << "V[j] is "<< v[j] << " V[j+1] is " << v[j+1] << " V[j+2] is " << v[j+2] << endl;

            sum += v[j+1] - v[j] - 1;
            v[j+1] = v[j] + 1;
        }
        j++;
    }
    cout << sum;

    return 0;
}