#include <iostream>
using namespace std;


void pattern1(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++) cout << "*";
        cout << endl;
    }
}
void pattern2(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j <= i; j++) cout << "*";
        cout << endl;
    }
}
void pattern3(int n){
    for(int i = 0;i < n; i++){
        for(int j = 1; j <= i+1; j++) cout << j;
        cout << endl;
    }
}
void pattern4(int n){
    for(int i = 1;i <= n; i++){
        for(int j = 0; j < i; j++) cout << i;
        cout << endl;
    }
}
void pattern5(int n){
    for(int i = 0;i < n; i++){
        for(int j = 1; j <= n-i; j++) cout << "*";
        cout << endl;
    }
}
void pattern6(int n){
    for(int i = 0;i < n; i++){
        for(int j = 1; j <= n-i; j++) cout << j;
        cout << endl;
    }
}
void pattern7(int n){
    for(int i = 1;i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < (i*2)-1; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < ((n-i)*2)-1; j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n){
    for(int i = 1;i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < (i*2)-1; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i = 0;i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < ((n-i)*2)-1; j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = n-i-1; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i%2 == 0 and j%2 == 0){
                cout << 1 << " ";
            }else if(i%2 != 0 and j%2 != 0){
                cout << 1 << " ";
            }else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
void pattern12(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 0; j < (n-i)*2; j++){
            cout << " ";
        }
        for(int j = i; j > 0; j--){
            cout << j;
        }

        cout << endl;
    }
}
void pattern13(int n){
    int x = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            x+=1;
            cout << x << " ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cin >> n;
    pattern13(n);
    return 0;
}
