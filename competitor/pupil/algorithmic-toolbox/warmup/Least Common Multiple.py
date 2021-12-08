def GCD(a, b):
    if b == 0:
        return a
    return GCD(b, a % b)

LCM = lambda a, b: int(a / GCD(a, b)) * b

if __name__ == "__main__":
    a, b = map(int , input().split())
    print(LCM(a, b))