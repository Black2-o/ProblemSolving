def solve(input_file, output_file):
    import sys
    from collections import defaultdict

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
        
        max_collinear = 0
        
        for i in range(N):
            for j in range(i + 1, N):
                x1, y1 = ants[i]
                x2, y2 = ants[j]

                count_collinear = 0
                
                for k in range(N):
                    x3, y3 = ants[k]

                    if (y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1):
                        count_collinear += 1
                
                max_collinear = max(max_collinear, count_collinear)
        

        to_move = N - max_collinear
        results.append(f"Case #{t}: {to_move}")


    with open(output_file, 'w') as outfile:
        for result in results:
            outfile.write(result + '\n')

input_file = 'input.txt'   
output_file = 'output.txt' 
solve(input_file, output_file)
