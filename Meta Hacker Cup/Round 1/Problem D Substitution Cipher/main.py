def sieve_of_eratosthenes(n):
    primes = [True] * (n + 1)
    primes[0] = primes[1] = False
    for i in range(2, int(n**0.5) + 1):
        if primes[i]:
            for j in range(i*i, n+1, i):
                primes[j] = False
    return [i for i in range(2, n+1) if primes[i]]

def solve(N, primes):
    subtractorizations = set()
    for i, p1 in enumerate(primes):
        if p1 > N:
            break
        for p2 in primes[i+1:]:
            if p2 > N:
                break
            diff = p2 - p1
            if diff > N:
                break
            if diff in primes:
                subtractorizations.add(diff)
    return len(subtractorizations)

# Generate primes up to the maximum N
MAX_N = 10000000
primes = sieve_of_eratosthenes(MAX_N)

# Process test cases
T = int(input())
for case in range(1, T+1):
    N = int(input())
    result = solve(N, primes)
    print(f"Case #{case}: {result}")