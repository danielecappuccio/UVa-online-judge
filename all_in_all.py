#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

def subsequence(s, t):
    for c in s:
        if c not in t:
            return False
        index = t.index(c)
        t = t[index+1:]
    return True

while True:
    try:
        line = input()
        s = line.split()[0]
        t = line.split()[1]
        boolean = subsequence(s, t)
        if boolean:
            print("Yes")
        else:
            print("No")
    except EOFError:
        break
