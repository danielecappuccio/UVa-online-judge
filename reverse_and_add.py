 #
 # Competitive Programming
 #
 # @author        Daniele Cappuccio
 # @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 #

def is_palindrome(s):
    for i in range(int(len(s)/2)):
        if s[i] != s[len(s)-1-i]:
            return False
    return True

T = int(input())
for t in range(T):
    n = input()
    counter = 0
    while not is_palindrome(n):
        counter += 1
        reverse = ""
        for i in range(len(n)):
            reverse += str(n[len(n)-1-i])
        n = str(int(n) + int(reverse))
    print(counter, int(n))
    
