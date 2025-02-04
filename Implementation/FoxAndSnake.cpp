#include <iostream>
using namespace std;

int main() {
    int v;
    int h;

    cin >> v >> h;

    for(int i = 1; i <= v; i++){
        if(i%2 == 0){
            if((i/2)%2 == 0){
                cout << "#";
                for(int j = 0; j < h-1; j++){
                    cout << ".";
                }
                cout << endl;
            }else{
                for(int j = 0; j < h-1; j++){
                    cout << ".";
                }
                cout << "#" << endl;
            }
        }else{
            for(int j = 0; j < h; j++){
                cout << "#";
            }
            cout << endl;
        }
    }

    return 0;
}