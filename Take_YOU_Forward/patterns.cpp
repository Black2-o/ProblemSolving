#include <iostream>
#include <numeric> // For Generating Eng Char Start From 14
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
void pattern14(int n){
    char albet[26] {};
    std::iota(std::begin(albet), std::end(albet), 'A');
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << albet[j] << " ";
        }
        cout << endl;
    }
}
void pattern15(int n){
    char albet[26] {};
    std::iota(std::begin(albet), std::end(albet), 'A');
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < (n-i)+1; j++){
            cout << albet[j] << " ";
        }
        cout << endl;
    }
}
void pattern16(int n){
    char albet[26] {};
    std::iota(std::begin(albet), std::end(albet), 'A');
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << albet[i] << " ";
        }
        cout << endl;
    }
}
void pattern17(int n){
    char albet[26] {};
    std::iota(std::begin(albet), std::end(albet), 'A');
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << albet[j] << " ";
        }
        for(int j = i-1; j > 0; j--){
            cout << albet[j-1] << " ";
        }
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18X(int n){
    char albet[26] {};
    std::iota(std::begin(albet), std::end(albet), 'A');
    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= i; j--){
            cout << albet[j] << " ";
        }
        cout << endl;
    }
}
void pattern18(int n){
    char albet[26] {};
    std::iota(std::begin(albet), std::end(albet), 'A');
    for(int i = n-1; i >= 0; i--){
        for(int j = i; j < n; j++){
            cout << albet[j] << " ";
        }
        cout << endl;
    }
}
void pattern19(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "*";
        }
        for(int j = 0; j < i*2; j++){
            cout << " ";
        }
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int j = 0; j < (n-i)*2; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int j = 0; j < (n-i)*2; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "*";
        }
        for(int j = 0; j < i*2; j++){
            cout << " ";
        }
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int n){
    if(n == 1){
        cout << "*";
        return;
    }
    for(int i = 0; i < n; i++){
        cout << "*";
    } cout << endl;
    for(int i = 0; i < n-2; i++){
        cout << "*";
        for(int j = 0; j < n-2; j++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        cout << "*";
    }
}
void pattern22(int n){
    int x = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                cout << "*";
                cout << x;
            }else{
                cout << n-i;
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern22(n);
    return 0;
}
