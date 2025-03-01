import decimal

def solve(input_file, output_file):
    decimal.getcontext().prec = 30 

    with open(input_file, 'r') as infile:
        data = infile.readlines()

    T = int(data[0].strip())  
    results = []
    
    for t in range(1, T + 1):
        N, P = map(int, data[t].strip().split())

        P_decimal = decimal.Decimal(P)
        P_new = decimal.Decimal(100) * (P_decimal / decimal.Decimal(100)) ** (decimal.Decimal(N - 1) / decimal.Decimal(N))
        
        increase_in_P = P_new - P_decimal
        
        increase_in_P = increase_in_P.quantize(decimal.Decimal('1.000000000000000'))

        results.append(f"Case #{t}: {increase_in_P:.15f}")
    
    with open(output_file, 'w') as outfile:
        for result in results:
            outfile.write(result + '\n')

input_file = 'input.txt' 
output_file = 'output.txt' 
solve(input_file, output_file)
