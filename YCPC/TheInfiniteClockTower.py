def count_digits_after_hours(N, H):
    digits = [int(d) for d in str(N)]
    
    for _ in range(H):
        new_digits = []
        for d in digits:
            new_d = d + 2
            if new_d > 9:
                new_digits.extend(divmod(new_d, 10))  
            else:
                new_digits.append(new_d)
        digits = new_digits
    
    return len(digits)


T = int(input())
results = []
for _ in range(T):
    N, H = map(int, input().split())
    results.append(count_digits_after_hours(N, H))

mod = 1000000007
for result in results:
    print(result % mod)
