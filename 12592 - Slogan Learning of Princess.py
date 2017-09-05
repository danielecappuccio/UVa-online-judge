#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

d = {}

N = int(input().strip())
for i in range(N):
    s = input().strip()
    d[s] = input().strip()

Q = int(input().strip())
for i in range(Q):
    print(d[input().strip()])
