import math

# Precompute all prime numbers up to the limit
limit = 10**7
sieve = [True] * (limit + 1)
sieve[0] = sieve[1] = False
for i in range(2, int(math.sqrt(limit)) + 1):
    if sieve[i]:
        for j in range(i * i, limit + 1, i):
            sieve[j] = False

# Create an array to store the number of N-subtractorizations
dp = [0] * (limit + 1)
dp[2] = 1

# Iterate over all odd primes
for p in range(3, limit + 1, 2):
    if sieve[p]:
        # If p-2 is also an odd prime, increment dp[p]
        if sieve[p - 2]:
            dp[p] += 1
        # Increment dp[p-q] for each odd prime q less than p
        for q in range(3, p, 2):
            if sieve[q]:
                dp[p - q] += 1