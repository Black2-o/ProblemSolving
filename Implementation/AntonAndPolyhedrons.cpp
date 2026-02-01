#include <iostream>
#include <string>
using namespace std;


int main(){
    int n; cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == "Tetrahedron"){
            ans+=4;
        }else if (arr[i] == "Cube"){
            ans+=6;
        }else if (arr[i] == "Octahedron"){
            ans+=8;
        }else if (arr[i] == "Dodecahedron"){
            ans+=12;
        }else if (arr[i] == "Icosahedron"){
            ans+=20;
        }
    }

    cout << ans;

    return 0;
} 