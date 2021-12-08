def get_maximum_value(dataset, op):
    n = len(dataset)
    m = [[0] * n for i in range(n)] # all possible minimum values of expressions
    M = [[0] * n for i in range(n)] # all possible maximum values of expressions

    for i in range(n):

        M[i][i] = dataset[i]
        m[i][i] = dataset[i]


    for k in range(1, n):
        for i in range(n - k):

            j = i + k
            m[i][j], M[i][j] = get_min_max(i, j, m, M, op)

    return M[0][n - 1]

def get_min_max(i, j, m, M, op):
    min_value, max_value = 10000000000000, -10000000000000
    for k in range(i, j):

        value1 = evalt(M[i][k], M[k + 1][j], op[k])
        value2 = evalt(M[i][k], m[k + 1][j], op[k])
        value3 = evalt(m[i][k], M[k + 1][j], op[k])
        value4 = evalt(m[i][k], m[k + 1][j], op[k])

        min_value = min(min_value, value1, value2, value3, value4)
        max_value = max(max_value, value1, value2, value3, value4)

    return min_value, max_value

def evalt(a, b, op):
    if op == '+':
        return a + b
    elif op == '-':
        return a - b
    elif op == '*':
        return a * b
    else:
        assert False

if __name__ == "__main__":
    expression = input()

    op, dataset, num = [], [], ''
    for item in expression:

        if item == '*' or item == '+' or item == '-':
            op.append(item)
            dataset.append(int(num))
            num = ''
        else:
            num += item

    dataset.append(int(num))

    result = get_maximum_value(dataset, op)
    print(result)
