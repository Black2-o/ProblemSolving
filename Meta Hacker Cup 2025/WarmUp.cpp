#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <utility>

void solve(int case_num) {
    int N;
    std::cin >> N;
    std::vector<int> A(N + 1), B(N + 1);
    std::vector<int> count_A(N + 1, 0), count_B(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        std::cin >> A[i];
        count_A[A[i]]++;
    }
    for (int i = 1; i <= N; ++i) {
        std::cin >> B[i];
        count_B[B[i]]++;
    }

    for (int i = 1; i <= N; ++i) {
        if (A[i] > B[i]) {
            std::cout << "Case #" << case_num << ": -1\n";
            return;
        }
    }

    long long suffix_sum_A = 0;
    long long suffix_sum_B = 0;
    for (int t = N; t >= 1; --t) {
        suffix_sum_A += count_A[t];
        suffix_sum_B += count_B[t];
        if (suffix_sum_A > suffix_sum_B) {
            std::cout << "Case #" << case_num << ": -1\n";
            return;
        }
    }


    std::vector<std::pair<int, int>> dishes_to_heat;
    for (int i = 1; i <= N; ++i) {
        if (A[i] < B[i]) {
            // Store as {target_temp, dish_index}
            dishes_to_heat.push_back({B[i], i});
        }
    }
    
    std::sort(dishes_to_heat.begin(), dishes_to_heat.end());

    std::vector<std::vector<int>> sources(N + 1);
    for (int i = 1; i <= N; ++i) {
        sources[A[i]].push_back(i);
    }

    std::vector<std::pair<int, int>> operations;
    for (const auto& req : dishes_to_heat) {
        int target_temp = req.first;
        int target_dish = req.second;


        if (sources[target_temp].empty()) {
            std::cout << "Case #" << case_num << ": -1\n";
            return;
        }
        int source_dish = sources[target_temp].back();
        sources[target_temp].pop_back();
        
        operations.push_back({source_dish, target_dish});

        sources[target_temp].push_back(target_dish);
    }


    std::cout << "Case #" << case_num << ": " << operations.size() << "\n";
    for (const auto& op : operations) {
        std::cout << op.first << " " << op.second << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int T;
    std::cin >> T;
    for (int i = 1; i <= T; ++i) {
        solve(i);
    }
    
    return 0;
}