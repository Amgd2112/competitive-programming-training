def Last_fibonacci_digit(𝑛, m):
    if 𝑛 <= 1:
        return 𝑛
    Fibonacci_Sequence = [0, 1]
    for i in range(2, n + 1):
        fib_num = (Fibonacci_Sequence[i - 1] + Fibonacci_Sequence[i - 2]) % m
        Fibonacci_Sequence.append(fib_num)
        if fib_num % m == 0:
            fib_num = (Fibonacci_Sequence[i] + Fibonacci_Sequence[i - 1]) % m
            if fib_num % m == 1:
                m = i
                break
    if n > m:
        return Fibonacci_Sequence[n % m]
    return Fibonacci_Sequence[n]

if __name__ == "__main__":
    n, m = map(int, input().split())
    print(Last_fibonacci_digit(n, m))