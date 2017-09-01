#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

def nextLine():
    line = input().strip()
    while not line:
        line = input().strip()
    return line

# Kadane's Algorithm - Time Complexity O(n) - Dynamic Programming
def max_subarray(A):
    max_ending_here = max_so_far = A[0]
    for x in A[1:]:
        max_ending_here = max(x, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far

endOfInput = False
N = int(input().strip())
while not endOfInput:

    read = 0
    array = []
    while read < N:
        line = nextLine()
        elements = line.split()
        for e in elements:
            array.append(int(e))
            read = read + 1
    
    ans = max_subarray(array)
    if ans > 0:
        print("The maximum winning streak is ", ans, ".", sep = "")
    else:
        print("Losing streak.")


    line = nextLine()
    N = int(line)
    if N == 0:
        endOfInput = True