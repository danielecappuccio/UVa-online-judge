#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

d = {}
order = []

EOF = False
while not EOF:
    try:
        line = input().strip()
        integers = line.split()
        for e in integers:
            if e not in d:
                d[e] = 1
                order.append(e)
            else:
                d[e] = d[e] + 1

    except EOFError:
        EOF = True

for e in order:
    print(e, d[e])