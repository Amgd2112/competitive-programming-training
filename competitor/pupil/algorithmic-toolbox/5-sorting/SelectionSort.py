def selection_sort(books):
    for sortedi in range(len(books) - 1):
        # to find the minimum item in list
        minimumItem = getMinItem(books, sortedi)

        # swap the minimum item with the frist item not sorted
        books[sortedi], books[minimumItem] = books[minimumItem], books[sortedi] 
    return books

def getMinItem(arr, start):
    minItem = start
    for i in range(start + 1, len(arr)):
        if arr[minItem] > arr[i]:
            minItem = i
    return minItem

if __name__ == "__main__":
    l = [8, 2, 90, 32, 4, 2, -1, -2]
    print(selection_sort(l))