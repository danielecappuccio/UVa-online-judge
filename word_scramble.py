#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

while True:
    try:
        line = input().strip()
        words = line.split()
        N = len(words)
        i = 1
        for word in words:
            if i == N:
                print(word[::-1])
            else:
                print(word[::-1], end=" ")
            i = i + 1
    except EOFError:
        break