#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

while True:
    line = input().strip()
    if line == "0":
        break

    groups = int(line.split()[0])
    string = line.split()[1]

    m = int(len(string) / groups)

    while string:
        group = string[:m]
        print(group[::-1], end = "")
        string = string[m:]

    print()

