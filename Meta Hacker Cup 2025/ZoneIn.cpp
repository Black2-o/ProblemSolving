#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

void solve(int case_num) {
    int R, C, S;
    cin >> R >> C >> S;
    vector<string> grid(R);
    for (int i = 0; i < R; ++i) {
        cin >> grid[i];
    }

    vector<vector<int>> dist_obj(R, vector<int>(C, R * C)); 
    queue<pair<int, int>> q;

    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            if (grid[r][c] == '#') {
                q.push({r, c});
                dist_obj[r][c] = 0;
            }
        }
    }

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nr = curr.first + dr[i];
            int nc = curr.second + dc[i];

            if (nr >= 0 && nr < R && nc >= 0 && nc < C && dist_obj[nr][nc] == R * C) {
                dist_obj[nr][nc] = dist_obj[curr.first][curr.second] + 1;
                q.push({nr, nc});
            }
        }
    }
    
    long long max_size = 0;
    vector<vector<bool>> visited(R, vector<bool>(C, false));

    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            int dist_wall = min({r + 1, R - r, c + 1, C - c});
            int final_dist = min(dist_wall, dist_obj[r][c]);
            bool is_safe = (final_dist >= S + 1);

            if (is_safe && !visited[r][c]) {
                long long current_size = 0;
                queue<pair<int, int>> component_q;

                component_q.push({r, c});
                visited[r][c] = true;

                while (!component_q.empty()) {
                    pair<int, int> curr = component_q.front();
                    component_q.pop();
                    current_size++;

                    for (int i = 0; i < 4; ++i) {
                        int nr = curr.first + dr[i];
                        int nc = curr.second + dc[i];

                        if (nr >= 0 && nr < R && nc >= 0 && nc < C && !visited[nr][nc]) {
                            int neighbor_dist_wall = min({nr + 1, R - nr, nc + 1, C - nc});
                            int neighbor_final_dist = min(neighbor_dist_wall, dist_obj[nr][nc]);
                            if (neighbor_final_dist >= S + 1) {
                                visited[nr][nc] = true;
                                component_q.push({nr, nc});
                            }
                        }
                    }
                }
                if (current_size > max_size) {
                    max_size = current_size;
                }
            }
        }
    }

    cout << "Case #" << case_num << ": " << max_size << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        solve(i);
    }
    return 0;
}
