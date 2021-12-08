from bisect import *

def count_segments(left_points, right_points, point, size):
    left_index = size - bisect_right(left_points, point)
    right_index = bisect_left(right_points, point)
    return size - (left_index + right_index)

if __name__ == "__main__":
    s, p = map(int, input().rstrip().split())
    left_points, right_points = [None] * s, [None] * s
    for i in range(s):
        left_points[i], right_points[i] = map(int, input().rstrip().split())
    points = list(map(int, input().rstrip().split()))
    left_points, right_points = sorted(left_points), sorted(right_points)

    for point in points:
        print(count_segments(left_points, right_points, point, s), end = " ")
