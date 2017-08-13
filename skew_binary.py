import math

def find_exp(exp):
    return math.pow(2, exp) - 1

while True:
    n = int(input())
    if n == 0:
        break
    string = str(n)
    length = len(string)
    exp = length
    skew = 0
    for i in range(length):
        digit = int(string[i])
        if digit != 0:
            skew += digit * find_exp(exp)
        exp -= 1    
    print(int(skew))