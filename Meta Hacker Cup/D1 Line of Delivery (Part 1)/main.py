class Stone:
    def __init__(self, index, energy):
        self.index = index  # Original index of the stone (1-based)
        self.energy = energy  # Initial energy
        self.position = 0  # Starting position

def curling_solitaire(test_cases):
    results = []

    for t, (N, G, energies) in enumerate(test_cases, start=1):
        stones = [Stone(i + 1, energies[i]) for i in range(N)]
        positions = {}  # Dictionary to track final positions of stones

        # Sort stones by energy in descending order
        sorted_stones = sorted(stones, key=lambda s: -s.energy)

        for stone in sorted_stones:
            position = stone.position
            energy = stone.energy
            
            while energy > 0:
                position += 1  # Move right
                energy -= 1

                # Check if there's a collision with an already positioned stone
                if position in positions:
                    # Collision occurs; transfer energy to the stone at the position
                    stone.energy = positions[position].energy  # Transfer energy
                    break

            # Set the final position of the stone
            positions[position] = stone

        # Find the closest stone to the goal
        closest_stone_index = -1
        closest_distance = float('inf')

        for pos, stone in positions.items():
            distance = abs(pos - G)

            if distance < closest_distance:
                closest_distance = distance
                closest_stone_index = stone.index
            elif distance == closest_distance:
                if stone.index < closest_stone_index:
                    closest_stone_index = stone.index

        results.append(f"Case #{t}: {closest_stone_index} {closest_distance}")

    return results

# Input processing
def main(input_file, output_file):
    with open(input_file, 'r') as infile:
        data = infile.readlines()

    T = int(data[0].strip())
    test_cases = []
    index = 1

    for _ in range(T):
        N, G = map(int, data[index].strip().split())
        index += 1
        energies = [int(data[index + i].strip()) for i in range(N)]
        test_cases.append((N, G, energies))
        index += N

    results = curling_solitaire(test_cases)

    # Write the results to the output file
    with open(output_file, 'w') as outfile:
        for result in results:
            outfile.write(result + '\n')

# Example usage:
input_file = 'input.txt'   # Input file path
output_file = 'output.txt' # Output file path
main(input_file, output_file)
