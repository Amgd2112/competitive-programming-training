def get_number_of_inversions(arr):
    if len(arr) == 1:
        return arr, 0
    else:
        mid = len(arr) // 2
        a = arr[:mid]
        b = arr[mid:]

        a, ai = get_number_of_inversions(a)
        b, bi = get_number_of_inversions(b)

        i, j, c = 0, 0, []

        inversions = 0 + ai + bi

    while i < len(a) and j < len(b):
        if a[i] <= b[j]:
            c.append(a[i])
            i += 1
        else:
            c.append(b[j])
            j += 1

            inversions += (len(a)-i)

    c += a[i:]
    c += b[j:]

    return c, inversions

if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().rstrip().split()))
    c, n = get_number_of_inversions(a)
    print(n)

    