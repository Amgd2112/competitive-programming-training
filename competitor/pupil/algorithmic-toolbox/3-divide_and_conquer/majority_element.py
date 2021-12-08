# O(n)
def majority_element(nums, length, d = {}):
    for num in nums:
        if num not in d:
            d[num] = 1
        elif d[num] + 1 > length/2:
            return 1
        else:
            d[num] += 1
    return 0
            

if __name__ == "__main__":
    length = int(input())
    nums = list(map(int , input().rstrip().split()))
    print(majority_element(nums, length))