#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

def sumDigits(s):
    ans = 0
    for c in s:
        ans += int(c)
    return str(ans)

N = input().strip()
while N != "0":

    tmp = N
    N = sumDigits(N)

    if int(N) % 9 > 0:
        print(tmp, "is not a multiple of 9.")

    else:
        degree = 1
        while len(N) > 1:
            degree = degree + 1
            N = sumDigits(N)
    
        print(tmp, " is a multiple of 9 and has 9-degree ", degree, ".", sep = "")

    N = input().strip()