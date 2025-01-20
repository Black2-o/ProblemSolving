// #include <iostream>
// using namespace std;





// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     int lowest_score;
//     cin >> lowest_score;

//     int advance_to_next_round = 0;

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int i = 0;
//     while (arr[i] >= arr[lowest_score-1] and arr[lowest_score-1] != 0) {
//         i++;
//         advance_to_next_round++;
//     }

//     cout << advance_to_next_round;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int threshold_score = scores[k - 1]; // Score of the k-th participant
    int advance_count = 0;

    for (int i = 0; i < n; i++) {
        // A participant advances if their score is >= threshold and > 0
        if (scores[i] >= threshold_score && scores[i] > 0) {
            advance_count++;
        }
    }

    cout << advance_count << endl;
    return 0;
}
