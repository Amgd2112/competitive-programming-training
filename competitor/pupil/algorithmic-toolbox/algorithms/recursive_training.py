def say_i_am_top_coder(n):
    if n == 0:      #base case
        return ''
    print("I'm top coder") #some logic
    say_i_am_top_coder(n - 1) #sub-problem - to never go to infinity

def fact(n):
    if n <= 1:
        return 1
    return n * fact(n - 1)

def triangel(depth):
    if depth <= 0:
        return
    triangel(depth - 1)
    print('*' * depth)

def series_3n_plus1(n):
    if n == 1:
        return 1
    if n % 2 == 0:
        return 1 + series_3n_plus1(n//2)
    return 1 + series_3n_plus1(3 * n + 1)

def sum_digits(n):
    if n == 0:
        return 0
    return n % 10 + sum_digits(n // 10)
    
def find_max(seq , i = 0, maximum = 0):
	# Describe a recursive algorithm for finding the maximum element in a sequence,
	# S, of n elements.
	if i == len(seq):
		return maximum
	if seq[i] > seq[maximum]:
		return find_max(seq, i+1, i)
	return find_max(seq, i+1, maximum)
	
def power(n, p):
	# Draw the recursion trace for the computation of power(2,5), using the
	# traditional function implemented .
	if p == 0:
		return 1
	return n * power(n, p - 1) if (p > 0) else 1/n * power(n, p + 1)

def reverse(arr):
	# Draw the recursion trace for the execution of function reverse(S, 0, 5)
	# S = [4, 3, 6, 2, 6]
	current_start, current_end = 0, len(arr) - 1
	return _reverse(arr, current_start, current_end)
def _reverse(arr, current_start, current_end):
	if current_start >= current_end:
		return arr
	arr[current_start],arr[current_end] = arr[current_end],arr[current_start]
	return _reverse(arr, current_start + 1, current_end - 1)

def Harmonic_number(n, i = 1):
	# Describe a recursive function for computing the nth Harmonic number,
	# Hn = nΣi = 1 (1/i)
	if n == i:
		return n
	return (1/i) + Harmonic_number(n, i+1)

def add_couma(n, digits = 0):
	# Describe a recursive function for converting a string of digits into the integer
	# it represents. For example, 13531 represents the integer 13,531.
	if n > 0:
		add_couma(n // 10, digits + 1)
		if digits % 3 == 0 and digits != 0:
			print( str(n%10) + ',' , end = '')
		else:
			print(n%10, end = '')
	return ''

def max_path(m, row, column):
    return _path_(m, 0, 0, row, column)
def _path_(m, row, column, lengthr, lengthc):
    if row < lengthr and column < lengthc:
        return m[row][column] + max(_path_(m, row, column + 1, lengthr, lengthc), _path_(m, row + 1, column, lengthr, lengthc))
    return 0

#define a function that returns a boolean if it's can reachable to end or not
def find_path(maze, start_point):
    i, j = start_point
    return canpass(maze, i, j, len(maze), len(maze[0]))
def canpass(maze, i, j, maze_height, maze_width, visited = {}):
#check if it's invalid index
    if i < maze_height and j < maze_width and i >= 0 and j >= 0:
    #visited before
        if i not in visited:
            visited[i] = {}
        if j in visited[i]:
            return False
        else:
            visited[i][j] = True
    #wrong way
        if maze[i][j] == 'X':
            return False
    #reached
        if maze[i][j] == 'E':
            return True
        
        if canpass(maze, i, j + 1, maze_height, maze_width, visited): #search right
            return True
        if canpass(maze, i, j - 1, maze_height, maze_width, visited): #search left
            return True
        if canpass(maze, i + 1, j, maze_height, maze_width, visited):#search up
            return True
        if canpass(maze, i - 1, j, maze_height, maze_width, visited):#search down
            return True
    visited[i][j] = False
    return False

# define a function that returns number of pixels can fill form any point
def flood_fill(picture, point):
    i, j = point
    return fill(picture, i, j, len(picture), len(picture[0]))
def fill(picture, i, j, picture_height, picture_width, visited = {}):
    if i < picture_height and j < picture_width and i >= 0 and j >= 0:
        if i not in visited:
            visited[i] = {}
        if j in visited[i]:
            return 0
        else:
            visited[i][j] = True

        if picture[i][j] == 'X':
            return 0
        
        return 1 + fill(picture, i, j + 1, picture_height, picture_width, visited) + fill(picture, i, j - 1, picture_height, picture_width, visited) +fill(picture, i + 1, j, picture_height, picture_width, visited) + fill(picture, i - 1, j, picture_height, picture_width, visited)
    return 0

def count_sections(picture):
# to count picture sections that connected
    picture_height, picture_width = len(picture), len(picture[0])
    visited = {}
    def mark_sections(i, j):
        if i < picture_height and j < picture_width and i >= 0 and j >= 0:
            if i not in visited:
                visited[i] = {}

            if j in visited[i]:
                return 0
            else:
                visited[i][j] = True

            if picture[i][j] == 'X':
                return 0

            mark_sections(i, j - 1) #mark the left if it's visited
            mark_sections(i, j + 1) #mark the right if it's visited
            mark_sections(i - 1, j) #mark the up if it's visited
            mark_sections(i + 1, j) #mark the down if it's visited
            return 1
        return 0

    count = 0
    for i in range(picture_height):
        for j in range(picture_width):
            count += mark_sections(i, j)
    return count


#define a function that returns all sub-sequence of given length n, of 0,1
def sub_sequence_of_01(n, binary_number = ""):
    if n > 0:
        sub_sequence_of_01(n - 1, binary_number + "0")
        sub_sequence_of_01(n - 1, binary_number + "1")
    print(binary_number)

#define a function that returns all sub-sequence of given length n, of 0,1, 2
def sub_sequence_of_012(n, binary_number = ""):
    if n > 0:
        sub_sequence_of_012(n - 1, binary_number + "0")
        sub_sequence_of_012(n - 1, binary_number + "1")
        sub_sequence_of_012(n - 1, binary_number + "2")
    print(binary_number)

if __name__ == '__main__':
    # print(triangel(7))
    print(series_3n_plus1(22))
    print(sum_digits(1234567890))
    matrix = [
        [1, 2, 90, 1],
        [8, 8, 8, 3],
        [9, 9, 1, 90]
    ]
    rows, columns = len(matrix), len(matrix[0])
    print(max_path(matrix, rows, columns))

    maze = [
        ['.', 'S', 'X', 'X', 'E'],
        ['.', '.', 'X', '.', '.'],
        ['.', '.', '.', '.', 'X'],
        ['X', '.', 'X', 'X', '.']
    ]
    print(find_path(maze, (0, 1)))

    panel = [
        ['.', '.', '.', '.', 'X', '.', '.', '.'],
        ['.', '.', '.', '.', 'X', 'X', 'X', 'X'],
        ['.', '.', 'X', '.', 'X', '.', '.', '.'],
        ['.', '.', 'X', '.', 'X', '.', 'X', '.'],
        ['.', '.', 'X', '.', 'X', '.', 'X', '.'],
        ['.', '.', '.', 'X', '.', 'X', 'X', 'X'],
    ]
    print(flood_fill(panel, (0, 0)))
    print(count_sections(panel))

    # sub_sequence_of_01(3)
    # sub_sequence_of_012(3)