from random import randint

def partition(l, start, end):
    # initial pivot value and wall as end and start
    pivot = end
    pivot_value = l[pivot]
    wall = start
    
    # everything less than pivot go left the wall else go right
    # with known where is the wall ?!
    for i in range(start, end):
        if l[i] < pivot_value:
            l[wall], l[i] = l[i], l[wall]
            wall += 1 # move the wall right

    # get the end of new left side
    new_end_left_side = wall

    # improve quick sort, to never recompute occurence pivot
    while l[wall] == pivot_value and wall < pivot:
        wall += 1
    
    #put the pivot right in the wall position
    l[wall], l[pivot] = l[pivot], l[wall]

    # get the start of new right side
    new_start_right_side = wall

    return new_end_left_side, new_start_right_side

def randomized_partition(l, start, end):
    # to never hit the worst case O(n^2)
    pivot = randint(start, end) # select random pivot from the list

    l[end], l[pivot] = l[pivot], l[end] # move pivot value to the end of the list

    return partition(l, start, end) # do partition to current half

def quick_sort(l, start, end):
    if start < end:
        # do partition that can spilt the list into 2 halves 
        end_left_side, start_right_side = randomized_partition(l, start, end)
        #then sort left half and right half
        quick_sort(l, 0, end_left_side - 1) # sort left
        quick_sort(l, start_right_side + 1, end) # sort right
    return


def randomizedQuickSort(nums):
    if len(nums) > 1:

        # choose the pivot value
        # Randomized select pivot value
        pivot = randint(0, len(nums) - 1)
        pivot_value = nums[pivot]

        # partition
        leftSide, rightSide = [], []
        counter = 0
        for i in range(len(nums)):
            if nums[i] == pivot_value:
                counter += 1
            elif nums[i] < pivot_value:
                leftSide.append(nums[i])
            else:
                rightSide.append(nums[i])

        # combine
        return randomizedQuickSort(leftSide) + counter * [pivot_value] + randomizedQuickSort(rightSide)

    return nums

if __name__ == "__main__":
    n = int(input())
    l = list(map(int, input().rstrip().split()))
    print(" ".join(map(str, randomizedQuickSort(l))))