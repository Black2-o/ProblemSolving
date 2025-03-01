MOD = 998244353

def count_decodings(s):
    n = len(s)
    dp = [0] * (n + 1)
    dp[0] = 1
    dp[1] = 1 if s[0] != '0' else 0

    for i in range(2, n + 1):
        if s[i-1] != '0':
            dp[i] = dp[i-1]
        if s[i-2] == '1' or (s[i-2] == '2' and s[i-1] <= '6'):
            dp[i] = (dp[i] + dp[i-2]) % MOD

    return dp[n]

def generate_uncorrupted(s, index, current, results):
    if index == len(s):
        results.append(current)
        return

    if s[index] != '?':
        generate_uncorrupted(s, index + 1, current + s[index], results)
    else:
        for digit in range(10):
            if index == 0 and digit == 0:
                continue
            generate_uncorrupted(s, index + 1, current + str(digit), results)

def solve(s, k):
    uncorrupted_strings = []
    generate_uncorrupted(s, 0, "", uncorrupted_strings)

    max_decodings = 0
    max_strings = []

    for uncorrupted in uncorrupted_strings:
        decodings = count_decodings(uncorrupted)
        if decodings > max_decodings:
            max_decodings = decodings
            max_strings = [uncorrupted]
        elif decodings == max_decodings:
            max_strings.append(uncorrupted)

    max_strings.sort(reverse=True)
    return max_strings[k-1], max_decodings

def main():
    t = int(input())
    for case in range(1, t + 1):
        s, k = input().split()
        k = int(k)
        result, count = solve(s, k)
        print(f"Case #{case}: {result} {count}")
        with open("outputX.txt", 'w') as f:
            f.write(f"Case #{case}: {result} {count}" + "\n")

if __name__ == "__main__":
    main()