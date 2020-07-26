#num = [int(i) for i in input().split(" ")]
#for i in [0, 1, 0]:
#	if num[i] > num[i + 1]:
#		num[i] = num[i] ^ num[i + 1]
#		num[i + 1] = num[i] ^ num[i + 1]
#		num[i] = num[i] ^ num[i + 1]
#print(str(num[0]) + " " + str(num[1]) + " " + str(num[2]))

#num = sorted([int(i) for i in input().split(" ")], reverse = False)
#print(num[0], num[1], num[2])

num = [int(i) for i in input().split(" ")]
sortedNum = []
while len(num) > 0:
	minNum = num[0]
	for i in range(len(num)):
		if minNum > num[i]:
			minNum = num[i]
	sortedNum.append(minNum)
	num.remove(minNum)
print(" ".join([str(i) for i in sortedNum]))