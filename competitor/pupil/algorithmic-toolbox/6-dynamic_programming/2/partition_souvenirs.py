def isSubsetSum(arr, n, total):
	if total == 0: 
		return True

	if n == 0 and total != 0: 
		return False

	if arr[n - 1] > total:
		return isSubsetSum (arr, n - 1, total) 

	return isSubsetSum (arr, n - 1, total) or isSubsetSum (arr, n - 1, total - arr[n - 1]) 


def findPartion(arr, n): 
	total = sum(arr)

	if total % 3 != 0: 
		return False 

	return isSubsetSum (arr, n, total // 3)

if __name__ == '__main__':
	n, arr = int(input()), list(map(int, input().split()))

	result = findPartion(arr, n)
	print(int(result))
