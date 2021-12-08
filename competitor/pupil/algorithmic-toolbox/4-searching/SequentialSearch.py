def linear_search(cards, card):
    """search for something in an array linearly"""
    # to traversal in the list
    for peekcards in range(len(cards)):

        # check if the current item is the target
        if cards[peekcards] == card:
            return peekcards

    return "Not Found"

if __name__ == "__main__":
    l = [1, 2, 3, 4, 5, 9, 90, 900]
    target = 90
    print(linear_search(l, target))