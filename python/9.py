num_str = []
while True:
	inputValue = input()
	if inputValue == "0 0":
		break
	num_str.append(inputValue)
for i in range(0, len(num_str)):
	a, b = [int(j) for j in num_str[i].split(" ")]
	if a > b:
		print(b, a)
	else:
		print(a, b)