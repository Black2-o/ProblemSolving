import math

def solve():
    n, k = map(int, input().split())
    s = input()

    char_counts = {}
    for char in s:
        char_counts[char] = char_counts.get(char, 0) + 1

    def factorial(n):
        if n == 0:
            return 1
        else:
            res = 1
            for i in range(1, n + 1):
                res *= i
            return res

    def calculate_permutations(counts):
        numerator = factorial(sum(counts.values()))
        denominator = 1
        for count in counts.values():
            denominator *= factorial(count)
        return numerator // denominator

    def get_kth_permutation(counts, k):
        n = sum(counts.values())
        if n == 0:
            return ""

        sorted_chars = sorted(counts.keys())
        
        for char in sorted_chars:
            temp_counts = counts.copy()
            temp_counts[char] -= 1
            if temp_counts[char] == 0:
                del temp_counts[char]
            
            num_perms = calculate_permutations(temp_counts)
            if k <= num_perms:
                return char + get_kth_permutation(temp_counts, k)
            else:
                k -= num_perms
        return ""

    total_perms = calculate_permutations(char_counts)
    if k > total_perms:
        print("-1")
        return

    result = get_kth_permutation(char_counts, k)
    print(result)

solve()