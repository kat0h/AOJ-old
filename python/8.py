kaisu = 1
num2 = []
while True:
	num = input()
	if num != "0":
		num2.append(num)
	else:
		break
for i in num2:
	print("Case {}: {}".format(kaisu, i))
	kaisu += 1