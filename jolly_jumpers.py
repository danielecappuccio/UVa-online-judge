# 
# Competitive Programming
# 
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# 

while True:
	try:
		line = input()

		diffs = []
		
		list_of_values = line.split()
		length = int(line.split()[0])
		
		del list_of_values[0]
		
		for i in range(1, length):
			d = abs(int(list_of_values[i]) - int(list_of_values[i-1]))
			diffs.append(d)
		
		diffs.sort()
		jolly = True
		
		for i in range(length-1):
			if diffs[i] != i+1:
				jolly = False
	
		if jolly:
			print("Jolly")
		else:
			print("Not jolly")

	except EOFError:
		break
		
