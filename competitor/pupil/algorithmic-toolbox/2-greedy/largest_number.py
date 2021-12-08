def isBetter(a, b):
    return True if int(a + b) >= int(b + a) else False

def LargestConcatenate(Numbers):
    yourSalary = ""

    while len(Numbers) > 0:
        maxNumber = "0"
        for number in Numbers:
            if isBetter(number, maxNumber):
                maxNumber = number
        yourSalary += maxNumber
        if Numbers[maxNumber] == 1:
            del Numbers[maxNumber]
        else:
            Numbers[maxNumber] -= 1

    return yourSalary

if __name__ == "__main__":
    input()
    nums = input().rstrip().split()
    Numbers = {}
    for num in nums:
        Numbers[num] = 1 if num not in Numbers else Numbers[num] + 1
    print(LargestConcatenate(Numbers))
