#include <iostream>
using namespace std;


// Re 4. Problems on Functional Recursion | Strivers A2Z DSA Course
// Reverse an Array 
// Palindrome a Word 

void reverseArray(int arr[], int start, int end){
    if(end <= start) return;
    swap(arr[start], arr[end]);
    reverseArray(arr, start+1, end-1);
}

void anotherReverseArray(int arr[], int i, int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    anotherReverseArray(arr, i+1, n);
}

bool palindrome(string str, int i, int n){
    if(i >= n/2) return true;

    if(palindrome(str, i+1, n)){
        if(str[i] == str[n-i-1]) return true;
        else return false;
    }else{
        return false;
    }
}

int main() {
    // int n;
    // cin >> n;
    // // int i = 0;
    // int arr[n];
    // for(int i = 0; i < n; i++) cin >> arr[i];
    // // reverseArray(arr, 0, n-1);
    // anotherReverseArray(arr, 0, n);
    // for(int i = 0; i < n; i++) cout << arr[i] << " ";

    string str;
    cin >> str;
    int len = str.length();
    bool ispa = palindrome(str, 0, len);
    cout << ispa;

    return 0;
}
