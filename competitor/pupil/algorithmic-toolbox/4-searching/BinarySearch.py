def binary_search(arr, target):
    #know the frist index and the last index in array
    frist_index, last_index = 0, len(arr) - 1

    found = half_search(arr, target, frist_index, last_index) # search in the list

    if found != -1:
        return found
    else:
        return "Not Found"

def half_search(arr, target, frist_index, last_index):

    if frist_index > last_index:
        return -1

    middle_index = (frist_index + last_index) // 2  # get the middle index

    if target == arr[middle_index]:
        # check if target is in middle of the array
        return middle_index 
    elif target > arr[middle_index]: # so if target at the right side of the middle 
        return half_search(arr, target, middle_index + 1, last_index) # go right
    else:
        return half_search(arr, target, frist_index, middle_index - 1) # othewist go left

if __name__ == "__main__":
    l = [1, 2, 3, 4, 5, 9, 90, 900]
    target = 90
    print(binary_search(l, target))