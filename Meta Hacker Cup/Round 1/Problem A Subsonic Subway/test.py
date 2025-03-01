def solve_subsonic_subway():
    T = int(input())  # number of test cases
    for t in range(1, T + 1):
        N = int(input())  # number of stations
        min_speed = 0
        max_speed = float('inf')
        
        for i in range(1, N + 1):
            A, B = map(int, input().split())
            # Calculate max possible speed for this station
            max_speed = min(max_speed, i / A if A > 0 else float('inf'))
            # Calculate min possible speed for this station
            min_speed = max(min_speed, i / B)
        
        if min_speed <= max_speed:
            # Print the solution rounded but without unnecessary trailing zeros
            print(f"Case #{t}: {min_speed:.6f}".rstrip('0').rstrip('.'))
            with open("output.txt", 'a')as f:
                f.write(f"Case #{t}: {min_speed:.6f}".rstrip('0').rstrip('.') + "\n")
        else:
            print(f"Case #{t}: -1")
            with open("output.txt", 'a')as f:
                f.write(f"Case #{t}: -1" + "\n")

# Run the solution
solve_subsonic_subway()
