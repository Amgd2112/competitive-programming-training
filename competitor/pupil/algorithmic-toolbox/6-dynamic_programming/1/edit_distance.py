def insertion(m, i, j):
    return m[i - 1][j]

def deletion(m, i, j):
    return m[i][j - 1]

def mismatch(m, i, j):
    return m[i - 1][j - 1]

# def edit_distance(s1, s2):
#     m = len(s1) + 1
#     n = len(s2) + 1

#     tbl = {}
#     for i in range(m):
#         tbl[i, 0] = i
#     for j in range(n):
#         tbl[0, j] = j
#     for i in range(1, m):
#         for j in range(1, n):
#             cost = 0 if s1[i - 1] == s2[j - 1] else 1
#             tbl[i, j] = min(tbl[i, j - 1] + 1, tbl[i - 1, j] + 1, tbl[i - 1, j - 1] + cost)

#     return tbl[i, j]

def edit_distance(word1, word2, n, m):
    results = [[None] * m for i in range(n)]

    for i in range(n):
        for j in range(m):
            if i == 0:
                results[i][j] = j
            elif j == 0:
                results[i][j] = i
            elif word1[i - 1] == word2[j - 1]: #if match
                results[i][j] = results[i - 1][j - 1]
            else:
                value1 = insertion(results, i, j)
                value2 = deletion(results, i, j)
                value3 = mismatch(results, i, j)

                results[i][j] = min(value1, value2, value3) + 1

    return results[n - 1][m - 1]


if __name__ == "__main__":
    word1, word2 = input(), input()
    n, m = len(word1), len(word2)
    result = edit_distance(word1, word2, n + 1, m + 1)
    print(result)    
