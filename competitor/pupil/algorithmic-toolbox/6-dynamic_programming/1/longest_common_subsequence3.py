def lcs3(a, b, c, n, m, l):
    results = [[[None] * l for j in range(m)] for h in range(n)]
    for i in range(n):
        for j in range(m):
            for k in range(l):
                if i == 0 or j == 0 or k == 0:
                    results[i][j][k] = 0
                elif (a[i - 1] == b[j - 1] and a[i - 1] == c[k - 1]):
                    results[i][j][k] = results[i - 1][j - 1][k - 1] + 1
                else: 
                    results[i][j][k] = max(max(results[i - 1][j][k], results[i][j - 1][k]), results[i][j][k - 1])
    return results[n - 1][m - 1][l - 1]

if __name__ == '__main__':
    n1, a, n2, b, n3, c = int(input()), list(map(int, input().rstrip().split())), int(input()), list(map(int, input().rstrip().split())), int(input()), list(map(int, input().rstrip().split()))
    result = lcs3(a, b, c, n1 + 1, n2 + 1, n3 + 1)
    print(result)