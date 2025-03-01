def can_travelers_cross(S, K):
    S.sort()
    total_time = 0
    n = len(S)
    

    if n == 1:
        return S[0] <= K
    if n == 2:
        return max(S[0], S[1]) <= K
    
    left = n - 1
    
    while left > 2:
        option1 = 2 * S[1] + S[0] + S[left] 
        option2 = S[left] + S[left-1] + 2 * S[0]  
        total_time += min(option1, option2)
        left -= 2  
        

    if left == 2:
        total_time += S[2] + S[0] + S[1]
    elif left == 1:
        total_time += S[1]
    
    return total_time <= K


def solve(input_file, output_file):
    with open(input_file, 'r') as f:
        data = f.readlines()
    
    index = 0
    T = int(data[index].strip()) 
    index += 1
    results = []
    
    for t in range(1, T + 1):
        N, K = map(int, data[index].strip().split())
        index += 1
        S = [int(data[index + i].strip()) for i in range(N)]
        index += N
        
        if can_travelers_cross(S, K):
            results.append(f"Case #{t}: YES")
        else:
            results.append(f"Case #{t}: NO")
    

    with open(output_file, 'w') as f:
        for result in results:
            f.write(result + '\n')




input_file = 'input.txt'   
output_file = 'output.txt' 
solve(input_file, output_file)
