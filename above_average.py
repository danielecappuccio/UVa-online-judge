#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
#

T = int(input())
for t in range(T):

    line = input()
    grades = line.split()
    N = int(grades[0])
    grades.remove(grades[0])

    s = 0
    for i in range(N):
        s += int(grades[i])
    
    average = s/N
    above = 0
    for i in range(N):
        if int(grades[i]) > average:
            above = above + 1
    
    print("{0:.3f}".format(100*above/N), "%", sep="")