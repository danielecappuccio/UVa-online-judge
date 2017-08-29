#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

while True:
    try:
        integer = int(input().strip())
        found = False
        multiple = 1
        while not found:
            if multiple % integer == 0:
                found = True
            else:
                multiple = 10 * multiple + 1
        print(len(str(multiple)))
    except EOFError:
        break
