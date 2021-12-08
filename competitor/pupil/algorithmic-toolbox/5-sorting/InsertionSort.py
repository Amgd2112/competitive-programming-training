def insertion_sort(arr):
    # to traversal in an array 
    for sorted_id in range(1, len(arr)): # let the frist item is sorted

        hole = sorted_id # the space we sheft untill sort

        # check if the next two pairs in unsorted order 
        # Compare the current element with previous one

        while arr[hole] < arr[hole - 1] and hole > 0:
            arr[hole], arr[hole - 1] = arr[hole - 1], arr[hole]
            hole -= 1

    return arr

if __name__ == "__main__":
    l = [8, 2, 90, 32, 4, 2, -1, -2]
    print(insertion_sort(l))