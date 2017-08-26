#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

d = {}

line = input().strip()
while line:
    word = line.split()[0]
    translation = line.split()[1]

    d[translation] = word

    line = input().strip()

while True:
    try:
        t = input().strip()
        if t in d:
            print(d[t])
        else:
            print("eh")

    except EOFError:
        break