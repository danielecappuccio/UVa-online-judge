 #
 # Competitive Programming
 #
 # @author        Daniele Cappuccio
 # @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 #

while True:
    
    A = "abcdefghijklmnopqrstuvwxyz"

    try:

        line = input()
        words = 0
        
        for i in range(1, len(line)):
            if (line[i] in A or line[i] in A.upper()) and (line[i-1] not in A and line[i-1] not in A.upper()):
                words += 1

        if line[0] in A or line[0] in A.upper():
            words += 1

        print(words)

    except EOFError:
        break
