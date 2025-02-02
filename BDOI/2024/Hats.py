def solve():
    n = 5
    # Use 1-indexed arrays: index 0 is a dummy value
    cap = [0, 3, 2, 1, 5, 4]
    serial = ['', '0', '1', '0', '0', '1']

    i = 1
    j = 1
    while j <= n:
        if serial[j] == '1':
            # Must Give Cap
            if j == cap[i]:
                # Happy
                j += 1
                i += 1
            else:
                # Unhappy
                print("NO")
                return
        else:
            # Must Not
            if j == cap[i]:
                print("Here J is", j, "And I is", i, "And Cap[i] is", cap[i])
                # Not Give Him
                j += 1
            else:
                # Otherwise 
                if serial[cap[i]] == '1':
                    print("Here J is", j, "Here I is", i, "And Cap[i] is", cap[i], "And serial[cap[i]] is", serial[cap[i]])
                    # Not Given 
                    j += 1
                else:
                    # Given
                    j += 1
                    i += 1
    print("YES")

# Execute the function
solve()
