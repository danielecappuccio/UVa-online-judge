from math import *

def isprime(k):
	for i in range(2, k):
		if k%i == 0:
			return False
	return True

N = int(input())
for i in range(N):
	i = int(input())
	k = 0
	while True:
		s = str(k)
		p = 1
		for c in s:
			p *= int(c)
		if p == i:
			break
		k += 1
		if k > 10 and isprime(k) and i%k == 0:
			k = -1
			break
	print(k)
