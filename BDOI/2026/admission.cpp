#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

auto comp = [](pair<int, int> a, pair<int,int> b) {
        return a.second > b.second;
};


int main() {
    int n, m, x; cin >> n >> m >> x;
    int medical_college[m];
    for(int i = 0; i < m; i++) cin >> medical_college[i];
    vector<pair<int, int>> marks;
    // int* college_preference[n];
    int college_preference[n][m];


    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        marks.push_back(make_pair(i, temp));
        // cout << marks[i].second << endl;
        for(int j = 0; j < m; j++){
            cin >> college_preference[i][j];
            // cout << college_preference[i][j] << " ";
        }
        // cout << endl;
    }
    // cout << "INPUT DONE" << endl;


    // for (const auto& pr : marks) {
    //     cout << pr.first << ", " << pr.second << endl;
    // }

    sort(marks.begin(), marks.end(), comp);

    // cout << endl;

    // for (const auto& pr : marks) {
    //     // cout << pr.first << ", " << pr.second << endl;
    //     for(int i = 0; i < m; i++){
    //         cout << medical_college[college_preference[pr.first][i] - 1] << endl;
    //         if(medical_college[college_preference[pr.first][i] - 1] > 0){
    //             // cout << "PR FIRST "<< pr.first << " (X-1) " << x - 1 << endl;
    //             if(pr.first == (x-1))
    //                 // cout << college_preference[pr.first][i] << endl;
    //                 cout << " ";
    //             }
    //             medical_college[college_preference[pr.first][i] - 1]-=1;
    //             // cout << "AFter COllege Preference " << medical_college[ college_preference[pr.first][i] - 1] << endl;
    //             break;
    //         }
    //     }
    // }
    for (const auto& pr : marks) {
        for(int i = 0; i < m; i++){
            // cout <<"I is " << i << " Then " << medical_college[college_preference[pr.first][i] - 1] << endl;
            if(medical_college[college_preference[pr.first][i] - 1] > 0){
                if(pr.first == (x-1)){
                    cout << college_preference[pr.first][i];
                }
                medical_college[college_preference[pr.first][i] - 1] -= 1;
                break;
            }
        }
    }

    return 0;
}