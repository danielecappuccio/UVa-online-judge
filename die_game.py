#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

while True:

    N = int(input())
    if not N:
        break

    top = 1
    bottom = 6
    east = 4
    west = 3
    north = 2
    south = 5

    for i in range(N):
        cmd = input().strip()
        tmp = top
        if cmd == "north":
            top, bottom, south, north = south, north, bottom, tmp
        elif cmd == "south":
            top, bottom, south, north = north, south, tmp, bottom
        elif cmd == "east":
            top, bottom, west, east = west, east, bottom, tmp
        elif cmd == "west":
            top, bottom, east, west = east, west, bottom, tmp

    print(top)