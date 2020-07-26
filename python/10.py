j = 0
a, b, c = [int(i) for i in input().split(" ")]
for i in range(a, b+1):
	if (c % i) == 0:
		j += 1
print(j)