#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

dic = {}
while True:
	try:
		dic.clear()
		line = input()
		for c in line:
			if c in "abcdefghijklmnopqrstuvwxyz" or c in "ABCDEFGHIJKLMNOPQRSTUVWXYZ":
				if c in dic:
					dic[c] += 1
				else:
					dic[c] = 1
		max_freq = 0
		for key in dic:
			if dic[key] > max_freq:
				max_freq = dic[key]
		max_freq_list = []
		for key in dic:
			if dic[key] == max_freq:
				max_freq_list.append(key)
		max_freq_list.sort()
		for elem in max_freq_list:
			print(elem, end="")
		print(" " + str(max_freq))
	except EOFError:
		break
