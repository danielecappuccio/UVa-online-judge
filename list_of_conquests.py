#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

import collections

dictionary = {}

T = int(input())
for t in range(T):
    line = input()
    country = line.split()[0]
    if country in dictionary:
        dictionary[country] += 1
    else:
        dictionary[country] = 1

od = collections.OrderedDict(sorted(dictionary.items()))
for key, value in od.items():
    print(key, value)
