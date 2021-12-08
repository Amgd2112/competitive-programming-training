from math import sqrt
calc_distance = lambda p1, p2: sqrt( (p2[1] - p1[1]) ** 2 + (p2[0] - p1[0]) ** 2)

def minimum_distance(points, number_points):
    according_to_x = sorted(points, key = lambda point : point[0])
    return closest_util(according_to_x, number_points)
    
def bruteForce(points, number_points):
    num = 10000000000
    for i in range(number_points):
        for j in range(i + 1, number_points):
            p1, p2 = points[i], points[j]
            if calc_distance(p1, p2) < num:
                num = calc_distance(p1, p2)
    return num

def closest_util(points, number_points):
    if number_points <= 3:
        return bruteForce(points, number_points)

    mid = number_points // 2
    mid_point = points[mid]
    dl = closest_util(points, mid)
    dr = closest_util(points, number_points - mid)
    d = min(dl, dr)

    strip = []
    for i in range(number_points):
        if abs(points[i][0] - mid_point[0]) < d:
            strip.append(points[i])

    return min(d, strip_closest(strip, len(strip), d))

def strip_closest(points, size, d):
    according_to_y = sorted(points, key = lambda point : point[1])
    for i in range(size):
        for j in range(i + 1, size):
            if points[j][1] - points[i][1] < d:
                if calc_distance(points[i], points[j]) < d:
                    d = calc_distance(points[i], points[j])
            else:
                break
    return d

if __name__ == '__main__':
    number_points = int(input())
    points = [None] * number_points

    for i in range(number_points):
        current_point = list(map(int, input().rstrip().split()))
        points[i] = current_point

    print("{0:.9f}".format(minimum_distance(points, number_points)))
