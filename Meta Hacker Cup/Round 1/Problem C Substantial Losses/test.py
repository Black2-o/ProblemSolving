def mod_inverse(a, m):
    m0, x0, x1 = m, 0, 1
    if m == 1:
        return 0
    while a > 1:
        q = a // m
        m, a = a % m, m
        x0, x1 = x1 - q * x0, x0
    return x1 + m0 if x1 < 0 else x1

def expected_days(W, G, L):
    if L == 0:
        return (W - G) * (W - G + 1) // 2  # Direct formula when L=0
    else:
        # When L > 0, we need to account for the expected value based on boundaries
        days = (W - G) * (W - G + 1) // 2
        days -= (W + L - G) * (W + L - G + 1) // 2
        return days

def solve_substantial_losses():
    import sys
    input = sys.stdin.read
    data = input().strip().split('\n')
    
    T = int(data[0])
    results = []
    
    for i in range(1, T + 1):
        W, G, L = map(int, data[i].split())
        result = expected_days(W, G, L) % 998244353
        results.append(f"Case #{i}: {result}")

    print("\n".join(results))

# Run the solution
solve_substantial_losses()
