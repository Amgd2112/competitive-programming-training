def set_fib_sequence(m = 10):
    Fibonacci_Sequence = [0, 1]
    i = 2 #current_index
    while True:
        fib_num = (Fibonacci_Sequence[i - 1] + Fibonacci_Sequence[i - 2]) % m
        Fibonacci_Sequence.append(fib_num)
        if Fibonacci_Sequence[:(i + 1) // 2] == Fibonacci_Sequence[(i + 1)//2:]:
            return Fibonacci_Sequence[:(i + 1) // 2], (i + 1) // 2
        i += 1

def Last_fibonacci_digit(start, end, m = 10):
    if end <= 1:
        return end
    Fibonacci_Sequence, sequence_length = set_fib_sequence(m)

    if end < sequence_length:
        return sum(Fibonacci_Sequence[start:end + 1]) % 10

    times, fib_position = divmod(end, sequence_length)
    x = sum(Fibonacci_Sequence[start%sequence_length:]) + sum(Fibonacci_Sequence) * (times - 1) + sum(Fibonacci_Sequence[:fib_position + 1])
    return x % 10

if __name__ == "__main__":
    start, end = map(int, input().split())
    print(Last_fibonacci_digit(start, end))