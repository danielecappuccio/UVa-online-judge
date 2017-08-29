#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

def differentDigits(s):
    length = len(s)
    for i in range(length):
        c = s[i]
        if c in s[i+1:]:
            return False
    
    return True

valid = {}
maxCase = 5000
for i in range(0, maxCase + 1):
    if differentDigits(str(i)):
        valid[i] = 1
    else:
        valid[i] = 0

EOF = False
while not EOF:
    try:
        line = input().strip()
        N = int(line.split()[0])
        M = int(line.split()[1])

        ans = 0

        # Bad input
        if N > M:
            tmp = N
            N = M
            M = tmp
        
        for i in range(N, M+1):
            ans += valid[i]

        print(ans)

    except EOFError:
        EOF = True