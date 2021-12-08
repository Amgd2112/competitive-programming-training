def merge_sort(arr):
    # do split untill the length of array = 1
    if len(arr) <= 1:
        return arr

    # sort the left side
    left_half = merge_sort(arr[0:len(arr)//2])
    # sort the right side
    right_half = merge_sort(arr[len(arr)//2:])

    return list(merge(left_half, right_half)) # merge them together

def merge(list1, list2):
    l1, l2 = len(list1), len(list2)
    item_id1, item_id2 = 0, 0 # initial start index

    # if list1 and list2 have items so compare them
    while item_id1 < l1 and item_id2 < l2:
        if list1[item_id1] < list2[item_id2]:
            yield list1[item_id1] 	# add the new generator
            item_id1 += 1
        else:
            yield list2[item_id2]
            item_id2 += 1

    # if list1 has items and list2 hasn't 
    while item_id1 < l1:
        yield list1[item_id1]
        item_id1 += 1

    # otherwise
    while item_id2 < l2:
        yield list2[item_id2]
        item_id2 += 1

if __name__ == "__main__":
    l = [8, 2, 90, 32, 4, 2, -1, -2]
    print(merge_sort(l))