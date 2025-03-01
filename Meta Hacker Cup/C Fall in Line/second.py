from collections import defaultdict
from math import gcd

def solve(input_file, output_file):
    with open(input_file, 'r') as infile:
        data = infile.readlines()

    T = int(data[0].strip())
    results = []
    index = 1
    
    for t in range(1, T + 1):
        N = int(data[index].strip())
        index += 1
        
        ants = []
        for i in range(N):
            x, y = map(int, data[index].strip().split())
            ants.append((x, y))
            index += 1
        
        if N <= 2:
            results.append(f"Case #{t}: 0")
            continue
        
        min_moves = N - 1  # Start with the worst case
        
        for i in range(N):
            slope_count = defaultdict(int)
            for j in range(N):
                if i != j:
                    dx = ants[j][0] - ants[i][0]
                    dy = ants[j][1] - ants[i][1]
                    
                    if dx == 0:
                        slope = ('inf', 0)  # vertical line
                    elif dy == 0:
                        slope = (0, 'inf')  # horizontal line
                    else:
                        g = gcd(dx, dy)
                        slope = (dy // g, dx // g)
                        if slope[1] < 0:  # Ensure consistency
                            slope = (-slope[0], -slope[1])
                    
                    slope_count[slope] += 1
            
            # Maximum ants aligned with this point
            max_on_line = max(slope_count.values(), default=0)
            moves = N - 1 - max_on_line  # Calculate moves needed
            min_moves = min(min_moves, moves)

        results.append(f"Case #{t}: {min_moves}")

    with open(output_file, 'w') as outfile:
        for result in results:
            outfile.write(result + '\n')

# Example usage:
input_file = 'fall_in_line_validation_input.txt'
output_file = 'output.txt'
solve(input_file, output_file)
