#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

def printList(L):
    length = len(L)
    for i in range(length):
        if i == length - 1:
            print(L[i])
        else:
            print(L[i], " ", sep = "", end = "")

line = input().strip().split()
n = int(line[0])
m = int(line[1])
while n or m:

    ans = [1]

    for i in range(m):
        #read lines
        line = input().strip().split()
        A = int(line[0])
        B = int(line[1])

        if A not in ans and B not in ans:
            ans.insert(0, A)
            ans.insert(1, B)

        elif A not in ans:
            idx = ans.index(B)
            ans.insert(idx, A)
        
        elif B not in ans:
            idx = ans.index(A)
            ans.insert(idx + 1, B)
        
        else:
            j = ans.index(B)
            k = ans.index(A)
            if j < k:
                ans[j] = A 
                ans[k] = B

    for i in range(1, n + 1):
        if i not in ans:
            ans.append(i)

    printList(ans)

    line = input().strip().split()
    n = int(line[0])
    m = int(line[1])