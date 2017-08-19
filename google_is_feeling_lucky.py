#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

cases = int(input())

for case in range(cases):
    relevance = 0
    ans = []

    for i in range(10):
        line = input().strip()
        website = line.split()[0]
        tmp = int(line.split()[1])

        if tmp > relevance:
            relevance = tmp
            del ans[:]
            ans.append(website)
        
        elif tmp == relevance:
            ans.append(website)

    print("Case #", case + 1, ":", sep = "")
    for element in ans:
        print(element)

