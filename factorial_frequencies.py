#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)


while (True):
    inp = input();
    if inp == "0":
        break
    n = int(inp)
    print(n, "! --", sep = '')
    fact = str(factorial(n))
    print("   (0)    ", fact.count(str(0)), sep = '', end = '')
    for i in range(1, 5):
        print("    (", i, ")    ", fact.count(str(i)), sep = '', end = '')
    print("\n", end = '')
    print("   (5)    ", fact.count(str(5)), sep = '', end = '')
    for j in range(6, 10):
        print("    (", j, ")    ", fact.count(str(j)), sep = '', end = '')
    print("\n", end = '')
    
