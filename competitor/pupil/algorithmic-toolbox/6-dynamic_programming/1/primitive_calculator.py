def optimal_sequence(n):
    sequence = []
    while n >= 1:
        sequence.append(n)
        if n % 3 == 0:
            n //= 3
        elif n % 2 == 0:
            n //= 2
        else:
            n -= 1

    return list(reversed(sequence))

def dp_sequence(n):
    if n > 3:
        n += 1
        sequence = [None] * n
        sequence[0], sequence[1], sequence[2], sequence[3] = 0, 0, 1, 1

        for num in range(4, n):
            calc1 = calc2 = calc3 = n

            calc1 = sequence[num - 1] + 1
            if num % 2 == 0:
                calc2 = sequence[num // 2] + 1
            if num % 3 == 0:
                calc3 = sequence[num // 3] + 1

            sequence[num] = min(calc1, calc2, calc3)

        return sequence
    else:
        return [0, 0, 1, 1]

def generate_sequence(n, all_nums, sequence = []):
    if n == 0:
        return list(reversed(sequence))
    else:
        mini_result = all_nums[n - 1]
        next_num = n - 1

        if n % 3 == 0 and all_nums[n // 3] < mini_result:
            mini_result = all_nums[n // 3]
            next_num = n // 3
              
        if n % 2 == 0 and all_nums[n // 2] < mini_result:
            mini_result = all_nums[n // 2]
            next_num = n // 2
        
        sequence.append(n)
        return generate_sequence(next_num, all_nums, sequence)
    
if __name__ == "__main__":
    n = int(input())

    all_nums = dp_sequence(n)
    sequence = generate_sequence(n, all_nums)

    print(len(sequence) - 1)
    print(" ".join(map(str, sequence)))
