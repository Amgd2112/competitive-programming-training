import collections
import heapq
import sys
from bisect import bisect_left, bisect_right  # c++ lowerbound, upperbound

sys.stdin = open('\\'.join([sys.path[0], 'input.txt']), 'r')
input = sys.stdin.buffer.readline().rstrip
print = sys.stdout.write


def main():
	x, y = map(int, input().split())
	print(str(x + y))


if __name__ == '__main__':
   main()
