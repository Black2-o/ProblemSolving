#include <iostream>


int main() {
    int n;
    char colors[n];
    int x = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> colors[i];
    }

    for (int i = 0; i < n; i++) {
        if(colors[i] == colors[i+1]){
            x++;
        }
    }
    std::cout << x;

    return 0;
}