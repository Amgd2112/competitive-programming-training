def binary_search(arr, target, frist_index, last_index):
    while frist_index <= last_index:
        middle_index = (frist_index + last_index) // 2  # get the middle index
        if target == arr[middle_index]:
            # check if target is in middle of the array
            return middle_index
        elif target > arr[middle_index]: # so if target at the right side of the middle 
            frist_index = middle_index + 1
        else:
            last_index = middle_index - 1
    return -1

if __name__ == "__main__":
    n1, *l1 = list(map(int, input().rstrip().split()))
    n2, *l2 = list(map(int, input().rstrip().split()))
    for num in l2:
        print(binary_search(l1, num, 0, n1 - 1), end = " ")