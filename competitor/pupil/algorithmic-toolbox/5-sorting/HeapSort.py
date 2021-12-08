import heapq
from copy import deepcopy

def heap_sort(arr, n):
# copy the array
    heap = deepcopy(arr)
# turn the array into a heap
    heapq.heapify(heap)

    result = [None] * n

    for i in range(n):
    # set the i-th item to the popped value = minimum item in the heap
        result[i] = heapq.heappop(heap)

    return result

if __name__ == "__main__":
    arr = [3, 5, 12, 3, 0]
    n = len(arr)

    sorted_arr = heap_sort(arr, n)
    print(sorted_arr)