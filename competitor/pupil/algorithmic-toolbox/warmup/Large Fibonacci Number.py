Fibonacci_Sequence = [0, 1]
def Last_fibonacci_digit(𝑛):
    if 𝑛 <= 1:
        return 𝑛
    for i in range(2, n + 1):
        Fibonacci_Sequence.append((Fibonacci_Sequence[i - 1] + Fibonacci_Sequence[i - 2]) % 10)
    return Fibonacci_Sequence[n]

if __name__ == "__main__":
    n = int(input())
    print(Last_fibonacci_digit(n))