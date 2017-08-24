#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

factorials = []
factorials.append(1)

f = 1
for i in range(1, 1001):
    f = f * i
    factorials.append(f)

while True:
    try:
        line = input().strip()
        N = int(line)
        F = str(factorials[N])

        ans = 0
        for c in F:
            ans += int(c)

        print(ans)

    except EOFError:
        break