from collections import defaultdict
import sys
input = sys.stdin.read

def main():
    ios_input = input().split()
    n = int(ios_input[0])
    queries = ios_input[1:]
    
    arr = []
    index = 0
    results = []
    
    while index < len(queries):
        query_type = int(queries[index])
        
        if query_type == 1:
            x = int(queries[index + 1])
            arr.append(x)
            index += 2
        elif query_type == 2:
            if not arr:
                results.append("empty")
            else:
                freq = defaultdict(int)
                for num in arr:
                    freq[num] += 1
                
                min_occurrence = min(freq.values())
                candidates = [num for num, occ in freq.items() if occ == min_occurrence]
                val = max(candidates)
                
                remove_count = min_occurrence // 2
                remove_occurrences = 0
                new_arr = []
                
                for num in arr:
                    if num == val and remove_occurrences < remove_count:
                        remove_occurrences += 1
                    else:
                        new_arr.append(num)
                
                arr = new_arr
                results.append(str(val))
            
            index += 1
    
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    main()
