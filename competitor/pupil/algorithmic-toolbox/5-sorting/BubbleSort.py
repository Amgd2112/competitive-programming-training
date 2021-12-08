def bubble_sort(books):
    swap = True 
    for sortedi in range(len(books) - 1, -1, -1): # to get the sorted item each time the loop processing

        swap = False # there is no swaps done yet

        for i in range(sortedi):
            if books[i] > books[i+1]:
                books[i], books[i+1] = books[i+1], books[i]
                swap = True

        # if there no swaps in list done after the loop running that mean the list is sorted
        if swap is False:
            return books

if __name__ == "__main__":
    l = [8, 2, 90, 32, 4, 2, -1, -2]
    print(bubble_sort(l))