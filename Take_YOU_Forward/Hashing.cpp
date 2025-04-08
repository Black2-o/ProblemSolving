#include <iostream>
#include <algorithm>
#include <map>
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

void HashDeclaration(){
    // In Main function We Can Only Declare 1e6 Value in Array 
    // But In Global We can DEclare 10e8 Value in Array 
    // But What About Next 
}


void CharecterHashingBasic(){
    string s;
    cin >> s;
    int l = s.length();

    char findit = 'c';

    // char hash[26] = {0};
    int count = 0;

    for(int i = 0; i < l; i++){
        if(s[i] == findit){
            count +=1;
        }
    }

    // for(int i = 0; i < 26; i++){
    //     cout << hash[i] << endl;
    // }
    cout << count;
}

void CharecterHashing(){
    string s;
    cin >> s;
    int l = s.length();

    // ASCII Value 
    // small a ascii value is 97 and small z ascii value is 122
    

    int hash[26] = {0};

    // Create the Hash Map
    for(int i = 0; i < l; i++){
        hash[s[i] - 'a'] += 1;
    }


    // Printing The Hash Map
    // for(int i = 0; i < 26; i++){
    //     cout << i << " " << hash[i] << endl;
    // }

    // Get the value for which should find
    int n;cin >> n;
    char c[n];for(int i = 0; i < n; i++) cin >> c[i]; 

    for(int i = 0; i < n; i++){
        cout << c[i]  << " " << hash[c[i] - 97] << endl; 
    }


}


void UnorderedMap(){
    // They has to be a key and here key is the number
    // There has to be a value and here value is how many number that key
    // LIke mpp[arr[i]]++

    // 1 2 3 1 3 2 12

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];


    //pre-compute
    map<int, int> map;
    for(int i = 0; i < n; i++) map[arr[i]]++;


    // // Itrate the map 
    // for(auto it: map){
    //     cout << it.first << "=>" << it.second << endl;
    // }


    int q; // which should be found that means it is a list of n
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << num << " ";
        //fetch
        cout << map[num] << endl;
    }

}

int main() {

    UnorderedMap();

    return 0;
}
