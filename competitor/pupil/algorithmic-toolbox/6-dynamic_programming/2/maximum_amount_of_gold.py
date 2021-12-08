def knapsack(maximum_weight, items, n):
    value = [[0] * (maximum_weight + 1) for x in range(n + 1)]

    for i in range(n + 1):
        for wi in range(maximum_weight + 1):
            if i == 0 or wi == 0:
                value[i][wi] = 0
            elif items[i - 1][1] <= wi:
                value[i][wi] = max(items[i - 1][1] + value[i - 1][wi - items[i - 1][1]], value[i - 1][wi])
            else:
                value[i][wi] = value[i - 1][wi]

    return value[n][maximum_weight]

if __name__ == '__main__':
    maximum_weight, n = map(int, input().rstrip().split())
    weights = list(map(int, input().rstrip().split()))
    items = [(1, weight) for weight in weights]
    max_value = knapsack(maximum_weight, items, n)
    print(max_value)