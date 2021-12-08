def mx_value(m, i, j):
    return max(m[i - 1][j], m[i][j - 1])

def lcs2(a, b, n, m):
    results = [[None] * m for i in range(n)]
    for i in range(n):
        for j in range(m):
            if i == 0 or j == 0:
                results[i][j] = 0
            elif a[i - 1] == b[j - 1]:
                results[i][j] = results[i - 1][j - 1] + 1
            else:
                results[i][j] = mx_value(results, i, j)

    return results[n - 1][m - 1]

if __name__ == '__main__':
    n1, a, n2, b = int(input()), list(map(int, input().rstrip().split())), int(input()), list(map(int, input().rstrip().split()))
    result = lcs2(a, b, n1 + 1, n2 + 1)
    print(result)
