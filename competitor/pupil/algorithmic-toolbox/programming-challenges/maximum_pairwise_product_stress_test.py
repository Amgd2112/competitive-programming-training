import collections
import heapq
import random
import sys
from bisect import bisect_left, bisect_right  # c++ lowerbound, upperbound

N = 5
M = 2 * 100000

if __debug__:
    random.seed(0)
    # sys.stdin = open('\\'.join([sys.path[0], 'input.txt']), 'r')
    input = sys.stdin.buffer.readline().rstrip
    print = sys.stdout.write


def max_pairwise_product_naive(a):
    max_product = -1
    l = len(a)
    for i in range(l):
        for j in range(i+1, l):
            product = a[i] * a[j]
            if product > max_product:
                max_product = product
    return max_product


def max_pairwise_product_fast(a):
    max1 = max1_idx = -1
    l = len(a)
    for i in range(l):
        if a[i] > max1:
            max1 = a[i]
            max1_idx = i

    max2 = -1
    for i in range(l):
        if i == max1_idx:
            continue
        if a[i] > max2:
            max2 = a[i]

    return max1 * max2


def max_pairwise_product_fast_heapify(a):
    max1, max2 = heapq.nlargest(2, a)
    return max1 * max2


def main():
    while True:
        n = random.randint(2, N)
        a = [random.randint(0, M) for i in range(n)]
        print(' '.join(map(str, a)) + '\n')

        res1 = max_pairwise_product_naive(a)
        res2 = max_pairwise_product_fast(a)
        res3 = max_pairwise_product_fast_heapify(a)

        assert res1 == res2, f'Wrong answer: {res1} != {res2}\n'


if __name__ == '__main__':
    main()
