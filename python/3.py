ab = input()
a, b = [int(i) for i in ab.split(" ")]
if a == b:
	print("a == b")
elif a < b:
	print("a < b")
elif a > b:
	print("a > b")
	