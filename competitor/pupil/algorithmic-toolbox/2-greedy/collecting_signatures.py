def collectingSignatures(points):
    frist_point, current_point = 0, 1
    fPoint = points[frist_point]
    x1, y1 = points[frist_point]
    xPoints = []
    while current_point < len(points):
        cPoint = points[current_point]
        x2, y2 = cPoint
        if x2 > y1:
            xPoints.append(y1)
            frist_point = current_point
            x1, y1 = points[frist_point]
        current_point += 1
    xPoints.append(y1)
    return xPoints

if __name__ == "__main__":
    n = int(input())
    points = [tuple(map(int, input().rstrip().split())) for i in range(n)]
    points = sorted(points, key = lambda point: point[1])
    signatures = collectingSignatures(points)
    print(len(signatures))
    print(" ".join(map(str, signatures)))