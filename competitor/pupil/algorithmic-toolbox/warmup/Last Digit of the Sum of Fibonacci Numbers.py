def set_fib_sequence(m = 10):
    Fibonacci_Sequence = [0, 1]
    i = 2 #current_index
    while True:
        fib_num = (Fibonacci_Sequence[i - 1] + Fibonacci_Sequence[i - 2]) % m
        Fibonacci_Sequence.append(fib_num)
        if Fibonacci_Sequence[:(i + 1) // 2] == Fibonacci_Sequence[(i + 1)//2:]:
            return Fibonacci_Sequence[:(i + 1) // 2], (i + 1) // 2
        i += 1

def Last_fibonacci_digit(𝑛, m = 10):
    if 𝑛 <= 1:
        return 𝑛
    Fibonacci_Sequence, sequence_length = set_fib_sequence(m)

    times, fib_position = divmod(n, sequence_length)
    x = sum(Fibonacci_Sequence) * times + sum(Fibonacci_Sequence[:fib_position + 1])
    return x % 10

if __name__ == "__main__":
    n = int(input())
    print(Last_fibonacci_digit(n))