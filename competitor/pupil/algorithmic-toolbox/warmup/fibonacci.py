Fibonacci_Sequence = {0:0, 1:1}
def Fibonacci(𝑛):
    if 𝑛 <= 1:
        return 𝑛
    if n not in Fibonacci_Sequence:
        Fibonacci_Sequence[n] = Fibonacci(𝑛 - 1) + Fibonacci(𝑛 - 2)
    return Fibonacci_Sequence[n]

if __name__ == "__main__":
    n = int(input())
    print(Fibonacci(n))