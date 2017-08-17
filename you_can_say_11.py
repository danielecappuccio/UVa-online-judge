#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

while True:

    line = input().strip()
    if int(line) == 0:
        break

    odd = 0
    even = 0
    for i in range(len(line)):
        if i % 2 == 0:
            even += int(line[i])
        else:
            odd += int(line[i])
    
    if (odd - even) % 11 == 0:
        print(line, "is a multiple of 11.")
    else:
        print(line, "is not a multiple of 11.")
