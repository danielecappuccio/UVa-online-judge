#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

note = {}
# W H Q E S T X
note['W'] = 1.0
note['H'] = 0.5
note['Q'] = 0.25
note['E'] = 0.125
note['S'] = 0.0625
note['T'] = 0.03125
note['X'] = 0.015625

line = input().strip()
while not line == "*":
    count = 0
    measures = line.split('/')
    for measure in measures:
        tmp = 0
        for char in measure:
            tmp += note[char]
        
        if tmp == 1:
            count = count + 1
    
    print(count)
    line = input().strip()